#pragma once

#include "mainwindow.h"
#include "backup.h"

#define SUCCESSCOPY 0
#define SUCCESCREATE 1
#define FAIL 2

int startBackup(QListWidget *folderList, QString localBackupFolder, unsigned int *numFilesAndFolders, QProgressBar *progressBar) {
	QMessageBox msgBox;
	
	// check if any folder is selected
	if (!folderList->item(0)) {
		msgBox.setText("No folder(s) selected");
		msgBox.exec();
		return 2;
	}
	
	QDate currDate = QDate::currentDate();
	int year = currDate.year();
	int month = currDate.month();
	int day = currDate.day();
	
	QTime currTime = QTime::currentTime();
	int hours = currTime.hour();
	int minutes = currTime.minute();
	int seconds = currTime.second();

	//QString dateTime = year + QDateTime::currentDateTime().toString();
	QString dateTime = QString::number(year) + '_' + QString::number(month) + '_' + QString::number(day)
						+ '_' + QString::number(hours) + '-' + QString::number(minutes) + '-' + QString::number(seconds);

#ifdef _DEBUG
	localBackupFolder = "C:/Backup/Test";
#endif // _DEBUG

	QDir backupDir;
	backupDir.mkpath(localBackupFolder);

	QDir::setCurrent(localBackupFolder);
	backupDir.mkdir(dateTime);

	QFile logFile("log-" + dateTime + ".txt");

	if (!logFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
		msgBox.setText("Failed to create log file!");
		msgBox.exec();
		// TODO: ask User if he still wants to continue?
		return 1;
	}

	QTextStream logFileOutput(&logFile);

	// calculate Size of all Files
	unsigned long totalFilesAndFoldersSize = countFilesAndFolders(*folderList);
	
	// start backup
	logFileOutput << "Backup started at: " << QDateTime::currentDateTime().toString() << endl;
		
	copyContent(*folderList, localBackupFolder + '/' + dateTime, logFileOutput, dateTime, numFilesAndFolders, progressBar);

	// end backup
	logFileOutput << "Backup finished at: " << QDateTime::currentDateTime().toString() << endl;
	
	return 0;
}

void copyContent(QListWidget &folderList, QString localBackupFolder, QTextStream &logFileOutput, QString dateTime, unsigned int *numFilesAndFolders, QProgressBar *progressBar) {
	int folderCount = folderList.count();
	
	QString folderToCopy, folderToCopyWithoutPath;

	// iterate trough all the folders in the list
	while (folderCount > 0) {

		folderToCopy = folderList.item(folderCount - 1)->text();

		folderToCopyWithoutPath = folderToCopy;
		folderToCopyWithoutPath = folderToCopyWithoutPath.remove(0, folderToCopy.lastIndexOf('/') + 1);
		
		copyDirRecursive(folderToCopy, localBackupFolder + '/' + folderToCopyWithoutPath, true, logFileOutput, numFilesAndFolders, progressBar);

		folderCount--;
	}

	return;
}

// following function taken from:
// https://gzeki.com/blog/view/Recursive_copy_files_from_one_directory_to_another_in_C++_(Qt_5)
// My modifications: 
// - changed the foreach, first the one for Directories, then the one for Files.. the original function did not copy properly
// - exchanged QDir::separator() with += '/'
// - others

bool copyDirRecursive(QString from_dir, QString to_dir, bool replace_on_conflit, QTextStream &logFileOutput, unsigned int *numFilesAndFolders, QProgressBar *progressBar) {
	QDir dir;
	dir.setPath(from_dir);

	from_dir += '/';
	to_dir += '/';

	numFilesAndFolders[0]++;

	foreach(QString copy_dir, dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot)) {
		QString from = from_dir + copy_dir;
		QString to = to_dir + copy_dir;

		if (dir.mkpath(to) == false) {
			return false;
		} else {
			writeLog(logFileOutput, to, SUCCESCREATE);
		}

		if (copyDirRecursive(from, to, replace_on_conflit, logFileOutput, numFilesAndFolders, progressBar) == false) {
			return false;
		}
	}

	foreach(QString copy_file, dir.entryList(QDir::Files | QDir::Hidden)) {
		QString from = from_dir + copy_file;
		QString to = to_dir + copy_file;

		if (QFile::exists(to)) {
			if (replace_on_conflit) {
				if (QFile::remove(to) == false) {
					return false;
				}
			} else {
				continue;
			}
		}

		if (QFile::copy(from, to) == false) {
			return false;
		} else {
			numFilesAndFolders[1]++;
			writeLog(logFileOutput, to, SUCCESSCOPY);
		}
	}

	return true;
}

void writeLog(QTextStream &logFileOutput, QString folder, unsigned short status) {

	// write to log file and show in mainwindow
	// TODO: show in main window
	if (status == SUCCESCREATE) {
		logFileOutput << "Succesfully created folder: " << folder << " " << QDateTime::currentMSecsSinceEpoch() << endl;
	} else if (status == SUCCESSCOPY) {
		logFileOutput << "Succesfully copied file: " << folder << " " << QDateTime::currentMSecsSinceEpoch() << endl;
	} else if (status == FAIL) {
		logFileOutput << "Failed to create folder: " << folder << " " << QDateTime::currentMSecsSinceEpoch() << endl;
	}
	
	return;
}

unsigned long countFilesAndFolders(QListWidget &folderList) {
	// take the .count because otherwise it would skip counting the starting folders
	unsigned long totalSize = 0;
	unsigned int folderCount = folderList.count();

	while (folderCount > 0) {
		QDir startDir(folderList.item(folderCount - 1)->text());

		totalSize += countFileSize(startDir.path());

		folderCount--;
	}
	
	return totalSize;
}

unsigned long countFileSize(const QString &startDirPath) {
	unsigned long filesTotalSize = 0;
	QDir dir(startDirPath);

	foreach(QString file, dir.entryList(QDir::Files | QDir::Hidden | QDir::NoDotAndDotDot)) {
		filesTotalSize += QFileInfo(dir, file).size();
	}

	foreach(QString subFolder, dir.entryList(QDir::Dirs | QDir::Hidden | QDir::NoDotAndDotDot)) {
		filesTotalSize += countFileSize(startDirPath + '/' + subFolder);
	}

	return filesTotalSize;
}

#include "mainwindow.h"
#include "backup.h"

#define SUCCESSCOPY 0
#define SUCCESCREATE 1
#define FAIL 2

int startBackup(QListWidget *folderList, QString localBackupFolder) {
	QMessageBox msgBox;
	
	// check if any folder is selected
	if (!folderList->item(0)) {
		msgBox.setText("No folder(s) selected");
		msgBox.exec();
		return 2;
	}	
	
	QString dateTime = QDateTime::currentDateTime().toString();
	dateTime.replace(':', '_');

#ifdef _DEBUG
	localBackupFolder = "D:/Backup/Test";
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
		
	logFileOutput << "Backup started at: " << dateTime << endl;
	
	// start backup
	bool copyStatus = copyContent(folderList, localBackupFolder + '/' + dateTime, logFileOutput, dateTime);

	dateTime = QDateTime::currentDateTime().toString();
	logFileOutput << "Backup finished successfully at: " << dateTime << endl;
	
	return 0;
}

bool copyContent(QListWidget *folderList, QString localBackupFolder, QTextStream &logFileOutput, QString dateTime) {
	// How about we start with the first folder in the list?
	QDirIterator dirIterator(folderList->item(0)->text());

	QString folderToCopy, folderToCopyWithoutPath;
		
	// iterate trough all the fodlers in the list
	while (dirIterator.hasNext()) {
		// get the name of the current Directory and send it to the copy function
		folderToCopy = folderList->item(0)->text();
		
		folderToCopyWithoutPath = folderToCopy;
		folderToCopyWithoutPath = folderToCopyWithoutPath.remove(0, folderToCopy.lastIndexOf('/') + 1);

		copy_dir_recursive(folderToCopy, localBackupFolder + '/' + folderToCopyWithoutPath, true, logFileOutput);
		
		dirIterator.next();
	}

	return true;
}

// following function taken from:
// https://gzeki.com/blog/view/Recursive_copy_files_from_one_directory_to_another_in_C++_(Qt_5)

bool copy_dir_recursive(QString from_dir, QString to_dir, bool replace_on_conflit, QTextStream &logFileOutput) {
	QDir dir;
	dir.setPath(from_dir);

	from_dir += '/';
	to_dir += '/';

	foreach(QString copy_file, dir.entryList(QDir::Files)) {
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
			writeLog(logFileOutput, to, SUCCESSCOPY);
		}
	}

	foreach(QString copy_dir, dir.entryList(QDir::Dirs | QDir::NoDotAndDotDot)) {
		QString from = from_dir + copy_dir;
		QString to = to_dir + copy_dir;

		if (dir.mkpath(to) == false) {
			return false;
		} else {
			writeLog(logFileOutput, to, SUCCESCREATE);
		}

		if (copy_dir_recursive(from, to, replace_on_conflit, logFileOutput) == false) {
			return false;
		}
	}

	return true;
}

void writeLog(QTextStream &logFileOutput, QString folder, unsigned short status) {

	// write to log file and show in mainwindow
	if (status == SUCCESCREATE) {
		logFileOutput << "Succesfully created folder: " << folder << " " << QDateTime::currentMSecsSinceEpoch() << endl;
	} else if (status == SUCCESSCOPY) {
		logFileOutput << "Succesfully copied file: " << folder << " " << QDateTime::currentMSecsSinceEpoch() << endl;
	} else if (status == FAIL) {
		logFileOutput << "Failed to create folder: " << folder << " " << QDateTime::currentMSecsSinceEpoch() << endl;
	}

	return;
}

#include "mainwindow.h"
#include "backup.h"

int startBackup(QListWidget *folderList, QString localBackupFolder) {
	QMessageBox msgBox;
	
	// check if any folder is selected
	if (!folderList->item(0)) {
		msgBox.setText("No folder(s) selected");
		msgBox.exec();
		return 2;
	}	
	
	QString dateTime = QDateTime::currentDateTime().toString();

#ifdef _DEBUG
	QFile logFile("D:/Backup/Test/log-" + dateTime.replace(':', '_') + ".txt");
#else
	QFile logFile(localBackupFolder + "/log-" + dateTime.replace(':', '_') + ".txt");
#endif // _DEBUG
	
	if (!logFile.open(QIODevice::WriteOnly | QIODevice::Text)) {
		msgBox.setText("Failed to create log file!");
		msgBox.exec();
		// TODO: ask User if he still wants to continue?
		return 1;
	}

	QTextStream logFileOutput(&logFile);
		
	logFileOutput << "Backup started at: " << dateTime << endl;
	
	// start backup
	bool copyStatus = copyContent(folderList, localBackupFolder, logFileOutput);

	dateTime = QDateTime::currentDateTime().toString();
	logFileOutput << "Backup finished successfully at: " << dateTime << endl;
	
	return 0;
}

bool copyContent(QListWidget *folderList, QString localBackupFolder, QTextStream &logFileOutput) {
	// How about we start with the first folder in the list?
	QDirIterator dirIterator(folderList->item(0)->text());

	QString folderToCopy, folderToCopyNoPath;

	QDir backupDir = localBackupFolder;
	
	unsigned int i = 0;

	while (dirIterator.hasNext()) {
		// get the name of the current Directory without the Path

		folderToCopy = folderList->item(i)->text();

		folderToCopyNoPath = folderToCopy;
		folderToCopyNoPath.remove(0, folderList->item(i)->text().lastIndexOf("\/") + 1);

		// now that we've got the name of the Dir, create it < .mkdir() >
		// before that: if backupDir does not exist, create it! < .mkpath() >

		if (!backupDir.mkpath(backupDir.path())) {
			logFileOutput << "Failed to create backup folder path: " << backupDir.path()
				<< QDateTime::currentDateTime().toString() << endl;
		}

		if (!backupDir.mkdir(folderToCopyNoPath)) {
			logFileOutput << "Failed to create subfolder: " 
				<< QDateTime::currentDateTime().toString() << folderToCopy << endl;
		}

		if (QFile::copy(folderToCopy, localBackupFolder)) {
			logFileOutput << "Successfully copied folder: " << folderToCopy
				<< QDateTime::currentDateTime().toString() << ", to: " << localBackupFolder << endl;
		} else {
			logFileOutput << "Could not create folder: " << folderToCopy
				<< QDateTime::currentDateTime().toString() << ", in: " << localBackupFolder << endl;
		}

		i++;
	}

	return true;
}

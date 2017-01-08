#include "mainwindow.h"
#include "aboutdialog.h"
#include "GeneratedFiles\ui_mainwindow.h"
#include "GeneratedFiles\ui_aboutdialog.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
	ui->setupUi(this);

	/*
		Backup Settings groupbox
	*/
	QStringList backupType;
	backupType << "Incremental" << "Full";
	ui->comboBoxBackupType->addItems(backupType);
	ui->groupBoxCompressionSettings->setDisabled(true);

	/*
		Compression Settings groupbox
	*/
	ui->compressionSizeCustom->setPlaceholderText("enter size");
	ui->compressionSizeCustom->setDisabled(true);

	QStringList sizeType;
	sizeType << "KB" << "MB" << "GB";
	ui->comboBoxCompressionSizeType->addItems(sizeType);

	QStringList compressionLevels;
	compressionLevels << "None" << "Low" << "Medium" << "High" << "Ultra";
	ui->comboBoxCompressionLevel->addItems(compressionLevels);

	/*
		Backup Destination settings groupbox
	*/
	ui->lineBackupFolderLocal->setDisabled(true);
	ui->pushButtonBrowseBackupDestination->setDisabled(true);

	/*
		Backup Progress groupbox
	*/
	ui->progressBarBackup->setValue(0);
	ui->errorCounter->intValue();

	/*
		Remote backup config
	*/
	ui->lineEditFtpIp->setDisabled(true);
	ui->lineEditFtpPort->setDisabled(true);
	ui->lineEditFtpUsername->setDisabled(true);
	ui->lineEditFtpPassword->setDisabled(true);
	ui->lineEditFtpDirectory->setDisabled(true);
}

MainWindow::~MainWindow() {
	delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event) {
	if (askToSaveSettings()) {
		saveSettingsToCfg();
	}
	event->accept();
}

bool MainWindow::askToSaveSettings() {
	if (!ui->listWidgetFoldersToBackup->count()) {
		return false;
	}
	const QMessageBox::StandardButton ret = QMessageBox::warning(this, tr("Warning"),
							   tr("Do you want to save your settings?"),
							   QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
	switch (ret) {
		case QMessageBox::Save:
			return saveSettingsToCfg();
			break;
		case QMessageBox::Cancel:
			return false;
		default:
			break;
	}
	return true;
}

bool MainWindow::saveSettingsToCfg() {
	return true;
}

void MainWindow::on_actionOpen_triggered() {
	QFileDialog::getOpenFileName(this, tr("Open backupTool configuration file"), QDir::homePath(),
								 tr("cfg file") + QString::fromUtf8(" (*.cfg)"));
	
	// open the config file and load settings
}

void MainWindow::on_actionSave_triggered() {
	QStringList folderList;

	// traverse trough list of folders and add them into stringlist
	int numOfItems = ui->listWidgetFoldersToBackup->count();
	for (int i = 0; i < numOfItems; ++i) {
		folderList << ui->listWidgetFoldersToBackup->item(i)->text();
	}
	folderList.sort();

	// Create the file and it's name, the name is the current date and time
	QString dateTime = QDateTime::currentDateTime().toString();
	dateTime.replace(" ", "_");
	dateTime.replace(":", "_");

	// opens OS's default dialog and lets user input name of the config file to save as
	QFile fileSaveSettings(QFileDialog::getSaveFileName(this, tr("Save backupTool configuration file"), QDir::homePath(),
														tr("cfg file") + QString::fromUtf8(" (*.cfg)")));

	if (fileSaveSettings.open(QIODevice::WriteOnly | QIODevice::Text)) {
		QTextStream out(&fileSaveSettings);
		numOfItems = folderList.count();
		for (int i = 0; i < numOfItems; ++i) {
			out << folderList.at(i) << endl;
		}
		fileSaveSettings.close();
	}
}

void MainWindow::on_actionQuit_triggered() {
	MainWindow::~MainWindow();
}

void MainWindow::on_actionAbout_triggered() {
	aboutDialog aDialog;
	aDialog.setModal(true);
	aDialog.exec();
}

void MainWindow::on_pushButtonAddFolder_clicked() {
	QString dirAdd = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
														  QDir::homePath(), QFileDialog::ShowDirsOnly);
	if (!dirAdd.isEmpty()) {
		// If item already exists, don't add it
		for (int i = 0; i < ui->listWidgetFoldersToBackup->count(); ++i) {

			if (dirAdd == ui->listWidgetFoldersToBackup->item(i)->text()) {
				QMessageBox::information(this, "Attention",
										 "The selected folder is already in the list!\nIt won't be added.", 0x00000400);
				// 0x00000400 ==>> StandardButtons button = Ok
				return;
			}
		}
		ui->listWidgetFoldersToBackup->addItem(dirAdd);
	}
}

void MainWindow::on_pushButtonRemoveFolder_clicked() {
	if (!ui->listWidgetFoldersToBackup->currentItem()) {
		QMessageBox::information(this, "Attention", "No folder selected\nNothing to remove.", 0x00000400);
	} else if (ui->listWidgetFoldersToBackup->count()) {
		ui->listWidgetFoldersToBackup->currentItem()->~QListWidgetItem();
	}
}

void MainWindow::on_pushButtonBrowseBackupDestination_clicked() {
	QString dirAdd = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
														  QDir::homePath(), QFileDialog::ShowDirsOnly);
	QFile testWriteFile(dirAdd + '/' + "testFileBCKP");
	
	if (testWriteFile.open(QIODevice::ReadWrite)) {
		// write to a log file that folder is writeable
	}
	testWriteFile.close();
	testWriteFile.remove();

	if (!dirAdd.isEmpty()) {
		ui->lineBackupFolderLocal->insert(dirAdd);
	} else {
		QMessageBox::information(this, "Attention", "Error while adding folder.", 0x00000400);
	}
}

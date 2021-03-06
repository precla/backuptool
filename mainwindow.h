#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDateTime>
#include <QDir>
#include <QDirIterator> 
#include <QFile>
#include <QFileDialog>
#include <QFileSystemModel>
#include <QListWidget>
#include <QMessageBox>
#include <QProgressbar>
#include <QString>
#include <QStringList>
#include <QTextStream>
#include "aboutdialog.h"

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow {
	Q_OBJECT

protected:
	void closeEvent(QCloseEvent *event) Q_DECL_OVERRIDE;

public:
	explicit MainWindow(QWidget *parent = 0);
	~MainWindow();
	Ui::MainWindow *ui;

	//bool saveSettingsToCfg();

	private slots:
	void on_actionOpen_triggered();
	void on_actionSave_triggered();
	void on_actionQuit_triggered();
	void on_actionAbout_triggered();
	void on_pushButtonAddFolder_clicked();
	void on_pushButtonRemoveFolder_clicked();
	void on_pushButtonBrowseBackupDestination_clicked();

	void on_startBackupButton_clicked();

private:
	bool saveSettingsToCfg();
	bool askToSaveSettings();

};

#endif // MAINWINDOW_H

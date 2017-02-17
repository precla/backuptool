#pragma once

#include <QMainWindow>
#include <QFile>
#include <QFileSystemModel>
#include <QFileDialog>
#include <QMessageBox>
#include <QDateTime>
#include <QStringList>
#include <QTextStream>

bool copyDirRecursive(QString, QString, bool, QTextStream &, unsigned int *, QProgressBar *);

int startBackup(QListWidget *, QString, unsigned int *, QProgressBar *);

unsigned long countFilesAndFolders(QListWidget &);
unsigned long countFileSize(const QString &);

void copyContent(QListWidget &, QString, QTextStream &, QString, unsigned int *, QProgressBar *);
void writeLog(QTextStream &, QString, unsigned short);

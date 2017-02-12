#pragma once

#include <QMainWindow>
#include <QFile>
#include <QFileSystemModel>
#include <QFileDialog>
#include <QMessageBox>
#include <QDateTime>
#include <QStringList>
#include <QTextStream>

int startBackup(QListWidget *, QString, unsigned int *);
void copyContent(QListWidget &, QString, QTextStream &, QString, unsigned int *);
bool copy_dir_recursive(QString, QString, bool, QTextStream &, unsigned int *);
void writeLog(QTextStream &, QString, unsigned short);

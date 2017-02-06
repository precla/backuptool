#pragma once

#include <QMainWindow>
#include <QFile>
#include <QFileSystemModel>
#include <QFileDialog>
#include <QMessageBox>
#include <QDateTime>
#include <QStringList>
#include <QTextStream>

int startBackup(QListWidget *, QString);
bool copyContent(QListWidget *, QString, QTextStream &);

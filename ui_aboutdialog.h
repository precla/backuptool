/********************************************************************************
** Form generated from reading UI file 'aboutdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_aboutDialog
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *aboutDialog)
    {
        if (aboutDialog->objectName().isEmpty())
            aboutDialog->setObjectName(QStringLiteral("aboutDialog"));
        aboutDialog->resize(400, 300);
        pushButton = new QPushButton(aboutDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(300, 240, 75, 23));
        pushButton_2 = new QPushButton(aboutDialog);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 240, 141, 23));

        retranslateUi(aboutDialog);

        QMetaObject::connectSlotsByName(aboutDialog);
    } // setupUi

    void retranslateUi(QDialog *aboutDialog)
    {
        aboutDialog->setWindowTitle(QApplication::translate("aboutDialog", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("aboutDialog", "Close", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("aboutDialog", "Visit github page", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class aboutDialog: public Ui_aboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H

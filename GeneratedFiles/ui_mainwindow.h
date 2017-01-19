/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionQuit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QGroupBox *groupBoxFolders;
    QWidget *layoutWidgetFolders;
    QVBoxLayout *verticalLayout;
    QListWidget *listWidgetFoldersToBackup;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacerFolders;
    QPushButton *pushButtonAddFolder;
    QPushButton *pushButtonRemoveFolder;
    QGroupBox *groupBoxBackupSettings;
    QWidget *layoutWidgetBackup;
    QHBoxLayout *horizontalLayoutBackupType;
    QLabel *labelBackupType;
    QComboBox *comboBoxBackupType;
    QGroupBox *groupBoxDays;
    QWidget *layoutWidgetDays;
    QGridLayout *gridLayoutDays;
    QCheckBox *checkBoxMon;
    QCheckBox *checkBoxFri;
    QCheckBox *checkBoxTue;
    QCheckBox *checkBoxSat;
    QCheckBox *checkBoxWed;
    QCheckBox *checkBoxSun;
    QCheckBox *checkBoxThu;
    QCheckBox *checkBoxEveryDay;
    QWidget *layoutWidgetBackupPerDay;
    QHBoxLayout *horizontalLayoutBackupPerDay;
    QLabel *labelBackupPerDay;
    QSpacerItem *horizontalSpacerBackupsPerDay;
    QSpinBox *spinBoxBackupFrequencyPerDay;
    QCheckBox *checkBoxCompressionTrue;
    QGroupBox *groupBoxCompressionSettings;
    QWidget *layoutWidgetCompression;
    QHBoxLayout *horizontalLayoutCompressionMultiParts;
    QCheckBox *checkBoxCompressionMultipleParts;
    QPlainTextEdit *compressionSizeCustom;
    QComboBox *comboBoxCompressionSizeType;
    QWidget *layoutWidgetCompressionLevel;
    QHBoxLayout *horizontalLayoutCompressionLevel;
    QLabel *labelCompressionLevel;
    QComboBox *comboBoxCompressionLevel;
    QGroupBox *groupBoxBackupDestination;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_6;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *checkBoxLocalBackup;
    QPushButton *pushButtonBrowseBackupDestination;
    QLineEdit *lineBackupFolderLocal;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkBoxRemoteBackup;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelFtp;
    QSpacerItem *horizontalSpacerFtpIp;
    QLineEdit *lineEditFtpIp;
    QSpacerItem *horizontalSpacerFtpPort;
    QLabel *labelFtpPort;
    QLineEdit *lineEditFtpPort;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelFtpUsername;
    QSpacerItem *horizontalSpacerFtpUsername;
    QLineEdit *lineEditFtpUsername;
    QSpacerItem *horizontalSpacerFtpPassword;
    QLabel *labelFtpPassword;
    QLineEdit *lineEditFtpPassword;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelDirectory;
    QSpacerItem *horizontalSpacer;
    QLineEdit *lineEditFtpDirectory;
    QGroupBox *groupBoxBackupProgress;
    QWidget *layoutWidgetBackupProgress;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QProgressBar *progressBarBackup;
    QPushButton *buttonCancelBackup;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelErrorsDuringBackup;
    QLCDNumber *errorCounter;
    QPushButton *buttonViewErrorLog;
    QSpacerItem *horizontalSpacerErrors;
    QGroupBox *groupBoxOutput;
    QTextBrowser *textOutputOfBackup;
    QPushButton *startBackupButton;
    QGroupBox *iDidNotKnewWhatElseToPutHere;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_7;
    QLabel *labelQuotePartOne;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelQuotePartTwo;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(850, 620);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMinimumSize(QSize(850, 620));
        MainWindow->setMaximumSize(QSize(850, 620));
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBoxFolders = new QGroupBox(centralWidget);
        groupBoxFolders->setObjectName(QStringLiteral("groupBoxFolders"));
        groupBoxFolders->setGeometry(QRect(0, 5, 505, 291));
        QFont font;
        font.setFamily(QStringLiteral("Segoe UI"));
        font.setPointSize(9);
        groupBoxFolders->setFont(font);
        layoutWidgetFolders = new QWidget(groupBoxFolders);
        layoutWidgetFolders->setObjectName(QStringLiteral("layoutWidgetFolders"));
        layoutWidgetFolders->setGeometry(QRect(10, 20, 491, 261));
        layoutWidgetFolders->setFont(font);
        verticalLayout = new QVBoxLayout(layoutWidgetFolders);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        listWidgetFoldersToBackup = new QListWidget(layoutWidgetFolders);
        listWidgetFoldersToBackup->setObjectName(QStringLiteral("listWidgetFoldersToBackup"));
        listWidgetFoldersToBackup->setFont(font);

        verticalLayout->addWidget(listWidgetFoldersToBackup);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacerFolders = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacerFolders);

        pushButtonAddFolder = new QPushButton(layoutWidgetFolders);
        pushButtonAddFolder->setObjectName(QStringLiteral("pushButtonAddFolder"));
        pushButtonAddFolder->setFont(font);

        horizontalLayout->addWidget(pushButtonAddFolder);

        pushButtonRemoveFolder = new QPushButton(layoutWidgetFolders);
        pushButtonRemoveFolder->setObjectName(QStringLiteral("pushButtonRemoveFolder"));
        pushButtonRemoveFolder->setFont(font);

        horizontalLayout->addWidget(pushButtonRemoveFolder);


        verticalLayout->addLayout(horizontalLayout);

        groupBoxBackupSettings = new QGroupBox(centralWidget);
        groupBoxBackupSettings->setObjectName(QStringLiteral("groupBoxBackupSettings"));
        groupBoxBackupSettings->setGeometry(QRect(510, 5, 330, 211));
        groupBoxBackupSettings->setFont(font);
        layoutWidgetBackup = new QWidget(groupBoxBackupSettings);
        layoutWidgetBackup->setObjectName(QStringLiteral("layoutWidgetBackup"));
        layoutWidgetBackup->setGeometry(QRect(10, 20, 181, 23));
        layoutWidgetBackup->setFont(font);
        horizontalLayoutBackupType = new QHBoxLayout(layoutWidgetBackup);
        horizontalLayoutBackupType->setSpacing(6);
        horizontalLayoutBackupType->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutBackupType->setObjectName(QStringLiteral("horizontalLayoutBackupType"));
        horizontalLayoutBackupType->setContentsMargins(0, 0, 0, 0);
        labelBackupType = new QLabel(layoutWidgetBackup);
        labelBackupType->setObjectName(QStringLiteral("labelBackupType"));
        labelBackupType->setFont(font);

        horizontalLayoutBackupType->addWidget(labelBackupType);

        comboBoxBackupType = new QComboBox(layoutWidgetBackup);
        comboBoxBackupType->setObjectName(QStringLiteral("comboBoxBackupType"));
        comboBoxBackupType->setFont(font);

        horizontalLayoutBackupType->addWidget(comboBoxBackupType);

        groupBoxDays = new QGroupBox(groupBoxBackupSettings);
        groupBoxDays->setObjectName(QStringLiteral("groupBoxDays"));
        groupBoxDays->setGeometry(QRect(9, 79, 311, 121));
        groupBoxDays->setFont(font);
        layoutWidgetDays = new QWidget(groupBoxDays);
        layoutWidgetDays->setObjectName(QStringLiteral("layoutWidgetDays"));
        layoutWidgetDays->setGeometry(QRect(10, 20, 291, 96));
        layoutWidgetDays->setFont(font);
        gridLayoutDays = new QGridLayout(layoutWidgetDays);
        gridLayoutDays->setSpacing(6);
        gridLayoutDays->setContentsMargins(11, 11, 11, 11);
        gridLayoutDays->setObjectName(QStringLiteral("gridLayoutDays"));
        gridLayoutDays->setContentsMargins(0, 0, 0, 0);
        checkBoxMon = new QCheckBox(layoutWidgetDays);
        checkBoxMon->setObjectName(QStringLiteral("checkBoxMon"));
        checkBoxMon->setFont(font);

        gridLayoutDays->addWidget(checkBoxMon, 0, 0, 1, 1);

        checkBoxFri = new QCheckBox(layoutWidgetDays);
        checkBoxFri->setObjectName(QStringLiteral("checkBoxFri"));
        checkBoxFri->setFont(font);

        gridLayoutDays->addWidget(checkBoxFri, 0, 1, 1, 1);

        checkBoxTue = new QCheckBox(layoutWidgetDays);
        checkBoxTue->setObjectName(QStringLiteral("checkBoxTue"));
        checkBoxTue->setFont(font);

        gridLayoutDays->addWidget(checkBoxTue, 1, 0, 1, 1);

        checkBoxSat = new QCheckBox(layoutWidgetDays);
        checkBoxSat->setObjectName(QStringLiteral("checkBoxSat"));
        checkBoxSat->setFont(font);

        gridLayoutDays->addWidget(checkBoxSat, 1, 1, 1, 1);

        checkBoxWed = new QCheckBox(layoutWidgetDays);
        checkBoxWed->setObjectName(QStringLiteral("checkBoxWed"));
        checkBoxWed->setFont(font);

        gridLayoutDays->addWidget(checkBoxWed, 2, 0, 1, 1);

        checkBoxSun = new QCheckBox(layoutWidgetDays);
        checkBoxSun->setObjectName(QStringLiteral("checkBoxSun"));
        checkBoxSun->setFont(font);

        gridLayoutDays->addWidget(checkBoxSun, 2, 1, 1, 1);

        checkBoxThu = new QCheckBox(layoutWidgetDays);
        checkBoxThu->setObjectName(QStringLiteral("checkBoxThu"));
        checkBoxThu->setFont(font);

        gridLayoutDays->addWidget(checkBoxThu, 3, 0, 1, 1);

        checkBoxEveryDay = new QCheckBox(layoutWidgetDays);
        checkBoxEveryDay->setObjectName(QStringLiteral("checkBoxEveryDay"));
        checkBoxEveryDay->setFont(font);

        gridLayoutDays->addWidget(checkBoxEveryDay, 3, 1, 1, 1);

        layoutWidgetBackupPerDay = new QWidget(groupBoxBackupSettings);
        layoutWidgetBackupPerDay->setObjectName(QStringLiteral("layoutWidgetBackupPerDay"));
        layoutWidgetBackupPerDay->setGeometry(QRect(10, 50, 181, 23));
        layoutWidgetBackupPerDay->setFont(font);
        horizontalLayoutBackupPerDay = new QHBoxLayout(layoutWidgetBackupPerDay);
        horizontalLayoutBackupPerDay->setSpacing(6);
        horizontalLayoutBackupPerDay->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutBackupPerDay->setObjectName(QStringLiteral("horizontalLayoutBackupPerDay"));
        horizontalLayoutBackupPerDay->setContentsMargins(0, 0, 0, 0);
        labelBackupPerDay = new QLabel(layoutWidgetBackupPerDay);
        labelBackupPerDay->setObjectName(QStringLiteral("labelBackupPerDay"));
        labelBackupPerDay->setFont(font);

        horizontalLayoutBackupPerDay->addWidget(labelBackupPerDay);

        horizontalSpacerBackupsPerDay = new QSpacerItem(30, 20, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        horizontalLayoutBackupPerDay->addItem(horizontalSpacerBackupsPerDay);

        spinBoxBackupFrequencyPerDay = new QSpinBox(layoutWidgetBackupPerDay);
        spinBoxBackupFrequencyPerDay->setObjectName(QStringLiteral("spinBoxBackupFrequencyPerDay"));
        spinBoxBackupFrequencyPerDay->setFont(font);
        spinBoxBackupFrequencyPerDay->setMinimum(1);
        spinBoxBackupFrequencyPerDay->setMaximum(24);

        horizontalLayoutBackupPerDay->addWidget(spinBoxBackupFrequencyPerDay);

        checkBoxCompressionTrue = new QCheckBox(groupBoxBackupSettings);
        checkBoxCompressionTrue->setObjectName(QStringLiteral("checkBoxCompressionTrue"));
        checkBoxCompressionTrue->setGeometry(QRect(210, 20, 111, 17));
        checkBoxCompressionTrue->setFont(font);
        groupBoxCompressionSettings = new QGroupBox(centralWidget);
        groupBoxCompressionSettings->setObjectName(QStringLiteral("groupBoxCompressionSettings"));
        groupBoxCompressionSettings->setGeometry(QRect(510, 215, 331, 81));
        groupBoxCompressionSettings->setFont(font);
        layoutWidgetCompression = new QWidget(groupBoxCompressionSettings);
        layoutWidgetCompression->setObjectName(QStringLiteral("layoutWidgetCompression"));
        layoutWidgetCompression->setGeometry(QRect(10, 50, 321, 22));
        layoutWidgetCompression->setFont(font);
        horizontalLayoutCompressionMultiParts = new QHBoxLayout(layoutWidgetCompression);
        horizontalLayoutCompressionMultiParts->setSpacing(6);
        horizontalLayoutCompressionMultiParts->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutCompressionMultiParts->setObjectName(QStringLiteral("horizontalLayoutCompressionMultiParts"));
        horizontalLayoutCompressionMultiParts->setSizeConstraint(QLayout::SetFixedSize);
        horizontalLayoutCompressionMultiParts->setContentsMargins(0, 0, 0, 0);
        checkBoxCompressionMultipleParts = new QCheckBox(layoutWidgetCompression);
        checkBoxCompressionMultipleParts->setObjectName(QStringLiteral("checkBoxCompressionMultipleParts"));
        checkBoxCompressionMultipleParts->setMaximumSize(QSize(16777215, 19));
        checkBoxCompressionMultipleParts->setFont(font);

        horizontalLayoutCompressionMultiParts->addWidget(checkBoxCompressionMultipleParts, 0, Qt::AlignLeft);

        compressionSizeCustom = new QPlainTextEdit(layoutWidgetCompression);
        compressionSizeCustom->setObjectName(QStringLiteral("compressionSizeCustom"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(compressionSizeCustom->sizePolicy().hasHeightForWidth());
        compressionSizeCustom->setSizePolicy(sizePolicy1);
        compressionSizeCustom->setMaximumSize(QSize(120, 19));
        compressionSizeCustom->setFont(font);
        compressionSizeCustom->setLayoutDirection(Qt::LeftToRight);
        compressionSizeCustom->setInputMethodHints(Qt::ImhDigitsOnly);
        compressionSizeCustom->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        compressionSizeCustom->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        compressionSizeCustom->setOverwriteMode(false);

        horizontalLayoutCompressionMultiParts->addWidget(compressionSizeCustom);

        comboBoxCompressionSizeType = new QComboBox(layoutWidgetCompression);
        comboBoxCompressionSizeType->setObjectName(QStringLiteral("comboBoxCompressionSizeType"));
        comboBoxCompressionSizeType->setMaximumSize(QSize(40, 19));
        comboBoxCompressionSizeType->setFont(font);
        comboBoxCompressionSizeType->setLocale(QLocale(QLocale::English, QLocale::UnitedKingdom));

        horizontalLayoutCompressionMultiParts->addWidget(comboBoxCompressionSizeType);

        layoutWidgetCompressionLevel = new QWidget(groupBoxCompressionSettings);
        layoutWidgetCompressionLevel->setObjectName(QStringLiteral("layoutWidgetCompressionLevel"));
        layoutWidgetCompressionLevel->setGeometry(QRect(10, 20, 321, 23));
        layoutWidgetCompressionLevel->setFont(font);
        horizontalLayoutCompressionLevel = new QHBoxLayout(layoutWidgetCompressionLevel);
        horizontalLayoutCompressionLevel->setSpacing(6);
        horizontalLayoutCompressionLevel->setContentsMargins(11, 11, 11, 11);
        horizontalLayoutCompressionLevel->setObjectName(QStringLiteral("horizontalLayoutCompressionLevel"));
        horizontalLayoutCompressionLevel->setContentsMargins(0, 0, 0, 0);
        labelCompressionLevel = new QLabel(layoutWidgetCompressionLevel);
        labelCompressionLevel->setObjectName(QStringLiteral("labelCompressionLevel"));
        labelCompressionLevel->setFont(font);

        horizontalLayoutCompressionLevel->addWidget(labelCompressionLevel);

        comboBoxCompressionLevel = new QComboBox(layoutWidgetCompressionLevel);
        comboBoxCompressionLevel->setObjectName(QStringLiteral("comboBoxCompressionLevel"));
        comboBoxCompressionLevel->setFont(font);

        horizontalLayoutCompressionLevel->addWidget(comboBoxCompressionLevel);

        groupBoxBackupDestination = new QGroupBox(centralWidget);
        groupBoxBackupDestination->setObjectName(QStringLiteral("groupBoxBackupDestination"));
        groupBoxBackupDestination->setGeometry(QRect(0, 300, 411, 191));
        groupBoxBackupDestination->setFont(font);
        layoutWidget = new QWidget(groupBoxBackupDestination);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 20, 391, 172));
        QFont font1;
        font1.setFamily(QStringLiteral("Segoe UI"));
        layoutWidget->setFont(font1);
        verticalLayout_6 = new QVBoxLayout(layoutWidget);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        checkBoxLocalBackup = new QCheckBox(layoutWidget);
        checkBoxLocalBackup->setObjectName(QStringLiteral("checkBoxLocalBackup"));
        checkBoxLocalBackup->setFont(font);

        horizontalLayout_2->addWidget(checkBoxLocalBackup);

        pushButtonBrowseBackupDestination = new QPushButton(layoutWidget);
        pushButtonBrowseBackupDestination->setObjectName(QStringLiteral("pushButtonBrowseBackupDestination"));
        pushButtonBrowseBackupDestination->setFont(font);

        horizontalLayout_2->addWidget(pushButtonBrowseBackupDestination);


        verticalLayout_2->addLayout(horizontalLayout_2);

        lineBackupFolderLocal = new QLineEdit(layoutWidget);
        lineBackupFolderLocal->setObjectName(QStringLiteral("lineBackupFolderLocal"));
        lineBackupFolderLocal->setFont(font);
        lineBackupFolderLocal->setDragEnabled(true);

        verticalLayout_2->addWidget(lineBackupFolderLocal);


        verticalLayout_6->addLayout(verticalLayout_2);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        checkBoxRemoteBackup = new QCheckBox(layoutWidget);
        checkBoxRemoteBackup->setObjectName(QStringLiteral("checkBoxRemoteBackup"));
        checkBoxRemoteBackup->setFont(font);

        verticalLayout_5->addWidget(checkBoxRemoteBackup);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        labelFtp = new QLabel(layoutWidget);
        labelFtp->setObjectName(QStringLiteral("labelFtp"));
        labelFtp->setFont(font1);

        horizontalLayout_5->addWidget(labelFtp);

        horizontalSpacerFtpIp = new QSpacerItem(20, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacerFtpIp);

        lineEditFtpIp = new QLineEdit(layoutWidget);
        lineEditFtpIp->setObjectName(QStringLiteral("lineEditFtpIp"));
        lineEditFtpIp->setFont(font1);

        horizontalLayout_5->addWidget(lineEditFtpIp);

        horizontalSpacerFtpPort = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacerFtpPort);

        labelFtpPort = new QLabel(layoutWidget);
        labelFtpPort->setObjectName(QStringLiteral("labelFtpPort"));
        labelFtpPort->setFont(font1);

        horizontalLayout_5->addWidget(labelFtpPort);

        lineEditFtpPort = new QLineEdit(layoutWidget);
        lineEditFtpPort->setObjectName(QStringLiteral("lineEditFtpPort"));
        lineEditFtpPort->setFont(font1);

        horizontalLayout_5->addWidget(lineEditFtpPort);


        verticalLayout_4->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        labelFtpUsername = new QLabel(layoutWidget);
        labelFtpUsername->setObjectName(QStringLiteral("labelFtpUsername"));
        labelFtpUsername->setFont(font1);

        horizontalLayout_6->addWidget(labelFtpUsername);

        horizontalSpacerFtpUsername = new QSpacerItem(14, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacerFtpUsername);

        lineEditFtpUsername = new QLineEdit(layoutWidget);
        lineEditFtpUsername->setObjectName(QStringLiteral("lineEditFtpUsername"));
        lineEditFtpUsername->setFont(font1);

        horizontalLayout_6->addWidget(lineEditFtpUsername);

        horizontalSpacerFtpPassword = new QSpacerItem(22, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacerFtpPassword);

        labelFtpPassword = new QLabel(layoutWidget);
        labelFtpPassword->setObjectName(QStringLiteral("labelFtpPassword"));
        labelFtpPassword->setFont(font1);

        horizontalLayout_6->addWidget(labelFtpPassword);

        lineEditFtpPassword = new QLineEdit(layoutWidget);
        lineEditFtpPassword->setObjectName(QStringLiteral("lineEditFtpPassword"));
        lineEditFtpPassword->setFont(font1);

        horizontalLayout_6->addWidget(lineEditFtpPassword);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        labelDirectory = new QLabel(layoutWidget);
        labelDirectory->setObjectName(QStringLiteral("labelDirectory"));
        labelDirectory->setFont(font1);

        horizontalLayout_7->addWidget(labelDirectory);

        horizontalSpacer = new QSpacerItem(19, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        lineEditFtpDirectory = new QLineEdit(layoutWidget);
        lineEditFtpDirectory->setObjectName(QStringLiteral("lineEditFtpDirectory"));
        lineEditFtpDirectory->setFont(font1);

        horizontalLayout_7->addWidget(lineEditFtpDirectory);


        verticalLayout_4->addLayout(horizontalLayout_7);


        verticalLayout_5->addLayout(verticalLayout_4);


        verticalLayout_6->addLayout(verticalLayout_5);

        groupBoxBackupProgress = new QGroupBox(centralWidget);
        groupBoxBackupProgress->setObjectName(QStringLiteral("groupBoxBackupProgress"));
        groupBoxBackupProgress->setGeometry(QRect(420, 400, 421, 91));
        groupBoxBackupProgress->setFont(font);
        layoutWidgetBackupProgress = new QWidget(groupBoxBackupProgress);
        layoutWidgetBackupProgress->setObjectName(QStringLiteral("layoutWidgetBackupProgress"));
        layoutWidgetBackupProgress->setGeometry(QRect(10, 20, 401, 61));
        layoutWidgetBackupProgress->setFont(font1);
        verticalLayout_3 = new QVBoxLayout(layoutWidgetBackupProgress);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        progressBarBackup = new QProgressBar(layoutWidgetBackupProgress);
        progressBarBackup->setObjectName(QStringLiteral("progressBarBackup"));
        progressBarBackup->setFont(font);
        progressBarBackup->setValue(24);

        horizontalLayout_4->addWidget(progressBarBackup);

        buttonCancelBackup = new QPushButton(layoutWidgetBackupProgress);
        buttonCancelBackup->setObjectName(QStringLiteral("buttonCancelBackup"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(buttonCancelBackup->sizePolicy().hasHeightForWidth());
        buttonCancelBackup->setSizePolicy(sizePolicy2);
        buttonCancelBackup->setFont(font1);

        horizontalLayout_4->addWidget(buttonCancelBackup);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        labelErrorsDuringBackup = new QLabel(layoutWidgetBackupProgress);
        labelErrorsDuringBackup->setObjectName(QStringLiteral("labelErrorsDuringBackup"));
        labelErrorsDuringBackup->setFont(font);

        horizontalLayout_3->addWidget(labelErrorsDuringBackup);

        errorCounter = new QLCDNumber(layoutWidgetBackupProgress);
        errorCounter->setObjectName(QStringLiteral("errorCounter"));
        errorCounter->setFont(font1);

        horizontalLayout_3->addWidget(errorCounter);

        buttonViewErrorLog = new QPushButton(layoutWidgetBackupProgress);
        buttonViewErrorLog->setObjectName(QStringLiteral("buttonViewErrorLog"));
        buttonViewErrorLog->setFont(font1);

        horizontalLayout_3->addWidget(buttonViewErrorLog);

        horizontalSpacerErrors = new QSpacerItem(115, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacerErrors);


        verticalLayout_3->addLayout(horizontalLayout_3);

        groupBoxOutput = new QGroupBox(centralWidget);
        groupBoxOutput->setObjectName(QStringLiteral("groupBoxOutput"));
        groupBoxOutput->setGeometry(QRect(0, 489, 841, 91));
        groupBoxOutput->setFont(font1);
        textOutputOfBackup = new QTextBrowser(groupBoxOutput);
        textOutputOfBackup->setObjectName(QStringLiteral("textOutputOfBackup"));
        textOutputOfBackup->setGeometry(QRect(10, 15, 701, 70));
        textOutputOfBackup->setFont(font1);
        startBackupButton = new QPushButton(groupBoxOutput);
        startBackupButton->setObjectName(QStringLiteral("startBackupButton"));
        startBackupButton->setGeometry(QRect(720, 15, 111, 70));
        iDidNotKnewWhatElseToPutHere = new QGroupBox(centralWidget);
        iDidNotKnewWhatElseToPutHere->setObjectName(QStringLiteral("iDidNotKnewWhatElseToPutHere"));
        iDidNotKnewWhatElseToPutHere->setGeometry(QRect(420, 300, 421, 101));
        iDidNotKnewWhatElseToPutHere->setFont(font1);
        layoutWidget1 = new QWidget(iDidNotKnewWhatElseToPutHere);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 19, 381, 71));
        verticalLayout_7 = new QVBoxLayout(layoutWidget1);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        labelQuotePartOne = new QLabel(layoutWidget1);
        labelQuotePartOne->setObjectName(QStringLiteral("labelQuotePartOne"));
        QFont font2;
        font2.setPointSize(14);
        labelQuotePartOne->setFont(font2);

        verticalLayout_7->addWidget(labelQuotePartOne);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        horizontalSpacer_2 = new QSpacerItem(110, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_2);

        labelQuotePartTwo = new QLabel(layoutWidget1);
        labelQuotePartTwo->setObjectName(QStringLiteral("labelQuotePartTwo"));
        labelQuotePartTwo->setFont(font2);

        horizontalLayout_8->addWidget(labelQuotePartTwo);


        verticalLayout_7->addLayout(horizontalLayout_8);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 850, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(listWidgetFoldersToBackup, pushButtonAddFolder);
        QWidget::setTabOrder(pushButtonAddFolder, pushButtonRemoveFolder);
        QWidget::setTabOrder(pushButtonRemoveFolder, comboBoxBackupType);
        QWidget::setTabOrder(comboBoxBackupType, checkBoxCompressionTrue);
        QWidget::setTabOrder(checkBoxCompressionTrue, spinBoxBackupFrequencyPerDay);
        QWidget::setTabOrder(spinBoxBackupFrequencyPerDay, checkBoxMon);
        QWidget::setTabOrder(checkBoxMon, checkBoxTue);
        QWidget::setTabOrder(checkBoxTue, checkBoxWed);
        QWidget::setTabOrder(checkBoxWed, checkBoxThu);
        QWidget::setTabOrder(checkBoxThu, checkBoxFri);
        QWidget::setTabOrder(checkBoxFri, checkBoxSat);
        QWidget::setTabOrder(checkBoxSat, checkBoxSun);
        QWidget::setTabOrder(checkBoxSun, checkBoxEveryDay);
        QWidget::setTabOrder(checkBoxEveryDay, comboBoxCompressionLevel);
        QWidget::setTabOrder(comboBoxCompressionLevel, checkBoxCompressionMultipleParts);
        QWidget::setTabOrder(checkBoxCompressionMultipleParts, compressionSizeCustom);
        QWidget::setTabOrder(compressionSizeCustom, comboBoxCompressionSizeType);
        QWidget::setTabOrder(comboBoxCompressionSizeType, checkBoxLocalBackup);
        QWidget::setTabOrder(checkBoxLocalBackup, pushButtonBrowseBackupDestination);
        QWidget::setTabOrder(pushButtonBrowseBackupDestination, lineBackupFolderLocal);
        QWidget::setTabOrder(lineBackupFolderLocal, checkBoxRemoteBackup);
        QWidget::setTabOrder(checkBoxRemoteBackup, lineEditFtpIp);
        QWidget::setTabOrder(lineEditFtpIp, lineEditFtpPort);
        QWidget::setTabOrder(lineEditFtpPort, lineEditFtpUsername);
        QWidget::setTabOrder(lineEditFtpUsername, lineEditFtpPassword);
        QWidget::setTabOrder(lineEditFtpPassword, lineEditFtpDirectory);
        QWidget::setTabOrder(lineEditFtpDirectory, buttonCancelBackup);
        QWidget::setTabOrder(buttonCancelBackup, buttonViewErrorLog);
        QWidget::setTabOrder(buttonViewErrorLog, textOutputOfBackup);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuHelp->addAction(actionAbout);

        retranslateUi(MainWindow);
        QObject::connect(errorCounter, SIGNAL(windowIconTextChanged(QString)), buttonViewErrorLog, SLOT(show()));
        QObject::connect(checkBoxEveryDay, SIGNAL(clicked(bool)), checkBoxFri, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxEveryDay, SIGNAL(clicked(bool)), checkBoxSun, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxEveryDay, SIGNAL(clicked(bool)), checkBoxTue, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxEveryDay, SIGNAL(clicked(bool)), checkBoxWed, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxEveryDay, SIGNAL(clicked(bool)), checkBoxMon, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxEveryDay, SIGNAL(clicked(bool)), checkBoxSat, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxEveryDay, SIGNAL(clicked(bool)), checkBoxThu, SLOT(setDisabled(bool)));
        QObject::connect(checkBoxCompressionMultipleParts, SIGNAL(clicked(bool)), compressionSizeCustom, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxCompressionTrue, SIGNAL(clicked(bool)), groupBoxCompressionSettings, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxRemoteBackup, SIGNAL(clicked(bool)), lineEditFtpDirectory, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxRemoteBackup, SIGNAL(clicked(bool)), lineEditFtpUsername, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxLocalBackup, SIGNAL(clicked(bool)), lineBackupFolderLocal, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxRemoteBackup, SIGNAL(clicked(bool)), lineEditFtpIp, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxLocalBackup, SIGNAL(clicked(bool)), pushButtonBrowseBackupDestination, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxRemoteBackup, SIGNAL(clicked(bool)), lineEditFtpPort, SLOT(setEnabled(bool)));
        QObject::connect(checkBoxRemoteBackup, SIGNAL(clicked(bool)), lineEditFtpPassword, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "backupTool", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionSave->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", Q_NULLPTR));
        actionAbout->setText(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        groupBoxFolders->setTitle(QApplication::translate("MainWindow", "Folders to backup", Q_NULLPTR));
        pushButtonAddFolder->setText(QApplication::translate("MainWindow", "Add Folder", Q_NULLPTR));
        pushButtonRemoveFolder->setText(QApplication::translate("MainWindow", "Remove Folder", Q_NULLPTR));
        groupBoxBackupSettings->setTitle(QApplication::translate("MainWindow", "Backup settings", Q_NULLPTR));
        labelBackupType->setText(QApplication::translate("MainWindow", "Backup type:", Q_NULLPTR));
        groupBoxDays->setTitle(QApplication::translate("MainWindow", "Days to backup", Q_NULLPTR));
        checkBoxMon->setText(QApplication::translate("MainWindow", "Monday", Q_NULLPTR));
        checkBoxFri->setText(QApplication::translate("MainWindow", "Friday", Q_NULLPTR));
        checkBoxTue->setText(QApplication::translate("MainWindow", "Tuesday", Q_NULLPTR));
        checkBoxSat->setText(QApplication::translate("MainWindow", "Saturday", Q_NULLPTR));
        checkBoxWed->setText(QApplication::translate("MainWindow", "Wednesday", Q_NULLPTR));
        checkBoxSun->setText(QApplication::translate("MainWindow", "Sunday", Q_NULLPTR));
        checkBoxThu->setText(QApplication::translate("MainWindow", "Thursday", Q_NULLPTR));
        checkBoxEveryDay->setText(QApplication::translate("MainWindow", "Every Day", Q_NULLPTR));
        labelBackupPerDay->setText(QApplication::translate("MainWindow", "Backups per day:", Q_NULLPTR));
        checkBoxCompressionTrue->setText(QApplication::translate("MainWindow", "Use Compression", Q_NULLPTR));
        groupBoxCompressionSettings->setTitle(QApplication::translate("MainWindow", "Compression settings", Q_NULLPTR));
        checkBoxCompressionMultipleParts->setText(QApplication::translate("MainWindow", "Split into multiple parts", Q_NULLPTR));
        compressionSizeCustom->setPlainText(QString());
        compressionSizeCustom->setPlaceholderText(QString());
        labelCompressionLevel->setText(QApplication::translate("MainWindow", "Compression level:", Q_NULLPTR));
        groupBoxBackupDestination->setTitle(QApplication::translate("MainWindow", "Backup destination", Q_NULLPTR));
        checkBoxLocalBackup->setText(QApplication::translate("MainWindow", "Local backup", Q_NULLPTR));
        pushButtonBrowseBackupDestination->setText(QApplication::translate("MainWindow", "Browse", Q_NULLPTR));
        checkBoxRemoteBackup->setText(QApplication::translate("MainWindow", "Remote backup", Q_NULLPTR));
        labelFtp->setText(QApplication::translate("MainWindow", "FTP(S) IP:", Q_NULLPTR));
        lineEditFtpIp->setText(QString());
        labelFtpPort->setText(QApplication::translate("MainWindow", "Port:", Q_NULLPTR));
        labelFtpUsername->setText(QApplication::translate("MainWindow", "Username:", Q_NULLPTR));
        labelFtpPassword->setText(QApplication::translate("MainWindow", "Password:", Q_NULLPTR));
        labelDirectory->setText(QApplication::translate("MainWindow", "Directroy:", Q_NULLPTR));
        groupBoxBackupProgress->setTitle(QApplication::translate("MainWindow", "Backup progress", Q_NULLPTR));
        buttonCancelBackup->setText(QApplication::translate("MainWindow", "Cancel", Q_NULLPTR));
        labelErrorsDuringBackup->setText(QApplication::translate("MainWindow", "Errors during backup:", Q_NULLPTR));
        buttonViewErrorLog->setText(QApplication::translate("MainWindow", "View Error Log", Q_NULLPTR));
        groupBoxOutput->setTitle(QApplication::translate("MainWindow", "Output", Q_NULLPTR));
        startBackupButton->setText(QApplication::translate("MainWindow", "Start Backup", Q_NULLPTR));
        iDidNotKnewWhatElseToPutHere->setTitle(QApplication::translate("MainWindow", "Quote of backupTool:", Q_NULLPTR));
        labelQuotePartOne->setText(QApplication::translate("MainWindow", "A backup a day", Q_NULLPTR));
        labelQuotePartTwo->setText(QApplication::translate("MainWindow", "keeps the recovery tool away!", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuHelp->setTitle(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

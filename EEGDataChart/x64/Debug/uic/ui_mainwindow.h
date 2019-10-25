/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *reciveData;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *sendDataEdit;
    QComboBox *portName;
    QComboBox *baudRate;
    QComboBox *dataBits;
    QComboBox *parityCom;
    QComboBox *stopBit;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QComboBox *flowType;
    QPushButton *clearReceiveBtn;
    QPushButton *stopShowBtn;
    QPushButton *saveShowData;
    QGroupBox *groupBox;
    QCheckBox *hexShowCheck;
    QCheckBox *autoShowCheck;
    QGroupBox *groupBox_2;
    QPushButton *sendDataBtn;
    QPushButton *clearSendBtn;
    QPushButton *closeWindow;
    QGroupBox *groupBox_3;
    QPushButton *closeSerial;
    QPushButton *openSerial;
    QPushButton *DrawChart;
    QGroupBox *groupBox_4;
    QRadioButton *eightPreRadio;
    QRadioButton *tenPreRadio;
    QRadioButton *twelPreRadio;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(718, 450);
        MainWindow->setMinimumSize(QSize(718, 450));
        MainWindow->setMaximumSize(QSize(718, 450));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/png/soft.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        reciveData = new QTextBrowser(centralWidget);
        reciveData->setObjectName(QString::fromUtf8("reciveData"));
        reciveData->setGeometry(QRect(20, 20, 551, 321));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 54, 12));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 380, 54, 12));
        sendDataEdit = new QLineEdit(centralWidget);
        sendDataEdit->setObjectName(QString::fromUtf8("sendDataEdit"));
        sendDataEdit->setGeometry(QRect(20, 400, 371, 20));
        portName = new QComboBox(centralWidget);
        portName->setObjectName(QString::fromUtf8("portName"));
        portName->setGeometry(QRect(650, 10, 61, 22));
        baudRate = new QComboBox(centralWidget);
        baudRate->setObjectName(QString::fromUtf8("baudRate"));
        baudRate->setGeometry(QRect(650, 40, 61, 22));
        dataBits = new QComboBox(centralWidget);
        dataBits->setObjectName(QString::fromUtf8("dataBits"));
        dataBits->setGeometry(QRect(650, 70, 61, 22));
        parityCom = new QComboBox(centralWidget);
        parityCom->setObjectName(QString::fromUtf8("parityCom"));
        parityCom->setGeometry(QRect(650, 100, 61, 22));
        stopBit = new QComboBox(centralWidget);
        stopBit->setObjectName(QString::fromUtf8("stopBit"));
        stopBit->setGeometry(QRect(650, 130, 61, 22));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(610, 10, 41, 16));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(600, 40, 41, 16));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(600, 70, 41, 16));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(600, 100, 41, 16));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(600, 130, 41, 16));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(600, 160, 41, 16));
        flowType = new QComboBox(centralWidget);
        flowType->setObjectName(QString::fromUtf8("flowType"));
        flowType->setGeometry(QRect(650, 160, 61, 22));
        clearReceiveBtn = new QPushButton(centralWidget);
        clearReceiveBtn->setObjectName(QString::fromUtf8("clearReceiveBtn"));
        clearReceiveBtn->setGeometry(QRect(20, 350, 71, 23));
        stopShowBtn = new QPushButton(centralWidget);
        stopShowBtn->setObjectName(QString::fromUtf8("stopShowBtn"));
        stopShowBtn->setGeometry(QRect(100, 350, 61, 23));
        saveShowData = new QPushButton(centralWidget);
        saveShowData->setObjectName(QString::fromUtf8("saveShowData"));
        saveShowData->setGeometry(QRect(170, 350, 91, 23));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(270, 340, 120, 51));
        hexShowCheck = new QCheckBox(groupBox);
        hexShowCheck->setObjectName(QString::fromUtf8("hexShowCheck"));
        hexShowCheck->setGeometry(QRect(10, 30, 91, 16));
        hexShowCheck->setChecked(true);
        autoShowCheck = new QCheckBox(groupBox);
        autoShowCheck->setObjectName(QString::fromUtf8("autoShowCheck"));
        autoShowCheck->setGeometry(QRect(10, 10, 71, 16));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(400, 340, 171, 81));
        sendDataBtn = new QPushButton(groupBox_2);
        sendDataBtn->setObjectName(QString::fromUtf8("sendDataBtn"));
        sendDataBtn->setGeometry(QRect(100, 50, 61, 23));
        clearSendBtn = new QPushButton(groupBox_2);
        clearSendBtn->setObjectName(QString::fromUtf8("clearSendBtn"));
        clearSendBtn->setGeometry(QRect(10, 50, 81, 23));
        closeWindow = new QPushButton(centralWidget);
        closeWindow->setObjectName(QString::fromUtf8("closeWindow"));
        closeWindow->setGeometry(QRect(580, 380, 131, 41));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\350\241\214\346\245\267"));
        font.setPointSize(18);
        closeWindow->setFont(font);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/png/busy.png"), QSize(), QIcon::Normal, QIcon::Off);
        closeWindow->setIcon(icon1);
        closeWindow->setIconSize(QSize(64, 64));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(580, 290, 131, 81));
        closeSerial = new QPushButton(groupBox_3);
        closeSerial->setObjectName(QString::fromUtf8("closeSerial"));
        closeSerial->setGeometry(QRect(70, 20, 61, 23));
        openSerial = new QPushButton(groupBox_3);
        openSerial->setObjectName(QString::fromUtf8("openSerial"));
        openSerial->setGeometry(QRect(0, 20, 61, 23));
        DrawChart = new QPushButton(groupBox_3);
        DrawChart->setObjectName(QString::fromUtf8("DrawChart"));
        DrawChart->setGeometry(QRect(0, 50, 61, 28));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(580, 190, 131, 101));
        eightPreRadio = new QRadioButton(groupBox_4);
        eightPreRadio->setObjectName(QString::fromUtf8("eightPreRadio"));
        eightPreRadio->setGeometry(QRect(20, 20, 89, 16));
        tenPreRadio = new QRadioButton(groupBox_4);
        tenPreRadio->setObjectName(QString::fromUtf8("tenPreRadio"));
        tenPreRadio->setGeometry(QRect(20, 50, 89, 16));
        twelPreRadio = new QRadioButton(groupBox_4);
        twelPreRadio->setObjectName(QString::fromUtf8("twelPreRadio"));
        twelPreRadio->setGeometry(QRect(20, 80, 89, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 718, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\346\216\245\346\224\266\346\225\260\346\215\256\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\347\253\257\345\217\243\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\265\201\357\274\232", nullptr));
        clearReceiveBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\216\245\346\224\266\345\214\272", nullptr));
        stopShowBtn->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\346\230\276\347\244\272", nullptr));
        saveShowData->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230\346\230\276\347\244\272\346\225\260\346\215\256", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "-----", nullptr));
        hexShowCheck->setText(QCoreApplication::translate("MainWindow", "\345\215\201\345\205\255\350\277\233\345\210\266\346\230\276\347\244\272", nullptr));
        autoShowCheck->setText(QCoreApplication::translate("MainWindow", "\350\207\252\345\212\250\346\270\205\347\251\272", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "sendFileArea", nullptr));
        sendDataBtn->setText(QCoreApplication::translate("MainWindow", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        clearSendBtn->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\345\217\221\351\200\201\345\214\272", nullptr));
        closeWindow->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "----", nullptr));
        closeSerial->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        openSerial->setText(QCoreApplication::translate("MainWindow", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        DrawChart->setText(QCoreApplication::translate("MainWindow", "\347\273\230\345\210\266\345\233\276\347\272\277", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267\347\262\276\345\272\246\357\274\232", nullptr));
        eightPreRadio->setText(QCoreApplication::translate("MainWindow", "8\344\275\215\347\262\276\345\272\246", nullptr));
        tenPreRadio->setText(QCoreApplication::translate("MainWindow", "10\344\275\215\347\262\276\345\272\246", nullptr));
        twelPreRadio->setText(QCoreApplication::translate("MainWindow", "12\344\275\215\347\262\276\345\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

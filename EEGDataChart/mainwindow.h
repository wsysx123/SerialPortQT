#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "handledata.h"
#include <QMainWindow>
#include <QSerialPort>
#include"QTimerEvent"
#include"QTimer"
#include"QSystemTrayIcon"
#include "eegdataparser.h"
//#include "collectdata.h"


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
	QSerialPort *myCom;

    bool stopShow;
    QString strSelectFileData;
    bool showHexFlag;

    int timeId;
    QByteArray temp;

    QSystemTrayIcon *sysIcon;
    QMenu *menu;
    QAction *exitAct,*aboutAct;
    HandleData *hd;
	EEGDataParser *Parser;
    QTimer *time ;
	

    //Thread---Handle_data

private slots:
    void sendDataBtn();
    void openSerial();
    void closeSerial();
    void closeWindow();
    void clearSendArea();
    void clearReceiveDataArea();
    void stopShowData();
    void saveShowData();
    void showPlainText();
    //void timerEvent(QTimerEvent *e);
    void timeToReadCom();

    void iconSystemActived(QSystemTrayIcon::ActivationReason reason);

public:
    void initialSerial();
    void closeEvent(QCloseEvent* e);
    QString stringSpaceToHex(QByteArray str,char tag);
    void processShareData();
    void readMyCom();

};

#endif // MAINWINDOW_H

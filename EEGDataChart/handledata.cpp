#include "handledata.h"

HandleData::HandleData(QObject *parent) :
    QThread(parent)
{
}

void HandleData::run()
{
    while(1)
    {
        emit send_Handle_Data();//�ᴥ����ͼ
        msleep(200);
    }
}

void HandleData::stop()
{
    this->terminate();
    this->wait();
}

#include "collectdata.h"

CollectData::CollectData(QObject *parent) :
    QThread(parent)
{
}

void CollectData::run()
{
    while(1)
    {
        emit coleectDataNow();
        msleep(20);
    }
}

void CollectData::stop()
{
    this->terminate();
    this->wait();
}

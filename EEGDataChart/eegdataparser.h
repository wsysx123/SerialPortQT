#pragma once

#include <QThread>
#include "ThinkGearStreamParser.h"
#include "EEGPacket.h"
#include <queue>

class EEGDataParser : public QThread
{
	Q_OBJECT

public:
	EEGDataParser(QObject *parent=0);
	void run();
	void stop();
	void EEGDataParser::DataIn(QByteArray TempData);
	std::queue <EEGPacket> PacketQueue;
	std::queue <QByteArray> data;
	~EEGDataParser();
private:
	ThinkGearStreamParser DataStream;
};

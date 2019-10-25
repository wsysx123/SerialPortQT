#include "eegdataparser.h"
#include "ThinkGearStreamParser.h"
#include "EEGPacket.h"
#include <QDebug>
#include <queue>


EEGPacket* NowPacket;
std::queue<int> Raw;

void MyHandleDataValueFunc(unsigned char extendedCodeLevel,
	unsigned char code,
	unsigned char numBytes,
	const unsigned char* value,
	void* customData) {

	OneValue Tmp;
	if (code != PARSER_CODE_ASIC_EEG_POWER_INT) {
		Tmp.IfSet = true;
		Tmp.value = 0;
		for (int i = 0; i < numBytes; i++) {
			Tmp.value = Tmp.value << 8;
			Tmp.value += value[i];
		}
	}
	switch (code) {
	case PARSER_CODE_BATTERY:
		NowPacket->Bat = Tmp;
		break;
	case PARSER_CODE_POOR_QUALITY:
		NowPacket->PoorQuality = Tmp;
		break;
	case PARSER_CODE_ATTENTION:
		NowPacket->Attention = Tmp;
		break;
	case PARSER_CODE_MEDITATION:
		NowPacket->Meditation = Tmp;
		break;
	case PARSER_CODE_8BITRAW_SIGNAL:
		NowPacket->RawWave8 = Tmp;
		break;
	case PARSER_CODE_RAW_MARKER:
		NowPacket->RawMarker = Tmp;
		break;
	case PARSER_CODE_Blink:
		NowPacket->BlinkData = Tmp;
		break;
	case PARSER_CODE_RAW_SIGNAL:
		NowPacket->RawWave = Tmp;
		Raw.push(Tmp.value);
		break;
	case PARSER_CODE_EEG_POWERS:
		NowPacket->EEGPower = Tmp;
		break;
	case PARSER_CODE_ASIC_EEG_POWER_INT:
		NowPacket->ASIC_Power.IfSet = true;
		NowPacket->ASIC_Power.delta = value[0] << 16 | value[1] << 8 | value[2];
		NowPacket->ASIC_Power.theta = value[3] << 16 | value[4] << 8 | value[5];
		NowPacket->ASIC_Power.Lalpha = value[6] << 16 | value[7] << 8 | value[8];
		NowPacket->ASIC_Power.Halpha = value[9] << 16 | value[10] << 8 | value[11];
		NowPacket->ASIC_Power.Lbeta = value[12] << 16 | value[13] << 8 | value[14];
		NowPacket->ASIC_Power.Hbeta = value[15] << 16 | value[16] << 8 | value[17];
		NowPacket->ASIC_Power.Lgamma = value[18] << 16 | value[19] << 8 | value[20];
		NowPacket->ASIC_Power.Mgamma = value[21] << 16 | value[22] << 8 | value[23];

		break;
	default:
		qDebug() << "Parse Error,Code:" << code;
		break;
	}
}

EEGDataParser::EEGDataParser(QObject *parent)
	: QThread(parent)
{
	THINKGEAR_initParser(&this->DataStream, PARSER_TYPE_PACKETS, (MyHandleDataValueFunc), NULL);
}

void EEGDataParser::run() {
	while (1) {
		if (this->data.size() > 0) {
			QByteArray tmp = data.front();
			DataIn(tmp);
			data.pop();
		}
		msleep(800);
	}
}

void EEGDataParser::DataIn(QByteArray TempData) {
	QByteArray::iterator it = TempData.begin();
	while (it != TempData.end()) {
		THINKGEAR_parseByte(&this->DataStream, *it++);
	}
	this->PacketQueue.push(*NowPacket);
	//delete NowPacket;
	//NowPacket = NULL;
}

void EEGDataParser::stop() {
	this->terminate();
	this->wait();
}

EEGDataParser::~EEGDataParser()
{
}

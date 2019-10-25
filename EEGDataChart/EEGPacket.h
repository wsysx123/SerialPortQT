#pragma once
#include <QtGlobal>
typedef struct OneValue {
	bool IfSet = false;
	int value;
}OneValue;

typedef struct ASICEEG_Power {
	bool IfSet = false;
	int delta;
	int theta;
	int Lalpha;
	int Halpha;
	int Lbeta;
	int Hbeta;
	int Lgamma;
	int Mgamma;
};

typedef struct EEGPacket {
	OneValue Bat;
	OneValue PoorQuality;
	OneValue Attention;
	OneValue Meditation;
	OneValue BlinkData;
	OneValue RawWave8;
	OneValue RawMarker;
	OneValue RawWave;
	ASICEEG_Power ASIC_Power;
	OneValue EEGPower;
}EEGPacket;

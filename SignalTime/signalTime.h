#pragma once
#include "carCount.h"


class signalTime : public carCount
{
public:

	signalTime();


	void settingLanePriority();


	void calcTime();



protected:
	bool signal1, signal2, signal3, signal4;
	int signaltimers[3];
	int stimers[4];
};
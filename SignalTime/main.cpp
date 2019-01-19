#include "carCount.h"
#include "signalCirculation.h"
#include "signalTime.h"

#include <iostream>
#include <stdio.h>
#include <dos.h>
#include <Windows.h>
using namespace std;



int main()
{
	signalCirculation s;
	s.GetCarCount(15, 24, 4, 35);
	s.Display();
	s.settingLanePriority();
	s.calcTime();
	s.timeDelay();




	system("pause");
	return 0;
}
#include "signalCirculation.h"
#include <iostream>
#include <stdio.h>
#include <dos.h>
#include <Windows.h>
using namespace std;

signalCirculation::signalCirculation()
{

}

void signalCirculation::timeDelay()
{

	while (true)
	{
		Sleep(stimers[0] * 1000);
		{
			signal1 = true;
			cout << "signal 1 is opened!" << endl;
		}
		
			Sleep(stimers[1] * 1000);
		{
			signal2 = true;
			cout << "signal 2 is opened!" << endl;
		}

		Sleep(stimers[2] * 1000);
		{
			signal3 = true;
			cout << "signal 3 is opened!" << endl;
		}

		Sleep(stimers[3] * 1000);
		{
			signal4 = true;
			cout << "signal 4 is opened" << endl;
		}
	}
}
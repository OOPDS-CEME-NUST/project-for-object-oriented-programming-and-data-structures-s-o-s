#include "signalTime.h"
#include "carCount.h"
#include <iostream>
using namespace std;

signalTime::signalTime()
{


}

void signalTime::settingLanePriority()
{
	if ((totalcars[0] > totalcars[1]) && (totalcars[0] > totalcars[2]) && (totalcars[0] > totalcars[3]))
	{
		cout << "Lane one would be given priority" << endl;

	}

	else if ((totalcars[1] > totalcars[0]) && (totalcars[1] > totalcars[2]) && (totalcars[1] > totalcars[3]))
	{
		cout << "Lane two would be given priority" << endl;
	}
	else if ((totalcars[2] > totalcars[0]) && (totalcars[2] > totalcars[1]) && (totalcars[2] > totalcars[3]))
	{
		cout << "Lane three would be given priority" << endl;
	}

	else if ((totalcars[3] > totalcars[0]) && (totalcars[3] > totalcars[2]) && (totalcars[3] > totalcars[2]))
	{
		cout << "Lane four would be given priority" << endl;
	}
}

void signalTime::calcTime()
{
	//Initialisations:

	double cars[4] = { totalcars[0], totalcars[1], totalcars[2], totalcars[3] };
	int i, j;
	double mid;
	bool swapped;

	//Bubble Wrap:

	for (i = 0; i <= 3; i++)
	{
		swapped = false;
		for (j = 0; j < 3; j++)
		{
			if (cars[j] > cars[j + 1])
			{
				mid = cars[j + 1];
				cars[j + 1] = cars[j];
				cars[j] = mid;
				swapped = true;
			}
		}

		if (swapped == false)
			break;
	}

	//Timer Calculations:


	for (i = 0; i < 4; i++)
	{
		double ratio = cars[i] / cars[i + 1];
		if (i == 3)
			ratio = cars[3] / cars[0];
		signaltimers[i] = 30 * ratio;
		if (signaltimers[i] > 25)
			signaltimers[i] = 25;
		if (signaltimers[i] < 10)
			signaltimers[i] = 10;

	}

	//Reverse sorting to original order

	for (int i = 0; i < 4; i++)
	{
		if (totalcars[0] == cars[i])
			stimers[0] = signaltimers[i];
		if (totalcars[1] == cars[i])
			stimers[1] = signaltimers[i];
		if (totalcars[2] == cars[i])
			stimers[2] = signaltimers[i];
		if (totalcars[3] == cars[i])
			stimers[3] = signaltimers[i];
	}

	// Data Calculated and stored:
	cout << "________________________________________________________________________________________________________________________" << endl;
	cout << "Original order of cars: " << totalcars[0] << " " << totalcars[1] << " " << totalcars[2] << " " << totalcars[3] << endl;
	cout << "Ascending order of cars: " << cars[0] << " " << cars[1] << " " << cars[2] << " " << cars[3] << endl;
	cout << "Original order of timers: " << signaltimers[0] << " " << signaltimers[1] << " " << signaltimers[2] << " " << signaltimers[3] << endl;
	cout << "Ascending order of timers: " << stimers[0] << " " << stimers[1] << " " << stimers[2] << " " << stimers[3] << endl;
	cout << "________________________________________________________________________________________________________________________" << endl;
}





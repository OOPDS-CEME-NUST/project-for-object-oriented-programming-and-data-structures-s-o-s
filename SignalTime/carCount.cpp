#include "carcount.h"
#include <iostream>
using namespace std;


carCount::carCount()
{

}

void carCount::GetCarCount(int w, int x, int y, int z)
{
	totalcars[0] = w;
	totalcars[1] = x;
	totalcars[2] = y;
	totalcars[3] = z;
}

void carCount::Display()
{
	cout << "total cars in lane one are: " << totalcars[0] << endl;
	cout << "total cars in lane two are: " << totalcars[1] << endl;
	cout << "total cars in lane three are: " << totalcars[2] << endl;
	cout << "total cars in lane four are: " << totalcars[3] << endl;
}

carCount ::~carCount()
{

}
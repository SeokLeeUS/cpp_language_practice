#include "Car.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
Car::Car()
{
	srand(time(NULL));
	in_working_condition_ = true;
}

void Car::wearAndTear()
{
	int condition = rand() % 10;
	if (condition >= 5)
	{
		in_working_condition_ = true;
	}
	else
	{
		in_working_condition_ = false;
	}

}

bool Car::drive()
{
	bool didDrive = false;
	if (in_working_condition_)
	{
		cout << "Driving" << std::endl;
		wearAndTear();
		didDrive = true;
	}
	else
	{
		cout << "Broken down.Please fix." << endl;
	}
	return didDrive;
}

void Car::fix()
{
	in_working_condition_ = true;
	cout << "Fixed!" << endl;
}


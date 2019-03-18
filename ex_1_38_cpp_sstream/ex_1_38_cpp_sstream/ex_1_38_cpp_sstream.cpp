#include<iostream>
#include<string>
#include <sstream>
using namespace std;
int main()
{
	string stringLength;
	float inches = 0;
	float yardage = 0;

	cout << "enter number of inches: ";
	getline(cin, stringLength);
	stringstream(stringLength) >> inches;
	yardage = inches / 36;
	cout << "it's " << yardage << "yards" << endl;
	return 0;
}

/*
stringstream converts string value to numerical value, similar to atoi in C. 
*/
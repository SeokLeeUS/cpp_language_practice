#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void calculate(float in1, float in2, char oper, float &result)
{
	switch (oper)
	{
	case ('*'):
	{
		result = in1*in2;
		break;
	}
	case ('/'):
	{
		result = in1 / in2;
		break;
	}
	case('-'):
	{
		result = in1 - in2;
		break;
	}
	case('+'):
	{
		result = in1 + in2;
		break;
	}
	default:
		cout << "incorrect operator" << endl;
	}
}

void printEquation(float in1, float in2, char oper, float result)
{
	cout << in1 << oper << in2 << "=" << result << endl;
}
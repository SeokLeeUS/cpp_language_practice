#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int userInput = 0;
	int maxNumber = 100;
	int minNumber = 0;
	int sumTotal = 0;
	float average = 0;

	for (int i = 0; i < 15; i++)
	{
		cout << "enter a number:";
		scanf("%d", &userInput);
		cout << userInput << "\n";
	

	if (userInput > maxNumber)
	{
		maxNumber = userInput;
	}

	if (userInput < minNumber)
	{
		minNumber = userInput;
	}
		sumTotal = sumTotal + userInput;
	}
	cout << "Max number=" << maxNumber << "\n";
	cout << "Min nuber=" << minNumber << "\n";
	average = (float)(sumTotal / 15);
	cout << "Average =" << average << "\n";
	return 0;





}
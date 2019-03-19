#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	int searchArray[10] = { 324,4567,6789,5421345,7,65,8965,12,342,485 };
	int searchKey, location;
	scanf("%d", &searchKey);
	int i = 0;
	while (i<sizeof(searchArray) / sizeof(int) - 1)
	{
		if (searchArray[i] == searchKey)
		{
			location = i;
			break;
		}
		else
		{
			location = -1;
		}

		i++;
	}

	if (location != -1)
	{
		cout << searchKey << "is at location" << location << "in the array" << "\n";
	}

	else
	{
		cout << searchKey << "is not in the array" << "\n";
	}
	return 0;
}
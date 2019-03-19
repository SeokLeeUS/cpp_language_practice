#define ARRAY_SIZE 40
#include <iostream>
#include <stdio.h>
using namespace std;

void bubble_sort(int arr[], int count)
{
	int temp;
	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < count - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j+1] = temp;
			}
		}
	}
}

int main()
{
	int userInput[ARRAY_SIZE] = {43,32,21,23,43,38,90,65,53,42,69,79,82,7,1,63,64,90,87,96,4,55,3,7,2,1,67,89,543,567,985,34,975890,4567,23,33,9,56,345,9865};
	
	for (int i = 0; i < ARRAY_SIZE - 1; i++)
	{
		cout << userInput[i]<<",";
	}
	printf("\n");

	for (int i = ARRAY_SIZE - 1; i >=0; i--)
	{
		cout << userInput[i]<<",";
	}
	printf("\n");

	bubble_sort(userInput, sizeof(userInput) / sizeof(int));
	
	for (int i = 0; i < ARRAY_SIZE; i++)
		{
			cout << userInput[i]<<",";

		}
	printf("\n");
	return 0;
}
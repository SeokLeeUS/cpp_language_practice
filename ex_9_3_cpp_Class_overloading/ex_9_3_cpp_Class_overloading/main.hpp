#include<iostream>

//C++ allows us to 'overload' the same function name as long as
//the variable types in the function inputs are different.

class Compare
{
public:
	int findSmaller(int input1, int input2);
	float findSmaller(float input1, float input2);
	char findSmaller(char input1, char input2);
	int findSmaller(int input1, int input2, int input3);
	float findSmaller(float input1, float input2, float input3);
	int findSmaller(int array[], int size);
	float findSmaller(float array[], int size);
	char findSmaller(char array[], int size);
};

int Compare::findSmaller(int input1, int input2)
{
	if (input1<input2)
		return input1;
	return input2;
}
float Compare::findSmaller(float input1, float input2)
{
	if (input1<input2)
		return input1;
	return input2;
}

char Compare::findSmaller(char input1, char input2)
{
	if (input1<input2)
		return input1;
	return input2;
}

int Compare::findSmaller(int input1, int input2, int input3)
{
	int temp = 0;
	if (input1 < input2)
		temp = input1;
	else
		temp = input2;
	if (temp < input3)
		return temp;
	else
		return input3;
}

float Compare::findSmaller(float input1, float input2, float input3)
{
	float temp = 0.0;
	if (input1 < input2)
		temp = input1;
	else
		temp = input2;
	if (temp < input3)
		return temp;
	else
		return input3;
}

int Compare::findSmaller(int array[], int size)
{

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;

			}
				

		}
	}
		
	return array[0];
}

float Compare::findSmaller(float array[], int size)
{
	;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				float temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
				

		}
	}

	return array[0];
}

char Compare::findSmaller(char array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				char temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
				

		}
	}

	return array[0];
}



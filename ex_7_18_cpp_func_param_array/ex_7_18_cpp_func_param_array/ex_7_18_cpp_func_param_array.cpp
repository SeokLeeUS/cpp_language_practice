#include <iostream>
#include <iomanip>
using namespace std;

void arrayAsPointer(int *array, int size);
void arraySized(int array[3], int size);
void arrayUnSized(int array[], int size);

int main()
{
	const int size = 3;
	int array[size] = { 33,66,99 };
	arrayAsPointer(array, size);
	arraySized(array, size);
	arrayUnSized(array, size);
	return 0;
}

void arrayAsPointer(int *array, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
	cout << "\n";
}

void arraySized(int array[3], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
	cout << "\n";
}

void arrayUnSized(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << endl;
	}
	cout << "\n";
}

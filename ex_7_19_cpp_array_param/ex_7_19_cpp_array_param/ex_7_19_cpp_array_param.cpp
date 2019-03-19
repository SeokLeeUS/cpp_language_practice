#include <iostream>
using namespace std;
int search(int array[], int size, int searchKey);
int main()
{
	const int size = 4;
	int array[] = { 345,75896,2,543 };
	int searchKey = 543;
	cout << "Found at:" << search(array, size, searchKey);
	return 0;
}

int search(int arr[], int size, int searchKey)
{
	//int l
	int i;
	int result;
	for (int i = 0; i < size;i++)
	{
		if (arr[i] == searchKey)
		{
			result = i;
			break;
		}
		else
			result = -1;
	}

	return result;
}
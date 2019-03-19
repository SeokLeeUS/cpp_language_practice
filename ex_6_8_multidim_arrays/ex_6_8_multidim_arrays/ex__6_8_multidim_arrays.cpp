/*Goal: practice using multidimensional arrays.
**Write a program that will accept values for a 4x4 array
**and a vector of size 4.
**Use the dot product to multiply the array by the vector.
**Print the resulting vector.
*/


#include <iostream>
using namespace std;
int main()

{
	int array2Dim[2][3] = { 0,1,2,3,4,5 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << array2Dim[i][j];
		}
	}

	cout << endl;

	int prod[4] = { 0, };

	int array2Dim1[4][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16 };
	int vect[4] = {2,2,2,2};
	int sum = 0;
	//int array2Dim2[4][1] = array2Dim1*vect;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			sum = array2Dim1[i][j]*vect[j]+sum;
			
		}
		prod[i] = sum;
		sum = 0;
	}

	for (int i = 0; i < 4; i++)
	{
		cout << prod[i] << endl;
	}
	return 0;
}
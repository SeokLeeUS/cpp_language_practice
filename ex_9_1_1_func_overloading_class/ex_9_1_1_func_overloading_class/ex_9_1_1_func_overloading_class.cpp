#include <string>
#include <iostream>
using namespace std;
#include "main.hpp"
/*
int findSmaller(int input1, int input2);
float findSmaller(float input1, float input2);
char findSmaller(char input1, char input2);
*/

int main()
{
	Compare c;
	int a = 5;
	int b = 4;
	float f1 = 5.43;
	float f2 = 6.32;
	char c1 = 'c';
	char c2 = 'z';
	cout << c.findSmaller(a, b) << endl;
	cout << c.findSmaller(f1, f2) << endl;
	cout << c.findSmaller(c1, c2) << endl;
	return 0;
}

/*
int findSmaller(int input1, int input2)
{
if (input1<input2)
return input1;
return input2;
}
float findSmaller(float input1, float input2)
{
if (input1<input2)
return input1;
return input2;
}

char findSmaller(char input1, char input2)
{
if (input1<input2)
return input1;
return input2;
}
*/

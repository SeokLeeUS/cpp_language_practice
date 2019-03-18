#include<iostream>
using namespace std;
int main()
{
	int a = 65;
	char charA = 'B';
	char charB = 'C';
	char charC = 67;
	int integer = 80;
	float floatNumber = 0.0;

	cout << "a =" << a << "\n";
	cout << "charA =" << charA << "\n";
	cout << "charB=" << charB << endl;
	floatNumber = integer;
	cout << "integer=" << integer <<endl;
	cout << "floatNumber =integer =" << floatNumber << endl;

	float width = 4.5;
	float height = 5.5;
	int area = width*height;
	cout << "area=" << area<<endl;

	int numerator = 4;
	float denominator = 5;
	float answer;
	answer = float(numerator / denominator);
	cout << answer << endl;
	/*
	To fix the program of the program, 
	you need to change at least two of the variable types: 
	the answer, and one of the divisors.
	*/
	return 0;
}
/*
It is quite common to put functions into a header file. 
It makes your main program look cleaner. 
On this programming quiz, move the function declaration 
and function definition to the header file called main.cpp.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
void printMessage();
using namespace std;
#include "main.hpp"
//void printproduct(int a, int b, int product);
float calculateSum(float a, float b);
int increment(int a);
void increment1(int &a);
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int product = a*b;
	printproduct(a, b, product);
	printMessage();
	float c, d;
	scanf("%f %f", &c, &d);
	float sum = calculateSum(c, d);
	cout << "summation of " << c << " and " << d << " is " << sum<<"."<<endl;
	a = increment(a);
	cout << a << endl;
	increment1(a);
	
	return 0;
}
	
void printMessage()
{
	cout << "this is a way to define a function, alternatively." << endl;
}

/*
void printproduct(int a, int b, int product)
{
	product = a*b;
	cout << "product of "<<a<<" and "<<b<< " is " << product <<"."<< endl;
}
*/

float calculateSum(float m1, float m2)
{
	return m1 + m2;
}

int increment(int input)
{
	input++;
	return input;
}

int increment1(int &input)
{
	input++;
	cout << input << endl;
}
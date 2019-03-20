#include <iostream>
using namespace std;
class Shape
{
private:
	int length;
	int width;

public:
	// constructor definition
	Shape(int l = 2, int w = 2)
	{
		length = l;
		width = w;
	}
	double Area()
	{
		return length*width;
	}
	int operator +(Shape shapeIn)
	{
		return Area() + shapeIn.Area();
	}

	/*
	To use the overloaded '+' sign, 
	we just have to use it with our user defined objects.
	For example: int total = sh1+sh2;
	*/
};

int main(void)
{
	Shape sh1(4, 4);
	Shape sh2(2, 6);

	int total = sh1 + sh2;
	cout << sh1.Area()<<endl;
	cout << sh2.Area()<<endl;
	cout << total << endl;
	return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int a = 45;
	float b = 45.33f;
	long c = 4567;
	cout << "integer number is\t"<<a<<endl;
	cout << "float number is\t"<<b<<endl;
	cout << "long number is" <<setw(10)<<b<<endl;
	return 0;
}
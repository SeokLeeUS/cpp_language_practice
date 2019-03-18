#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	int post = 0;
	int pre = 0;
	cout << "init value: \t\t post= " << post << ", pre= " << pre << "\n";
	
	post = a++;
	pre = ++b;
	cout << "after one postfix and prefix: " << " post=" << post << " pre=" << pre << "\n";
	post = a++;
	pre = ++b;
	cout << "after one postfix and prefix: " << " post=" << post << " pre=" << pre << "\n";
	
	int c = 0;
	c += 2;
	cout << "variable operation result: " << c << endl;
	c -= 4;
	cout << "variable operation result: " << c << endl;
	
	a /= b;
	cout << "variable operation result: " << a << endl;

	return 0;
}
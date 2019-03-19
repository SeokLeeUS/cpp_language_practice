using namespace std;
#include <iostream>
int main()
{
	int a = 54;
	cout << "a = " << a << '\n';
	cout << " address of a is at &a =" << &a << "\n";
	char *b = "realistic";
	cout << "string is " << b << "address is "<< &b<< "\n";

	// dereferencing

	int givenInt =32;
	int *pointerToGivenInt = &givenInt;
	cout <<"dereferencing of givenInt is "<< *pointerToGivenInt << endl;
	cout << "address of givenInt is " << pointerToGivenInt << endl;
	return 0;
}



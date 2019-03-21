/*
::Assign will write over elements in the vector, 
which is what we want in some cases, 
but in others it is not desired.
We can add elements to the end (or back) of a vector using ::push_back.
Let's look at an example using push_back.
*/

#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	vector<int> vInt;
	vector<int>::iterator it;

	vInt.assign(1, 23);
	cout << vInt.size();
	for (it = vInt.begin(); it != vInt.end(); ++it)
		cout << *it << endl;

	vInt.push_back(24);
	vInt.push_back(25);
	vInt.push_back(26);
	vInt.push_back(27);

	cout << vInt.size() << endl;
	for (it = vInt.begin(); it != vInt.end(); ++it)
		cout << *it << endl;

	return 0;
}


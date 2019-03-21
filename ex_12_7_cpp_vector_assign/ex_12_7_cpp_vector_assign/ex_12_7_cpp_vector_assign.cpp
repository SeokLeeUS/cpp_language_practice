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
		cout << *it<<endl;

	vInt.assign(4, 3);
	cout << vInt.size()<<endl;
	for (it = vInt.begin(); it != vInt.end(); ++it)
		cout << *it<<endl;

	return 0;
}

/*
When we executed the above program, 
we first assigned the value 23 to the vector. 
Printing out the vector, we saw the value 23.

Then we assigned 4 elements the value of 3. 
Printing out the vector again, we saw four 3s.

What happened to the element with value 23? 
It was written over with a three.

Assign writes over the elements in the vector.
*/
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> vInt;
	vector<int>::iterator it;
	vInt.push_back(0);
	vInt.push_back(1);
	vInt.push_back(2);
	vInt.push_back(3);
	vInt.push_back(4);
	vInt.push_back(5);
	vInt.push_back(6);
	vInt.push_back(7);

	it = vInt.begin() + 1;
	vInt.insert(it, -1);
	for (it = vInt.begin(); it != vInt.end(); ++it)
		cout << *it <<endl;
	cout << "\n\n";

	it = vInt.begin();


	/*
	Also note in the program below, 
	I reset the iterator to the beginning of the vector 
	before inserting the next value.
	You need to do this after an insert 
	because all iterator locations are invalid after an insert.
	In this program I set the iterator to 
	the beginning of the vector. Then during the insert 
	I moved the iterator 3 locations to add the next element, 
	which has a value of -2.
	*/

	vInt.insert(it+3, -23);

	for (it=vInt.begin(); it != vInt.end(); ++it)
		cout << *it << endl;


	it = vInt.begin();
	vInt.emplace(it + 2, 22);

	cout << "\n\n";

	for (it = vInt.begin(); it != vInt.end(); ++it)
		cout << *it << endl;

	return 0;
}
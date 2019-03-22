/*
We can remove all elements from the vector 
at the same time using the method ::clear.
In the program below note the following code:
//clear the vector
vectorInts.clear();
This will remove all elements in the vector called vectorInts.
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> vectorInts;
	vector<int>::iterator it;

	vectorInts.push_back(0);
	vectorInts.push_back(1);
	vectorInts.push_back(2);
	vectorInts.push_back(3);
	vectorInts.push_back(4);
	vectorInts.push_back(5);
	vectorInts.push_back(6);
	vectorInts.push_back(7);

	cout << "vectorInts has " << vectorInts.size() << " elements.\n";

	cout << "vectorInts has these elements:\n";

	for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
		cout << *it << " ";
	cout << "\n now erasing an element: ";
	vectorInts.erase(vectorInts.begin() + 2);
	cout << "\n";
	for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
		cout << *it << " ";

	cout << "\nsize after erasing: " << vectorInts.size();

	vectorInts.pop_back();

	cout << "\n";

	cout << "size after pop_back command: " << vectorInts.size()<<endl;

	for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
		cout << *it<<" ";

	cout << "\n";
	vectorInts.clear();
	cout << "\nafter clear vectorInts has these elements"<<endl;
	for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
		cout << *it <<"cleared"<<endl;
	return 0;
}


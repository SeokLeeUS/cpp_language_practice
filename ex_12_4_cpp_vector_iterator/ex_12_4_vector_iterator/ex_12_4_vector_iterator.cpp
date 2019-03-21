/*
Vectors are more versatile than arrays, 
and can be resized during runtime. 
We can also insert elements into a vector 
(we'll insert elements a little later in the lesson).

This characteristic adds a lot of freedom 
to vectors that we don't have with arrays. 
It also means we have to adjust how we access elements in a vector. 
Since we can add elements anywhere in the vector, 
we do not refer to the first element of a vector 
as the zero element, we call it the beginning. 
The last element is called end. 
To keep track of where we are in the vector, 
we need an iterator.
*/

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> vectorInts;
	vector<int>::iterator it;
	cout << "VectorInts has " << vectorInts.size() << "elements\n";
	cout << "\n\n Adding four elements to the vector.\n";
	vectorInts.assign(4, 3); 
	// adding 3 on 4 vectorInts elements..
	cout << "VectorInts has" << vectorInts.size() << "elements\n";
	cout << "VectorInts has  these elements";
	for (it = vectorInts.begin(); it != vectorInts.end(); ++it)
		cout << *it << " ";

}

/*
We have been using the C++ standard function library 
throughout this course (recall I/O streams, string, etc.). 
Well, there is actually another part of the Standard C++ library, 
the object oriented class.

The Object oriented library has many containers that
are quite useful for programming. 
We now going to take some time to work with some of them.

The first class we will discuss is the vector class.
Let's look at and play with an example of a vector.
In the program below, we create a vector of integers, called vectorInts.
You should notice the following:

We included a C++ library called vector
To instantiate a vector :
std::vector<int> vectorInts;
The vector has size 0 when we instantiate it.
We use 'resize' to change the size of the vector.
*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> vectorInts;
	cout << "vectorInts has" << vectorInts.size() << " elements\n";
	vectorInts.resize(6);
	cout << "\n\nvectorInts now has " << vectorInts.size() << " elements\n";
	return 0;
}
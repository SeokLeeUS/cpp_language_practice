//Changing the size of vectorInts to 6

/*Create a vector of floats called vFloat.
* vFloat should have an iterator.
*/

//TODO: include the necessary libraries
#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<float> vFloat;
	//TODO: instantiate vFloat vector

	std::cout << "vFloat has " << vFloat.size() << " elements\n";

	//Changing the size of vectorInts to 6
	//TODO: Change the size of vFloat to 10 elements
	vFloat.resize(10);

	std::cout << "\n\n vFloat now has " << vFloat.size() << " elements\n";

	return 0;
}

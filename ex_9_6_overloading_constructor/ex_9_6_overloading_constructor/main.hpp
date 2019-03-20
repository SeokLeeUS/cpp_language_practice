/*Create a class that has four constructors:
* one that accepts no input parameters
* one that accepts name
* one that accepts license number
* one that accepts name and license number
* The default values are:
name = NA
license = 0
*/

#include<iostream>
#include<string>
using namespace std;

class Dog
{
private:
	string name;
	int licenseNumber;
public:
	Dog();
	Dog(string Dname);
	Dog(int licenseNum);
	Dog(string Dname, int licenseNum);
	string getName();
	int getLicense();

};

Dog::Dog()
{
	name = "NA";
	licenseNumber = 0;
}

Dog::Dog(string Dname)
{
	name = Dname;
	licenseNumber = 0;
}
Dog::Dog(int licenseNum)
{
	name = "NA";
	licenseNumber = licenseNum;
}

Dog::Dog(string Dname, int licenseNum)
{
	name = Dname;
	licenseNumber = licenseNum;
}

string Dog::getName()
{
	return name;
}

int Dog::getLicense()
{
	return licenseNumber;
}
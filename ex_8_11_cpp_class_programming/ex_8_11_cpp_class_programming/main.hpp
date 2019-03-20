#include <iostream>
using namespace std;
#include<string>
class Dog
{

	string name;
	string licenseNumber;
public:
	void setName(string nameIn);
	void setLicenseNumber(string licenseNumberIn);
	string getName();
	string getLicenseNumber();
	void printInfo();
};

void Dog::setName(string nameIn)
{
	name = nameIn;
}

void Dog::setLicenseNumber(string licenseNumberIn)
{
	licenseNumber = licenseNumberIn;
}

string Dog::getName()
{
	return name;
}

string Dog::getLicenseNumber()
{
	return licenseNumber;
}

void Dog::printInfo()
{
	cout <<"name:"<< name << ", " <<"license#: "<<licenseNumber<<endl;
}


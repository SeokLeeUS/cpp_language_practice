#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;
class Cat
{
private:
	string name;
	string breed;
	int age;

public:
	Cat(); //define constructor
	void setName(string InName);
	void setBreed(string InBreed);
	void setAge(int InAge);
	string getBreed();
	string getName();
	int getAge();
	void printInfo();
};

Cat::Cat() //definining initial value for cat. 
{
	cout << "assigning intial value"<<endl;
	name = "unknown";
	breed = "unknown";
	age = 99;
}

void Cat::setName(string InName)
{
	name = InName;
}

void Cat::setBreed(string InBreed)
{
	breed = InBreed;
}

void Cat::setAge(int InAge)
{
	age = InAge;
}

void Cat::printInfo()
{
	cout << "The cat name is "<<name <<"."<<" her breed is "<< breed <<"."<<" and her age is "<< age <<"."<< endl << endl;
}

string Cat::getBreed()
{
	return breed;
}

int Cat::getAge()
{
	return age;
}
	
string Cat::getName()
{
	return name;
}
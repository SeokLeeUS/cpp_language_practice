#include <iostream>
using namespace std;
#include <string>

class Student
{
	string name;
	int id;
	int gradDate;

public:
	void setName(string nameIn);
	void setId(int idIn);
	void setGradDate(int dateIn);
	string getName();
	int getId();
	int getGradDate();
	void print();
};

void Student::setName(string nameIn)
{
	name = nameIn;
}

void Student::setGradDate(int dateIn)
{
	gradDate = dateIn;
}

void Student::setId(int idIn)
{
	id = idIn;
}

string Student::getName()
{
	return name;
}

int Student::getId()
{
	return id;
}

int Student::getGradDate()
{
	return gradDate;
}

void Student::print()
{
	cout <<name<<gradDate<<id<<endl;
}

int main()
{
	Student Student1;

		Student1.setId(1234);
	Student1.setGradDate(2017);
	Student1.setName("Catherine");
	Student1.print();

	cout << Student1.getGradDate()<< endl;
	
	return 0;
}
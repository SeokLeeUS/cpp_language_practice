/*
It is conventional to put classes in a header file. 
For this example we are going to put them in the main file 
so we can see both the main program and the class at the same time. 
Hopefully, this will make it a little easier 
to see what is going on in the program.

Notice we need to use the "dot operator" to access the public members.
For example, to get the value of the grad date in the student class we need to type:
*/

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

void Student::setId(int idIn)
{
	id = idIn;
}

void Student::setGradDate(int gradDateIn)
{
	gradDate = gradDateIn;
}

void Student::print()
{
	cout << name << " " << id << " " << gradDate;
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

int main()
{
	int integer1;
	float float1;
	Student student1;
	integer1 = 4;
	float1 = 4.3333;

	//There are two ways we can print the values of our class:
	//The first is to call the print function we created.
	student1.setName("Catherine Gamboa");
	student1.setId(54345);
	student1.setGradDate(2017);
	student1.print();

	//The second is to access each member of the class using the get functions
	cout << "student name"<<student1.getName()<<endl;
	cout << "student id" << student1.getId() << endl;
	cout << "student grad date" << student1.getGradDate() << endl;

	return 0;

}
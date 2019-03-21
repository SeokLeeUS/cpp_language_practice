#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int id;
public:
	void setId(int id);
	int getId();
	Student();
};

Student::Student() //constructor definition
{
	id = 000000000;
}

void Student::setId(int idIn)
{
	id = idIn;
}

int Student::getId()
{
	return id;
}

class GradStudent: public Student // only single colon is required, not double colon.
/*
Notice the line:

class GradStudent: public Student
The access control before the base class 
(in this case 'public') determines the access of the inherited class.
There are three types of access control: public, private, and protected.
Public Inheritance means all public members of 
the base class are accessible to the derived class
Private Inheritance means all members of the base class 
are private to the derived class
Protected Inheritance means all members of the base class 
are protected to the derived class.
It is very rare to have a protected or private inheritance, 
the vast majority of the time inheritance is public.
*/

{
private:

	string degree;

public:
	GradStudent();
	//void setId(int input);
	void setDegree(string degreeIn);
	string getDegree();
};

GradStudent::GradStudent()
{
	degree = "undeclared";
}

void GradStudent::setDegree(string degreeIn)
{
	degree = degreeIn;
}

string GradStudent::getDegree()
{
	return degree;
}




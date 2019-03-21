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




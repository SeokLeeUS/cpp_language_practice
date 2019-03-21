#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int id;

public:
	Student();
	void setStudentId(int Inid);
	int getStudentId();
};

Student::Student()
{
	id = 000000000;
}

void Student::setStudentId(int Inid)
{
	id = Inid;
}

int Student::getStudentId()
{
	return id;
}


class GradStudent : public Student
{
private:

	string degree;

public:
	GradStudent();
	void setDegree(string DegreeIn);
	//int getId();
	string getDegree();
};



GradStudent::GradStudent()
{
	degree = " ";
}

void GradStudent::setDegree(string DegreeIn)
{
	degree = DegreeIn;
}

string GradStudent::getDegree()
{
	return degree;
}
#include <iostream>
#define _CRT_SECURE_NO_WARNINGS
#include <string>
using namespace std;
#define SIZE 5

template<class T>
class StudentRecord
{
private:
	const int size = SIZE;
	T grades[SIZE];
	int studentId;

public:
	StudentRecord(T defaultInput);// a default constrcutor with a default value
	void setId(int idIn);
	void setGrades(T* input);
	void printGrades();
};

template<class T>
StudentRecord<T>::StudentRecord(T defaultInput)
{
	for (int i = 0; i < SIZE; i++)
		grades[i] = defaultInput;
}


template<class T>
void StudentRecord<T>::setId(int idIn)
{
	studentId = idIn;
}

template<class T>
void StudentRecord<T>::setGrades(T* input)
{
	for (int i = 0;i <SIZE; i++)
	{
		grades[i] = input[i];
	}

}

template<class T>
void StudentRecord<T>::printGrades()
{
	for (int i = 0; i < SIZE; i++)
	{
		cout << grades[i] << endl;
	}
}

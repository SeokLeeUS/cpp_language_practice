// define generic classes
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

template <class T>
class Multiplier
{
private:
	T in1;
	T in2;

public:
	void setM1(T input);
	void setM2(T input);
	T setProduct();
	void printEquation();
};

template<class T>
void Multiplier<T>::setM1(T input)
{
	in1 = input;
}

template<class T>
void Multiplier<T>::setM2(T input)
{
	in2 = input;
}

template<class T>
 T Multiplier<T>::setProduct()
{
	return in1*in2;
}

template<class T>
void Multiplier<T>::printEquation()
{
	cout <<"printing equation"<<setProduct()<<endl;
}
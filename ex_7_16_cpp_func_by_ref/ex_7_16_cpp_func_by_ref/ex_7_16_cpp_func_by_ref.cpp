#include "main.hpp"
int main()
{
	char oper = '*';
	float input1 = 9.8;
	float input2 = 3.4;
	float result;
	calculate(input1, input2, oper, result);
	printEquation(input1, input2, oper, result);
	return 0;
}

/*
문자열 상수에 한정되어 있지 않음. reverse referencing is not required even for number. 

*/
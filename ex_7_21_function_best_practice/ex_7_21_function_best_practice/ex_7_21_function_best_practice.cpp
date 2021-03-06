#include <iostream>

int doubleInput(const int input)
{
	input++;
	int h = input * 2;
	return h;
}

int main()
{
	const int i = 2;
	int h = doubleInput(2);

	return 0;
}

/*
When creating functions there is a precaution that is often considered a 'best practice'.

When passing variables that are not going to be modified in the function, define the variable as a 'const' so that it cannot be changed by the function.

For example:
In this function, we are passing an integer variable called input. We want the function to use it and not modify it. So we will give it a variable type that is a const int.

*/
// Your code goes here!
// Take a look at Car.cpp to see how to define the Car class.

// Hint: you'll need to define:
// 1. the class itself
// 2. the class constructor
// 3. one private property
// 4. three public methods

#include <iostream>
#include <string>
#include <stdbool.h>
using namespace std;

class Car
{
private:
	//1 private property
	bool in_working_condition_;

	// Note, the trailing _ on in_working_condition_ is common tactic for designating private properties in C++.

public:
	// 3 public methods
	Car();
	bool drive();
	void fix();
	void wearAndTear();
};


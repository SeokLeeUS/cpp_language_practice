#include <iostream>
using namespace std;

enum MONTHS {
	Jan = 1,
	Feb,
	Mar,
	Apr,
	May,
	Jun,
	July

};

int main()
{
	enum MONTHS best_month;
	int variableName = 323;
	short var_short = 30;
	long var_long = 30;
	double var_double = 30;
	bool var_bool = 1;
	const int weightGoal = 100;
	//weightGoal = 200; cannot assign a new value on the constant. 
	best_month = Feb;
	
	if (best_month == Jan)
		cout << "Jan is the best month" << endl;
	else 
		cout << "Feb is the best month" << endl;

	cout << "the value of integer is " << variableName<<endl;
	cout << "the value of short is " << var_short << endl;
	cout << "the value of short is " << var_short << endl;
	cout << "the value of short is " << var_short << "\n";
	cout << "weight goal is"<<weightGoal << endl;
	return 0;
}
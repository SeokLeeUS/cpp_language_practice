#include <iostream>
#include <string>
using namespace std;

int main()
{
	string user_name;
	cout << "put your user name:\n";
	getline(cin,user_name);
	cout << "your user name is\t" << user_name << endl;
	return 0;
}

/*
getline allows space between the string input. 
*/
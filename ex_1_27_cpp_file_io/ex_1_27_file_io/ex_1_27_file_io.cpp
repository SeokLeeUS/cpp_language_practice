#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string line;
	ofstream myfileI("input.txt", ios::app);
	if (myfileI.is_open())
	{
		myfileI << "\n I am adding a line.\n";
		myfileI << "I am adding another line.\n";
		myfileI.close();
	}
	else cout << "unable to open file for writing";

	ifstream myfileO("input.txt");

	if (myfileO.is_open())
	{
		while (getline(myfileO, line))
		{
			cout << line << '\n';
		}
		myfileO.close();
	}
	else cout << "unable to open file for reading" << endl;
	
	return 0;

}





/*
- Include the <fstream> library
- Create a stream (input, output, both)
- ofstream myfile; (for writing to a file)
- ifstream myfile; (for reading a file)
- fstream myfile; (for reading and writing a file)
- Open the file  myfile.open(“filename”);
- Write or read the file
- Close the file myfile.close();

*/

#include <iostream>
#include<sstream>
#include<time.h>// to generate random number
#include<cstdlib> //to add rand function 
using namespace std;

int main()
{
	
	int target;
	int guess = -1;

	srand(time(NULL)); // random number generator
	target = rand() % 100 + 1;

	while (guess != target) 
	{
		cout << "Guess a number between 0 and 100: ";
		cin >> guess;
		cout << guess << "\n";
		
		if (guess == -1||guess =='q')
		{
			cout << "good bye" << endl;
			break;
		}

		else if (target>guess)
		{
			cout << "too low, guess another number! \n";
			cin >> guess;
			cout << "\n new guessed number is " << guess << "\n";
		}
		else if (target<guess)
		{
			cout << "too high, guess another number! \n";
			cin >> guess;
			cout << "\n new guessed number is " << guess << "\n";
		}

		else

		{ 
			cout << "you got the target number!!";
			break;
		}


	}

	return 0;
}

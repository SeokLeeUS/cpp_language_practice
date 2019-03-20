/*Goal: examine generic classes.
*/

/*Goal: study generic classes*/

#include "main.hpp"

int main()
{
	//StudentRecord is the generic class
	//The constructor sets the grade value
	StudentRecord<int> srInt(3); //constructor
	srInt.setId(111111);
	srInt.printGrades();

	StudentRecord<char> srChar('B'); //constructor
	srChar.setId(222222);
	srChar.printGrades();

	StudentRecord<float> srFloat(3.333);// constructor
	srFloat.setId(333333);
	srFloat.printGrades();

	StudentRecord<string> srString("B-");//constructor
	srString.setId(4444);
	srString.printGrades();

	return 0;
}

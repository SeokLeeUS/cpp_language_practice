#include "main_inheritance.hpp"
int main()
{

	GradStudent gs1;
	//gs1.setId(123456789);
	gs1.setId(1234);
	gs1.setDegree("BSEE");

	cout << gs1.getId() << " " << gs1.getDegree() << endl;;
	
	return 0;
}
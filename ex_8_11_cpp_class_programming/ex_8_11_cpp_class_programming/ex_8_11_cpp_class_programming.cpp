#include "main.hpp"

int main()
{
	Dog dog1;
	dog1.setName("Trixie");
	dog1.setLicenseNumber("#1234");
	dog1.printInfo();

	dog1.setName("Kali");
	dog1.setLicenseNumber("#5678");
	dog1.printInfo();

	return 0;
}
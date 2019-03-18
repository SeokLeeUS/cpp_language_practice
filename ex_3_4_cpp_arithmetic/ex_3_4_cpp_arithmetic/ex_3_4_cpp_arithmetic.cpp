#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float cubeSide = 5.4;
	float sphereRadius = 2.33;
	float coneRadius = 7.65;
	float coneHeight = 14;
	
	float volCube, volSphere, volCone = 0;

	volCube = pow(cubeSide, 3);
	volSphere = (4 / 3)*M_PI*pow(sphereRadius, 3);
	volCone = M_PI*pow(coneRadius, 2)*coneHeight / 3;
	cout << volCube << "\n" << volSphere << "\n" << volCone << "\n";

	return 0;
}

/*
M_PI is not recogized using cmath. It requires #define _USE_MATH_DEFINES
https://stackoverflow.com/questions/26065359/m-pi-flagged-as-undeclared-identifier
*/
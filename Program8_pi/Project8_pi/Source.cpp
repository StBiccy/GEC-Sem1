#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float pi = 3.14159;

	float area;
	float radius;

	radius = 25.0f;

	/* diceded to use a new libary to get the abiltiy to use powers rather than do radius* radius
	this section finds the area by doing pi * radius squared */
	area = pi * pow(radius, 2);

	cout << "The area of a circle with a radius of " << radius << " is " << area << endl;

	return 0;
}
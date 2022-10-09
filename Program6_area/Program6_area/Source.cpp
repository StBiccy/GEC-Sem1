#include <iostream>
using namespace std;

int main()
{
	typedef unsigned int width;
	width CW;

	typedef unsigned int hight;
	hight CH;

	typedef unsigned int area;
	area CA;

	CW = 15;
	CH = 25;

	// this times the current width by the current hight inorder to find the current area
	CA = CW * CH;

	cout << "the area of a " << CW << " by " << CH << " rectangle is " << CA << endl;

	return 0;
}
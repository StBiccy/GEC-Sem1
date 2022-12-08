#include <iostream>
using namespace std;

int main()
{
	typedef float fahrenhite;
	typedef float celsius;

	fahrenhite CF;
	celsius CC;

	CF = 95.0f;

	//calculate celsius by doing math idk =)
	CC = (CF - 32) * 0.5556;

	cout << CF << "F is equal to " << CC << "C." << endl;

	return 0;
} 
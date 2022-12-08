#include <iostream>
using namespace std;

int main()
{
	// Initialise num to 1
	int num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operator before num = " << ++num << endl;
	cout << "num after = " << num << endl;

	/* resets num back to 1
	
	this type of commenting is usefull thanks*/
	num = 1;

	cout << "num = " << num << endl;
	cout << "Increment Operator after num = " << num++ << endl;
	cout << "num after = " << num << endl;

	//I just like commenting =)
	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement Operator before num = " << --num << endl;
	cout << "num after = " << num << endl;

	num = 1;

	cout << "num = " << num << endl;
	cout << "Decrement Operator after num = " << num-- << endl;
	cout << "num after = " << num << endl;

	return 0;
}
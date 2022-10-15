#include <iostream>
using namespace std;
int main()
{
	char status;
	unsigned short int game;

	cout << "Please tell my your status with 's' for student 't' for teacher or 'o' for other." << endl;

	cin >> status;

	cout << "What game would you like 1 or 2?" << endl;

	cin >> game;

	if (status == 's' && game == 1 || status == 't' && game == 1)
	{
		cout << "You have 20% off" << endl;
	}
	else if (status == 's' && game == 2 || status == 't' && game == 2)
	{
		cout << "You have 10% off" << endl;
	}
	else
	{
		cout << "You are not entitle to a discount" << endl;
	}
}

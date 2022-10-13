#include <iostream>
using namespace std;

int main() 
{
	int playerinput;

	cout << "select difficulty" << endl << "1. I'm too young too die" << endl << "2. Hey, not to rough!" << endl << "3. Hurt me plenty" << endl << "4. Ultra-Violence" << endl << "5. Nightmare" << endl;

	cin >> playerinput;

	switch (playerinput)
	{
	case 1:
		cout << "WEAK!" << endl;
		break;
	case 2:
		cout << "Come on get some pain in" << endl;
		break;
	case 3:
		cout << "FEEL THE PAIN" << endl;
		break;
	case 4:
		cout << "Blood for the blood god, skulls for the skull throne!" << endl;
		break;
	case 5:
		cout << "ONE WAY TRIP TO HELL BOYS!" << endl;
	}
}


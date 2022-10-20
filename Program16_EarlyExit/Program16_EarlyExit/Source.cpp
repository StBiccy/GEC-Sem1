#include <iostream>
using namespace std;

int main()
{
	short int playerLife = 100;
	short int damage;

	for (int i = 0; i < 10; i++)
	{
		
		if (playerLife > 0)
		{
			cout << "Player life is: " << playerLife << endl;
			cout << "Question " << i << ": How much damage shall I deal?" << endl;
			cin >> damage;
			playerLife -= damage;
		}
		
		if (playerLife <= 0)
		{
			i = 10;
			cout << "early end. Player died" << endl;
		}
	}

	if (playerLife > 0)
		cout << "All questions asked. Plaayer survivied!" << endl;
}
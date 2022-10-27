#include <iostream>

using namespace std;

int playerHealth = 1000;
int enemyHealth = 2000;
bool isPlaying = true;

void attackChoice(int choice);
bool playState();

int main()
{
	cout << "You have met a troll time to fight, select an attack!" << endl;
	while (isPlaying)
	{
		int pChoice;
		cout << endl << "1. Use sword, 2. Use magic, 3. Use axe" << endl;
		cout << "Different weapons have different effects." << endl;

		cin >> pChoice;

		attackChoice(pChoice);
		playState();
	}
	return 0;
}

void attackChoice(int choice)
{
	const int pSword = 300;
	const int pMagic = 650;
	const int pAxe = 450;
	const int tSword = 350;
	const int tMagic = 50;
	const int tAxe = 100;

	switch (choice)
	{
	case 1:
		enemyHealth -= pSword;
		playerHealth -= tSword;
		cout << "Troll has been hit" << endl;
		cout << "you have been hit" << endl;
		if (playerHealth < 0)
			playerHealth = 0;
		if (enemyHealth < 0)
			enemyHealth = 0;

		cout << "Your health is: " << playerHealth << ". Troll's health is: " << enemyHealth << endl;

		break;

	case 2:
		enemyHealth -= pMagic;
		playerHealth -= tMagic;
		cout << "Troll has been hit" << endl;
		cout << "you have been hit" << endl;
		if (playerHealth < 0)
			playerHealth = 0;
		if (enemyHealth < 0)
			enemyHealth = 0;

		cout << "Your health is: " << playerHealth << ". Troll's health is: " << enemyHealth << endl;

		break;

	case 3:
		enemyHealth -= pAxe;
		playerHealth -= tAxe;
		cout << "Troll has been hit" << endl;
		cout << "you have been hit" << endl;
		if (playerHealth < 0)
			playerHealth = 0;
		if (enemyHealth < 0)
			enemyHealth = 0;

		cout << "Your health is: " << playerHealth << ". Troll's health is: " << enemyHealth << endl;

		break;

	}
}

bool playState()
{
	char playAgain;

		if (enemyHealth <= 0)
		{
			cout << "You have vanquished the troll!" << endl;
			cout << "Play again: Y/N" << endl;
			cin >> playAgain;

			if (playAgain == 'y' || playAgain == 'Y')
			{
				enemyHealth = 2000;
				playerHealth = 1000;
				isPlaying = true;
			}
			else
				isPlaying = false;
		}
		if (playerHealth <= 0)
		{
			cout << "You died" << endl;
			cout << "Try again: Y/N" << endl;
			cin >> playAgain;

			if (playAgain == 'y' || playAgain == 'Y')
			{
				enemyHealth = 2000;
				playerHealth = 1000;
				isPlaying = true;
			}
			else
				isPlaying = false;
		}

		return false;
}
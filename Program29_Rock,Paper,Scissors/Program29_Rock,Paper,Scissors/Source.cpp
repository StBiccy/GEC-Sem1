#include <iostream>
#include <string>
#include <random>

using namespace std;

int check(string cPick, string pPick);

int main()
{
	int pWinsRem = 3;
	int cWinsRem = 3;
	bool isPlaying = true;

	while (isPlaying)
	{
		string pSelect;

		cout << "Enter your selection: ";
		cin >> pSelect;
		pSelect[0] = toupper(pSelect[0]);
		while (pSelect != "Rock" && pSelect != "Paper" && pSelect != "Scissors")
		{
			cout << "Invalid Input. chose Rock, Paper, or Scissors" << endl;
			cin >> pSelect;
			pSelect[0] = toupper(pSelect[0]);
		}
		cout <<"You chose: " << pSelect << endl;

		string cSelect[] = {"Rock", "Paper", "Scissors"};
		int index = rand() % 3;

		cout << "Computer chose: " << cSelect[index] << endl;

		int result = check(cSelect[index], pSelect);

		if (result == 1)
		{
			--pWinsRem;
			cout << "You win!" << endl;
		}
		else if (result == 2)
		{
			--cWinsRem;
			cout << "Computer win!" << endl;

		}
		else if (result == 3)
		{
			cout << "It was a draw!" << endl;
		}

		cout << "You need : " << pWinsRem << " wins yo complete the game." << endl;
		cout << "The Computer needs : " << cWinsRem << " wins yo complete the game." << endl;
		cout << "**************************************" << endl;

		if (pWinsRem == 0)
		{
			!isPlaying;
			cout << "Congratulations, you won!!!!" << endl;
		}
		else if(cWinsRem == 0)
		{ 
			!isPlaying;
			cout << "Better luck next time, computer won!!!!" << endl;
		}
	}
	cout << "Game over..." << endl;
}

 
int check(string cPick, string pPick)
{
	if (cPick == pPick)
	{
		return 3;
	}

	else if (cPick == "Rock" && pPick == "Scissors")
	{
		return 2;
	}
	else if (cPick == "Paper" && pPick == "Rock")
	{
		return 2;

	}
	else if (cPick == "Scissors" && pPick == "Paper")
	{
		return 2;

	}
	else if (pPick == "Rock" && cPick == "Scissors")
	{
		return 1;

	}
	else if (pPick == "Paper" && cPick == "Rock")
	{
		return 1;
	}
	else if (pPick == "Scissors" && cPick == "Paper")
	{
		return 1;
	}
}

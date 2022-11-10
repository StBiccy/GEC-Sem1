#include <iostream>

// I used this to set a delay using the sleep function
#include <Windows.h>


void Guess(int c1, int c2);
void DrawBoard();
char cards[] = {'B','C','E','A','A','C','E','D','B','D'};
bool found[] = { false, false, false, false, false, false, false, false, false, false };
int attempts = 0;

int main()
{
	bool isPlaying = true;
	int score = 0;


	while (isPlaying)
	{
		int pick1;
		int pick2;

		DrawBoard();

		std::cout << std::endl <<"Pick Two Cards" << std::endl;
		std::cin >> pick1;
		std::cin >> pick2;

		Guess(pick1, pick2);

		if (cards[pick1 - 1] == cards[pick2 - 1])
		{
			found[pick1 - 1] = true;
			found[pick2 - 1] = true;
			score++;
			if (score == 5)
			{
				isPlaying = false;
				Sleep(2000);
				system("cls");
				std::cout << std::endl << "ALL CARDS FOUND!" << std::endl << "YOU WON!!!";
			}
		}
		else
			std::cout << std::endl << "no match....";

		Sleep(2000);
	}
}

void DrawBoard()
{
	system("cls");
	std::cout << "Attempts: " << attempts << std::endl;

	for (int i = 0; i < 10; ++i)
	{
		if (found[i])
			std::cout << "[" << cards[i] << "]";
		else
			std::cout << "[" << i + 1 << "]";

		if (i == 4)
			std::cout << std::endl;
	}
}

void Guess(int c1, int c2)
{
	system("cls");
	std::cout << "Attempts: " << attempts << std::endl;

	for (int i = 0; i < 10; ++i)
	{
		if (found[i]|| i+1 == c1 || i+1 == c2)
			std::cout << "[" << cards[i] << "]";
		else
			std::cout << "[" << i + 1 << "]";

		if (i == 4)
			std::cout << std::endl;
	}
	++attempts;
}


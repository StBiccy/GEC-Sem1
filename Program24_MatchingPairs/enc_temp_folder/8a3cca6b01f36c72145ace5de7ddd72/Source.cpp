#include <iostream>

//void Guess(int c1, int c2);
void DrawBoard();

char cards[10];
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

		std::cout << "Pick Two Cards" << std::endl;
		std::cin >> pick1;
		std::cin >> pick2;

		//Guess(pick1, pick2);
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
	}
}

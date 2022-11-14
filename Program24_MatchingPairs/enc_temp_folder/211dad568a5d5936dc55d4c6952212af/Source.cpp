#include <iostream>

void Guess(int c1, int c2);
void DrawBoard();
void randomiseCards();
char cards[10];
bool found[] = { false, false, false, false, false, false, false, false, false, false };
int attempts = 0;

int main()
{
	bool isPlaying = true;
	int score = 0;

	randomiseCards();

	while (isPlaying)
	{
		int pick1;
		int pick2;

		DrawBoard();

		std::cout << std::endl <<"Pick Two Cards" << std::endl;
		std::cin >> pick1;
		std::cin >> pick2;

		Guess(pick1, pick2);
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

void randomiseCards()
{
	std::string selection = "AABBCCDDEE";
	bool taken[] = { false, false, false , false , false , false , false , false , false , false};
	for (int i = 0; i < 10; ++i)
	{
		int num = rand() % selection.length();
		if (taken[num])
			--i;
		else
		{
			cards[i] = selection.at(num);
			taken[i] = true;
		}
	}
}
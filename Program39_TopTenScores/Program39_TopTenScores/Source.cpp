#include <iostream>
#include <fstream>

struct s
{
	std::string name;
	int score;
};

int main()
{
	s input;
	std::fstream file;

	while (true)
	{
		int choice;
		std::cout << "1: Enter a score\n2: Display scores\n3: Exit" << std::endl;
		std::cin >> choice;

		switch (choice)
		{
		case 1:
			file.open("score.txt");

			std::cout << "Enter score: " << std::endl;
			std::cin >> input.score;

			std::cout << "Enter name: " << std::endl;
			std::cin >> input.name;


			for (int i = 0; i < 10; ++i)
			{
				int num;
				file >> num;

				if (num > input.score)
				{


				}
			}


				break;

		case 2:

			break;

		case 3:
			goto exitLoop;
			break;

		default:
			std::cout << "Invalid" << std::endl;
			break;
		}
	}

exitLoop:;
	return 0;
}
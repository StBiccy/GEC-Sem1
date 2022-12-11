#include <iostream>
#include <fstream>

using namespace std;

struct s
{
	std::string name;
	int score;
};

int main()
{

	s input;

	ifstream inFile;
	ofstream outFile;

	s held[10];

	inFile.open("scores.txt");
	
	if (!inFile.eof())
	{
		for (int i = 0; i < 10; ++i)
		{
			if (!inFile.eof())
			{
				inFile >> held[i].score;
				inFile >> held[i].name;
			}
			else
				i = 10;
		}
	}

	while (true)
	{
		system("cls");

		int choice;
		cout << "1: Enter a score\n2: Display scores\n3: Exit" << std::endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			inFile.open("score.txt");

			cout << "Enter score: " << std::endl;
			cin >> input.score;

			cout << "Enter name: " << std::endl;
			cin >> input.name;

			for (int i = 0; i < 10; ++i)
			{

			}


				break;

		case 2:

			break;

		case 3:

			break;

		default:
			std::cout << "Invalid Input" << std::endl;
			system("pause");
			break;
		}
	}
}
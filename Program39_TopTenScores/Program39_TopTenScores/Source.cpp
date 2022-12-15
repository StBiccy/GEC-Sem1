#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	vector<int> score;
	vector<string>name;


	ifstream inFile;
	ofstream outFile;

	outFile.open("score.txt", ios::out | ios::app);
	outFile.close();
	inFile.open("score.txt");
	while (!inFile.eof())
	{
		int tempScore;
		string tempName;

		inFile >> tempScore;

		if (inFile.eof())
		{
			break;
		}
		score.push_back(tempScore);
		inFile >> tempName;
		name.push_back(tempName);
	}
	inFile.close();

	int vectSize = score.size();


	while (true)
	{
		system("cls");

		int newScore;
		string newName;

		int choice;
		cout << "1: Enter a score\n2: Display scores\n3: Exit" << std::endl;


		cin >> choice;

		switch (choice)
		{
		case 1:
			outFile.open("score.txt");

			cout << "Enter a score" << endl;
			cin >> newScore;


			cout << "Enter a name" << endl;
			cin >> newName;

			for (int i = 0; i < 10; ++i)
			{
				if (vectSize < i + 1)
				{
					score.push_back(newScore);
					name.push_back(newName);

					outFile << score[i] << endl;
					outFile << name[i] << endl;
					++vectSize;

					break;
				}

				if (score[i] < newScore)
				{
					int tempI = score[i];
					string tempS = name [i];

					score[i] = newScore;
					name[i] = newName;

					newScore = tempI;
					newName = tempS;
				}

				outFile << score[i] << endl;
				outFile << name[i] << endl;
			}
			outFile.close();

			break;

		case 2:
			system("cls");
			if (score.empty())
			{
				cout << "No scores in system" << endl;
			}
			for (int i = 0; i < vectSize; ++i)
			{
				int width = 20;

				int n = name[i].length();

				width -= n;

				if (i == 9)
				{
					cout << i + 1 << ": " << name[i];
				}
				else
				{
					cout << setw(2) << i + 1 << ": " << name[i];
				}
				cout << setw(width) << "score: " << score[i] << endl;
			}
			system("pause");

			break;

		case 3:
			exit(1);
			break;

		default:
			std::cout << "Invalid Input" << std::endl;
			system("pause");
			break;
		}

	}

}
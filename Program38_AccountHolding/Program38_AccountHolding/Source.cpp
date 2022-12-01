#include <iostream>
#include <string>
#include <fstream>


using namespace std;

struct Account
{
	string name;
	int num;
	double bal;
};

int main()
{
	Account i;
	Account j;
	bool loop = true;
	bool loop2 = true;	
	int choice = 0;
	char more = ' ';
	ofstream outFile("taxes.txt");
	ifstream inFile;

	

	while (loop)
	{
		cout << "What would you like to do:" << endl;
		cout << "\n1: Enter new details.\n2: Display the contents of the flie.\n3: Display accounts with balances over 10,000.\n4: Exit the Program." << endl;
		cin >> choice;
		switch (choice)
		{
			case 1:
			{
				while (loop2)
				{
					outFile.open("taxes.txt", ios::out | ios::app);
					cout << "Please enter account name" << endl;
					cin >> i.name;
					outFile << i.name<<endl;
					cout << "\nPlease enter account number" << endl;
					cin >> i.num;
					outFile << i.num << endl;
					cout << "\nPlease enter account balance" << endl;
					cin >> i.bal;
					outFile << i.num << endl;
					outFile.close();

					while (true)
					{

						cout << "Do you want to enter more? Y/N" << endl;
						cin >> more;
						if (more == 'Y' || more == 'y')
						{

							break;
						}
						else if (more == 'N' || more == 'n')
						{
							loop2 = false;
							break;
						}
						else
						{
							cout << "enter a valid responce! Y or N" << endl;
						}
					}
				}
				loop2 = true;
				break;
			}
			case 2:
			{

			}
			case 3:
			{

			}
			case 4:
			{
				loop = false;
				break;
			}

			default:
			{
				break;
			}
		}
	
		
	}

}
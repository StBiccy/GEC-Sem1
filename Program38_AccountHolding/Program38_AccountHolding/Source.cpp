#include <iostream>
#include <fstream>

using namespace std;

struct AccountInfo
{
	string name;
	int accNum;
	double bal;
};

int main()
{
	AccountInfo acc1;
	AccountInfo acc2;
	bool while1 = true;
	bool while2;
	int choice;
	ofstream out_file;
	ofstream in_file;

	while (while1)
	{
		cout << "What would you like to do?\n 1: Enter new details\n 2: Display Contents of file\n 3: Display balances over 10,000\n 4: Exit program\n";
		cin >> choice;
		while2 = true;
		switch (choice)
		{
		case 1:
			out_file.open("accounts", ios::out | ios::app);
			while (while2)
			{
				cout << "Please entre a name: ";
				cin >> acc1.name;
				cout << "Please entre the account number: ";
				cin >> acc1.accNum;
				cout << "Please entre the balance: ";
				cin >> acc1.bal;
				out_file << acc1.name << endl;
				out_file << acc1.accNum << endl;
				out_file << acc1.bal << endl;


				
				while (true)
				{
					int temp;
					cout << "\nDo you whish to enter more? 1: yes 2: no" << endl;
					cin >> temp;
					if (temp == 2)
					{
						while2 = false;
						break;
					}
					if (temp == 1)
					{
						break;
					}
					else
					{
						cout << "Invalid answer;" << endl;
					}
				}

			}
			break;

		case 2:

			break;

		case 3:

			break;

		case 4:
			while1 = false;
			break;

		default:
			cout << "\n Invalid option." << endl;
			break;
		}
	}
}
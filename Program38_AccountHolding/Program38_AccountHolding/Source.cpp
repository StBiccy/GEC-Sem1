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
	ifstream in_file;
	int count = 0;
	bool exists = false;

	while (while1)
	{
		system("cls");

		cout << "What would you like to do?\n 1: Enter new details\n 2: Display Contents of file\n 3: Display balances over 100,000\n 4: Exit program\n";
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

				system("cls");
				
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
						system("cls");

						cout << "Invalid answer;" << endl;
					}
				}

			}
			break;

		case 2:
			system("cls");

			in_file.open("accounts");
			if (!in_file.eof())
			{
				count = 0;

				while (!in_file.eof())
				{
					in_file >> acc2.name;
					in_file >> acc2.accNum;
					in_file >> acc2.bal;

					++count;

					cout << "\nAccout: " << count << endl << "Name on account: " << acc2.name << endl << "Account Number: " << acc2.accNum << endl<< "Balance: " << acc2.bal << endl;

				}
			}
			else
			{
				cout << "File could not open!" << endl;
			}
			in_file.close();
			system("pause");
			break;

		case 3:
			in_file.open("accounts");
			
			if (!in_file.eof())
			{
				count = 0;

				while (!in_file.eof())
				{
					in_file >> acc2.name;
					in_file >> acc2.accNum;
					in_file >> acc2.bal;

					++count;

					if (acc2.bal > 100000)
					{
						cout << "\nAccout: " << count << endl << "Name on account: " << acc2.name << endl << "Account Number: " << acc2.accNum << endl << "Balance: " << acc2.bal << endl;
						exists = true;
					}
				}
				if (exists == false)
				{
					cout << " No accounts over 100,000" << endl;
				}
			}
			else
			{
				cout << "File failed to open" << endl;
			}
			system("pause");
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
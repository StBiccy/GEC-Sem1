#include <iostream>
#include <string>
using namespace std;

void newUser(string& s);

int main()
{
	string name;

	cout << "Enter a new username!" << endl;
	cin >> name;

	cout << "Username taken" << endl;

	newUser(name);

	cout << "Try\n"<< name << endl;
}

void newUser(string& s)
{
	srand(time(NULL));
	int num = rand();
	s += to_string(num);	
}
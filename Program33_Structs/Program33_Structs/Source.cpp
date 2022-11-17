#include <iostream>
#include <string>

using namespace std;
struct info
{
	string name;
	int age;
	string number;

	void PrintDetails()
	{
		cout << "\nYour details are:" << endl;
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
		cout << "Phone Number: " << number << endl;
	}
};

int main()
{
	info data;
	cout << "Enter your name:" << endl;
	getline(cin, data.name);

	cout << "\nEnter your age:" << endl;
	cin>>data.age;

	cout << "\nEnter your phone number:" << endl;
	cin >> data.number;

	data.PrintDetails();
}
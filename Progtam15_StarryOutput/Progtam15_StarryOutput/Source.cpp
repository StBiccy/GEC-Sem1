#include <iostream>

using namespace std;

int main ()
{
	int n;
	char star = '*';
	cout << "please enter a number between 1-10" << endl;
	cin >> n;
	char a;
	
	string print;
	for (int i = 0; i < n; i++)
	{
		print += star;
		
		cout << print << endl;
	}

	do
	{
		
		cout << "Do you wat to have anouther go. [Y or N]" << endl << "caps sensitive!" << endl;
		cin >> a;

		if (a == 'Y')
		{
			print += star;

			cout << print << endl;
		}
	} while (a != 'N');
}
#include <iostream>

using namespace std;

int main()
{
	short int Haribo = 40;
	short int students = 14;
	short int shared = Haribo / students;
	short int remainding = (Haribo - shared * students );

	cout << "I have " << Haribo << " packets Haribos, and im sharing it between " << students << " students." << endl;
	cout << "They each get " << shared << ", so i get to eat the remainding " << remainding << " packets." << endl;


}
#include <iostream>
#include <algorithm>

using namespace std;

void comma2blank(char* textToChange);

int main()
{
	char text[100];

	cout << "Please input a sentence, but instead of spaces use commas." << endl;

	cin.getline(text, 100);


	for (int i = 0; text[i] != NULL; ++i)
	{
		comma2blank(&text[i]);
	}

	cout << text;
}

void comma2blank(char* textToChange)
{
	if (*textToChange == ',')
		*textToChange = ' ';

}
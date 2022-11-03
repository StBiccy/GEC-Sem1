#include <iostream>

using namespace std;

int main()
{
	int listOfNum[10];
	int smallestNum;
	int position;

	cout << "Please enter 10 numbers" << endl;

	for (int i = 0; i < 10; ++i)
	{
		cin >> listOfNum[i];
	}

	smallestNum = listOfNum[0];

	for (int j = 0; j < 10; ++j)
	{
		if (smallestNum > listOfNum[j])
		{
			smallestNum = listOfNum[j];
			position = j + 1;
		}
	}
	
	cout << "The smallest number is: " << smallestNum << ", it is number " << position << " on the list";
}
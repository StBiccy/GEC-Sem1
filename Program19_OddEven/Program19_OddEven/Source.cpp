#include <iostream>

using namespace std;

bool evenCheck(int value);
void outputResults(int numOfOdd, int totalOfOdd, int numOfEven, int totalOfEven);


int main()
{
	int evenNum = 0;
	int evenTotal = 0;
	int oddNum = 0;
	int oddTotal = 0;
	cout << "Please enter 10 numbers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		
		if (evenCheck(num))
		{
			evenNum++;
			evenTotal += num;
		}
		else
		{
			oddNum++;
			oddTotal += num;
		}
	}
	outputResults(oddNum, oddTotal, evenNum, evenTotal);
}

bool evenCheck(int value)
{
	if (value % 2 == 0)
		return true;
	else
		return false;
}

void outputResults(int numOfOdd, int totalOfOdd, int numOfEven, int totalOfEven)
{
	cout << "There are " << numOfOdd << " odd numbers, totaling " << totalOfOdd << "." << endl;
	cout << "There are " << numOfEven << " odd numbers, totaling " << totalOfEven << "." << endl;
}
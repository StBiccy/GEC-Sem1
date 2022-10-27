#include <iostream>

using namespace std;

void smallestNumber(int a, int b);
int multipy(int numA);
void divide(int numB);

int main()
{
	for (int i = 0; i < 3; i++)
	{
		int valA;
		int valB;

		cout << "Enter your first number:" << endl;
		cin >> valA;
		cout << endl << "Enter your second number:" << endl;
		cin >> valB;

		smallestNumber(valA, valB);
	}

	for (int i = 0; i < 3; i++)
	{
		int myNum;

		cout << endl << "Enter a number to be mutliped by 10 then divided by 3:" << endl;
		cin >> myNum;

		float answerA = multipy(myNum);
		divide(answerA);
	}
}

void smallestNumber(int a, int b)
{
	if (a < b)
		cout << endl << a << " is the smallest number." << endl << endl;
	else if (b < a)
		cout << endl << b << " is the smallest number." << endl << endl;
	else 
		cout << endl << b << " and " << a <<" are the same value." << endl << endl;

}

int multipy(int num)
{
	return num * 10;
}

void divide(int numB)
{
	int finalAnswer = numB / 3;
	
	cout << endl << "* 10 is " << numB << " / 3 is " << finalAnswer << endl << endl;
}
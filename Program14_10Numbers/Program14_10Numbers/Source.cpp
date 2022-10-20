#include <iostream>
using namespace std;

int main()
{
	int inputNum = 0;
	int total = 0;
	float mean = 0.0f;
	int numCount = 2;

	cout << "Enter two numbers." << endl;
	cin >> inputNum;
	total += inputNum;

	cout << endl;

	cin >> inputNum;
	total += inputNum;

	cout << endl;



	mean = (float)total / numCount;

	cout << "mean: " << mean << endl;
	cout << "total: " << total << endl;

	do
	{
		cout << "Enter a numbers." << endl;
		cin >> inputNum;
		if (inputNum != 0)
		{
			total += inputNum;

			mean = (float)total / numCount;

			cout << "mean: " << mean << endl;
			cout << "total: " << total << endl;
		}
	} while (inputNum !=0);

}

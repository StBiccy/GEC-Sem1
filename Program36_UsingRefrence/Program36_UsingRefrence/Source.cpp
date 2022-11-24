#include <iostream>

using namespace std;

void plus25(int& n);
void minus25(int& n);


int main()
{
	int num;
	int& rNum = num;

	cout << "Enter a number" << endl;
	cin >> num;
	cout << num<<endl;

	plus25(rNum);
	cout << num << endl;

	cout << "\nEnter a new number" << endl;
	cin >> num;
	cout << num << endl;

	minus25(rNum);
	cout << num << endl;


}
void plus25(int& n)
{
	n += 25;
}

void minus25(int& n)
{
	n -= 25;
}
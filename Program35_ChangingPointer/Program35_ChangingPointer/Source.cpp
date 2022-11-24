#include <iostream>

using namespace std;

void inputDetails(int* n1, int* n2);
void outputDetails(int& interger1, int& interger2, int* pointer);


int main()
{
	int num1;
	int num2;
	int* pNum = &num1;

	inputDetails(&num1, &num2);
	outputDetails(num1, num2, pNum);

	pNum = &num2;

	cout << "\nReassigning pNum to num2" << endl;


	outputDetails(num1, num2, pNum);
}

void inputDetails(int* n1, int* n2)
{
	cout << "Please Input two numbers." << endl;

	cin >> *n1;
	cin >> *n2;
}

void outputDetails(int& interger1, int& interger2, int* pointer)
{
	cout << "\n num1 is : " << interger1;
	cout << "\n Adress for num1 is : " << &interger1;
	cout << "\n num2 is : " << interger2;
	cout << "\n Adress for num2 is : " << &interger2;
	cout << "\n pNum's derefrenced value is : " << *pointer;
	cout << "\n Adress for pNum is : " << pointer;
}
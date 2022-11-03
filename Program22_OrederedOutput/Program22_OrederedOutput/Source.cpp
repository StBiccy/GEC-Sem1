#include <iostream>
#include <algorithm>

using namespace std;

void LargestNum(int arr[]);

int main()
{
	int nums[5];


	cout << "Please input 5 numbers;" << endl;

	for (int i = 0; i < 5; ++i)
		cin >> nums[i];

	LargestNum(nums);

	cout << endl << "In accending order you inputed:" << endl;

	sort(nums, nums + 5);

	for (int i = 0; i < 5; ++i)
		cout << nums[i] << ", ";

	cout << endl << endl << "In decending order you inputed:" << endl;

	for (int i = 4; i > -1; --i)
		cout << nums[i] << ", ";



	
}

void LargestNum(int arr[])
{
	int largest;
	int largestPos;

	largest = arr[1];

	for (int i = 0; i < 5; ++i)
	{

		if (largest < arr[i])
		{
			largest = arr[i];
			largestPos = i + 1;
		}
	}

	cout << endl << "The largest number is: " << largest << ", and it is number " << largestPos << " on the list." << endl;
}
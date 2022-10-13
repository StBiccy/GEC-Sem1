#include <iostream>
using namespace std;

int main()
{
	int rian = 1;
	int snow = 2;

	int weather;
	float temp;

	cout << "Please tell me if it's raining with 1, or snowing with 2." << endl;

	cin >> weather;

	cout << "What temperature in Celsius" << endl;

	cin >> temp;

	if (weather == 1)
	{
		if(temp > 15)
		{
			cout << "Wear a light coat" << endl;
		}
		else
		{
			cout << "Wear a thick coat" << endl;

		}
	}
	if (weather == 2)
	{
		if (temp > 5)
		{
			cout << "Wear a something wam" << endl;
		}
		else
		{
			cout << "Stay home" << endl;
		}
	}
	else
	{
		cout << "Have a nice day" << endl;
	}

}
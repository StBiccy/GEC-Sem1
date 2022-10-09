#include <iostream>
using namespace std;

int main()
{
	typedef unsigned short int health;
	health currentHeath;

	enum weapon
	{
		Sword = 1,
		Dagger,
		Mace,
		Twin_Swords,
		Samurai,
		Wizard_Staff,
		Fire_Potion,
		Ice_Blade,
		Small_Knife
	};
	weapon currentWeapon;

	currentHeath = 13000;

	currentWeapon = Samurai;

	cout << "My current health is " << currentHeath << endl;

	cout << "And the ID of my weapon of choice is: " << currentWeapon << endl;

	return 0;
}

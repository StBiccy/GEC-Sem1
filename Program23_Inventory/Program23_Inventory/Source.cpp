#include <iostream>

void InvetoryRead(std::string inv[]);

int main()
{
	// total represents how many items can be in the invetory, num represents the item number, and invetory represents an array of all items in the inventory
	const int Total = 4;
	int Num = 0;
	std::string inventory[4];


	inventory[Num++] = "Sword";
	inventory[Num++] = "Battle Axe";
	inventory[Num++] = "Healing Potion";
	inventory[Num++] = "Daggers";

	std::cout << "You found a STAFF!" << std::endl << "Would you like to swap your DAGGERS for it? (Y/N)" << std::endl;

	char Answer;

	std::cin >> Answer;

	if (Answer == 'Y' || Answer == 'y')
	{
		std::cout << std::endl << "You left your DAGGERS behind, and gained a STAFF!" << std::endl;
		inventory[3] = "Staff";
	}
	else
		std::cout << std::endl << "You left the STAFF behind." << std::endl;


	InvetoryRead(inventory);
}

void InvetoryRead(std::string inv[])
{
	std::cout << std::endl << "Your invetory contains:" << std::endl;
	for (int i = 0; i < 4; ++i)
	{
		std::cout << inv[i] << std::endl;
	}
}
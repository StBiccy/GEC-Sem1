#include <iostream>
#include <vector>
#include <string>

int main ()
{
	std::vector <std::string> inventory;
	int heldMax = 3;

	inventory.push_back("sword");


	for (int i = 1; i < heldMax; ++i)
	{
		std::string ans;

		std::string item1;
		std::string item2;

		if (i == 1)
		{
			item1 = "Staff";
			item2 = "Knife";
		}
		else if (i == 2)
		{
			item1 = "Healing potion";
			item2 = "Fire spell";
		}

		std::cout << "Type which item you wish to keep: " << item1 <<" or " << item2 << std::endl;

		getline(std::cin, ans);

		if (ans == item1 || ans == item2)
		{
			inventory.push_back(ans);
			std::cout << "Your inventory holds" << std::endl;
			for (int j = 0; j < inventory.size(); ++j)
				std::cout << inventory[j] << std::endl;
		}
		else
		{
			std::cout << "Enter a valid item!" << std::endl;
			--i;
		}
	}
	std::cout << std::endl << "Your inventory is full!" << std::endl << std::endl;

	std::cout << "You have found a magic ring what would you like to replace in your inventory?" << std::endl;
	std::cout << "Choices:" << std::endl << "1: " << inventory[0] << std::endl << "2: " << inventory[1] << std::endl << "3: " << inventory[2] << std::endl << std::endl;

	int ans;

	std::cin >> ans;
	while (ans != 1 && ans != 2 && ans != 3)
	{
		std::cout << std::endl << "Invalid answer" << std::endl;
		std::cout << "Choices:" << std::endl << "1: " << inventory[0] << std::endl << "2: " << inventory[1] << std::endl << "3: " << inventory[2] << std::endl << std::endl;

		std::cin >> ans;
	}
	--ans;
	inventory[ans] = "Magic ring";

	std::cout << std::endl << "Your inventory is now:" << std::endl;
	for (int j = 0; j < inventory.size(); ++j)
		std::cout << inventory[j] << std::endl;

	std::cout << std::endl<< "You have been robbed!!" << std::endl<<"Inventory is now:" << std::endl;
	
	inventory.clear();

	std::cout << "Your inventory is now:" << std::endl;
	std::cout << "Empty!" << std::endl;
}


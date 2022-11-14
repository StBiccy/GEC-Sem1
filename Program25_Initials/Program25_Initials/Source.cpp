#include <iostream>


int main()
{
	char initials[50];
	char surname[50];
	std::cout << "Please input your inital for your first name followed by a space, then the initial for your middel name followed by a space, and then you full surname." << std::endl;

	std::cin.getline(initials, 50);

	bool middelSet = false;
	bool startSurname = false;

	for (int i = 0; i < 50; ++i)
	{
		if (initials[i] == '\0')
			break;
		
		if (startSurname)
			std::cout << initials[i];

		if (!startSurname)
		{
			if (initials[i] == ' ' && !middelSet)
			{
				std::cout << "Middel Initial: " << initials[i + 1] << std::endl;
				middelSet = true;
				++i;
			}

			else if (initials[i] == ' ')
			{
				std::cout << "Surname: ";
				startSurname = true;
			}
			if (i == 0)
			{
				std::cout << "First Initial: " << initials[i] << std::endl;
			}
		}
	}
}
#include <iostream>
#include <algorithm>
#include <string>

int main()
{
	std::string name1;
	std::string name2;
	std::string s = "Do you know who loves C++ XX does";


	std::cout << "Enter Your Name." << std::endl;

	getline(std::cin, name1);

	s.insert(27, name1);

	std::cout << s << std::endl;

	std::replace(s.begin(), s.end(), 'X', '\0');

	std::cout << s << std::endl;

	std::cout << "Enter a new longer name" << std::endl;

	getline(std::cin, name2);

	while (name2.size() <= name1.size())
	{
		std::cout << "It needs to be longer. Insert a new name" << std::endl;
		getline(std::cin, name2);
	}

	s.replace(s.find(name1), name1.size(), name2);

	std::cout << s << std::endl;

}
#include <iostream>
#include <algorithm>
#include <string>

int main()
{

	std::string sentence;

	std::cout << "Please enter a sentence (try using the letter e at least once)" << std::endl;

	getline(std::cin, sentence);

	std::replace(sentence.begin(), sentence.end(), 'e', 'X');

	std::cout << sentence;
}
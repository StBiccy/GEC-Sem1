#include <iostream>
#include "pets.h"

using namespace std;

int main()
{
	pet* petPtr;
	int choice;

	while (true)
	{
		cout << "What pet would you like\n 1: cat\n 2: dog\n 3: hamster" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1:
			petPtr = new cat();
			petPtr->talk();
			break;

		case 2:
			petPtr = new dog();
			petPtr->talk();
			break;

		case 3:
			petPtr = new hamster();
			petPtr->talk();
			break;

		default:
			goto exit_loop;
			choice = 0;
			cout << "Option not avalible!" << endl;
			break;
		}
	}

exit_loop:;
	choice = 0;

	

	while (true)
	{
		cin >> choice;

		switch (choice)
		{
		case 0:
			goto skip_loop;
			break;
		case 1:
			petPtr->talk();
			break;
		case 2:
			petPtr->feed();
			break;
		case 3:
			petPtr->play();
			break;
		default:
			break;
		}
	}

skip_loop:;
}


pet::pet(int hunger, int boredom)
{
	m_hunger = hunger;
	m_bored = boredom;
}

void pet::feed(int food)
{
	cout << "Burp!" << endl;
	m_hunger -= food;
	if (m_hunger < 0)
		m_hunger = 0;
	PassingTime();
}

void pet::play(int fun)
{
	cout << "They had fun!" << endl;
	m_bored -= fun;
	if (m_bored < 0)
		m_bored = 0;
	PassingTime();
}

void pet::talk()
{
	cout << "I am your pet and I feel";
	int mood = GetMood();
	if (mood > 15)
	{
		cout << " mad!" << endl;
	}
	else if (mood > 10)
	{
		cout << " frustrated." << endl;
	}
	else if (mood > 5)
	{
		cout << " okay." << endl;
	}
	else
	{
		cout << " happy!" << endl;
	}
}

void pet::PassingTime(int time)
{
	m_hunger += time;
	m_bored += time;
}


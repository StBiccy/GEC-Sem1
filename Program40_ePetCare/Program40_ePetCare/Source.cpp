#include <iostream>
#include "Pets.h"

using namespace std;

int main()
{
	Pet* petPtr;
	int choice;
	cout << "What pet do you want? 1.Cat 2.Dog 3.Hamster: ";
	cin >> choice;

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	switch (choice)
	{
	case 1:
		petPtr = new Cat();
		break;

	case 2:
		petPtr = new Dog();
		break;

	case 3:
		petPtr = new Hamster();
		break;

	default:
		petPtr = new Pet();
		break;
	}

}

Pet::Pet(int hunger, int boredom)
{
	cout << "A new pet has arrived!" << endl;

	m_hunger = hunger;
	m_bored = boredom;
}

void Pet::Feed(int food)
{
	cout << "burp" << endl;
	m_hunger -= food;
	if (m_hunger < 0)
	{
		m_hunger = 0;
	}

	PassingTime();
}

void Pet::Play(int fun)
{
	cout << "You played =)" << endl;
	m_bored -= fun;
	if (m_bored < 0)
	{
		m_bored = 0;
	}

	PassingTime();
}

void Pet::Talk()
{
	cout << "I am your pet and I feel";

	int mood = GetMood();
	if (mood > 15)
	{
		cout << "MAD!!" << endl;
	}	
	else if (mood > 10)
	{
		cout << "frustrated." << endl;
	}
	else if (mood > 5)
	{
		cout << "okay."<< endl;
	}
	else
	{
		cout << "happy!" << endl;
	}

	PassingTime();
}

void Pet::PassingTime(int time)
{
	m_hunger += time;
	m_bored += time;
}
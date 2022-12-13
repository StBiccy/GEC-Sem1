#ifndef PETS_H
#define PETS _H
#include <iostream>
using namespace std;

class Pet
{
public:
	Pet(int huger = 0, int boredom = 0);
	~Pet();
	virtual void Talk();
	void Feed(int food = 4);
	void Play(int fun = 4);
private:
	int m_hunger;
	int m_bored;
protected:
	inline const int GetMood() { return m_hunger + m_bored; }
	void PassingTime(int time = 1);
};

class Cat : public Pet
{
public:
	void Talk()
	{

		cout << "I'm a cat " << endl;
		cout << "I am your pet and I feel ";

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
			cout << "okay." << endl;
		}
		else
		{
			cout << "happy!" << endl;
		}

		PassingTime();
	}
};

class Dog : public Pet
{
public:
	void Talk() 
	{
		cout << "I'm a dog " << endl;
		cout << "I am your pet and I feel ";

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
			cout << "okay." << endl;
		}
		else
		{
			cout << "happy!" << endl;
		}

		PassingTime();
	}
};

class Hamster : public Pet
{
public:
	void Talk() 
	{
		cout << "I'm a hamster " << endl;
		cout << "I am your pet and I feel ";

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
			cout << "okay." << endl;
		}
		else
		{
			cout << "happy!" << endl;
		}

		PassingTime();
	}
};
#endif // !PETS_H

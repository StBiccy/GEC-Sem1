#pragma once
#ifndef PETS_H
#define PETS_H
#include <iostream>
using namespace std;


class pet
{
public:
	pet(int hunger, int boredom);
	~pet();
	virtual void talk();

	void feed(int food = 4);
	void play(int fun = 4);


private:
	int m_hunger = 0;
	int m_bored = 0;
protected:
	inline const int GetMood()
	{
		return m_hunger + m_bored;
	}
	void PassingTime(int time = 1);
};



class cat :public pet
{
public:
	cat();
	~cat();
	void talk() const { cout << "Im a cat" << endl; };
};



class dog :public pet
{
public:
	dog();
	~dog();
	void talk() const { cout << "Im a dog" << endl; };

};
class hamster :public pet
{
public:
	hamster();
	~hamster();
	void talk() const { cout << "Im a hamster" << endl; };
};

#endif //PETS_H
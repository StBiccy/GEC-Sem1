#ifndef PETS_H
#define PETS _H

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
	Cat();
	~Cat();
	virtual void talk();
};

class Dog : public Pet
{
public:
	Dog();
	~Dog();
	virtual void talk();
};

class Hamster : public Pet
{
public:
	Hamster();
	~Hamster();
	virtual void talk();
};
#endif // !PETS_H

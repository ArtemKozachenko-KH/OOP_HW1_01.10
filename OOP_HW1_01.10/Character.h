#pragma once
#include <iostream>
using namespace std;

class Character
{
protected:
	string name;
	int healthPoint;

public:
	Character(string n, int hp) : name(n), healthPoint(hp) {}
	void attack()
	{
		cout << "\n\t|-----Atack:-----|"
			<< "\n\t Name: " << name
			<< "\n\t Health Point: " << healthPoint;
	}
};

class Warrior :public Character
{
public:
	Warrior(string n, int hp) :Character(n,hp) {}
	void attack()
	{
		Character::attack();
		cout << "\n\tType attack : Sword";
	}
};

class Mage :public Character
{
public:
	Mage(string n, int hp) :Character(n, hp) {}
	void attack()
	{
		Character::attack();
		cout << "\n\tType attack : Magic";
	}
};

class Archer :public Character
{
public:
	Archer(string n, int hp) :Character(n, hp) {}
	void attack()
	{
		Character::attack();
		cout << "\n\tType attack : Bow";
	}
};
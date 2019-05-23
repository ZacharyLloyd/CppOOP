#pragma once
#include <string>
using namespace std;

class Character
{
public:
	Character();
	Character(string name);
	string GetName();
	void SetName(string);
	virtual void Display();

protected:
	string name;
};

class Zombie : public Character 
{
	Zombie();
	Zombie(string name, string typeOfZombie);
	string GetZombieType();
	void SetZombieType();
	void Display() override;

private:
	string typeOfZombie;
};

class Demon : public Character 
{
	Demon();
	Demon(string name, string sin);
	string GetSin();
	void SetSin();
	void Display() override;

private:
	string sin;
};
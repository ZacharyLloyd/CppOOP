#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
using namespace std;

class Character
{
public:
	Character();
	Character(string characterName, int characterHealth);
	string GetName();
	void SetName(string);
	int GetHealth();
	void SetHealth(int);
	virtual void Display();

protected:
	string name;
	int health;
};

class Monster : public Character 
{
	Monster();
	Monster(string characterName, int characterHealth, string characterMonsterType, int characterMonsterDamage);
	string GetMonsterType();
	void SetMonsterType(string);
	int GetMonsterDamage();
	void SetMonsterDamage(int);
	void Display() override;

private:
	string typeOfMonster;
	int monsterDamage;
};

class Demon : public Character 
{
	Demon();
	Demon(string characterName, int characterHealth, string characterSin, int characterDemonDamage);
	string GetSin();
	void SetSin(string);
	int GetDemonDamage();
	void SetDemonDamage(int);
	void Display() override;

private:
	string sin;
	int demonDamage;
};

#endif //CHARACTER_H
#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
using namespace std;

class Character
{
public:
	Character();
	Character(string characterName, string characterClass, int characterHealth);
	string GetName();
	void SetName(string);
	string GetClass();
	void SetClass(string);
	int GetHealth();
	void SetHealth(int);
	virtual void Display();

protected:
	string name;
	int health;
	string clase;
};

class Monster : public Character 
{
	Monster();
	Monster(string characterName, int characterHealth,
		string characterMonsterType, int characterMonsterDamage);
	string GetMonsterType();
	void SetMonsterType(string);
	int GetMonsterDamage();
	void SetMonsterDamage(int);
	void Display() override;

private:
	string monsterType;
	int monsterDamage;
};

class Demon : public Character 
{
	Demon();
	Demon(string characterName, int characterHealth,
		string characterSin, int characterDemonDamage);
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
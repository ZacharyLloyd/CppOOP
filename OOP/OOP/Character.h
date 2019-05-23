#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>
using namespace std;
/*This is the header file that declares all of the methods and properties
used in the classes that I have created for this program*/

//Character class (the parent class)
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
	virtual void Display(bool moreInfo);

protected:
	string name;
	int health;
	string clase;
};
//Monster class (child class of Character)
class Monster : public Character 
{
public:
	Monster();
	Monster(string characterName, string characterClass, int characterHealth, string characterMonsterType, int characterMonsterDamage);
	string GetMonsterType();
	void SetMonsterType(string);
	int GetMonsterDamage();
	void SetMonsterDamage(int);
	void Display() override;
	void Display(bool moreInfo) override;

private:
	string monsterType;
	int monsterDamage;
};
//Demon class (child class of Character)
class Demon : public Character 
{
public:
	Demon();
	Demon(string characterName, string characterClass, int characterHealth, string characterSin, int characterDemonDamage);
	string GetSin();
	void SetSin(string);
	int GetDemonDamage();
	void SetDemonDamage(int);
	void Display() override;
	void Display(bool moreInfo) override;

private:
	string sin;
	int demonDamage;
};

#endif //CHARACTER_H
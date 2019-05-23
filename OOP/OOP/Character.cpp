#include <iostream>
#include <string>
#include <iomanip>
#include "Character.h"
/*This is the cpp file for the header file Character where
 the code for the methods that are in the header file are stored*/
using namespace std;

//Character class
Character::Character()
{
}
Character::Character(string characterName, string characterClass, int characterHealth) 
{
	name = characterName;
	health = characterHealth;
}

string Character::GetName() 
{ 
	return name;
}
void Character::SetName(string characterName) 
{
	name = characterName;
}
string Character::GetClass()
{
	return clase;
}
void Character::SetClass(string characterClass)
{
	clase = characterClass;
}
int Character::GetHealth() 
{
	return health;
}
void Character::SetHealth(int characterHealth) 
{
	health = characterHealth;
}
void Character::Display() 
{
	cout << "\nThis is a " << clase << endl;
}
void Character::Display(bool moreInfo)
{
	if (moreInfo)
	{
		cout << "\nThis is " << name << endl;
		cout << "\nThis character is from the " << clase << " class." << endl;
		cout << "\nThis character has a health pool of " << health << endl;
	}
	else
	{
		cout << "\nThis is a  " << clase << endl;
	}
}
//Monster class
Monster::Monster() 
{
}
Monster::Monster(string characterName, string characterClass, int characterHealth, string characterMonsterType, int characterMonsterDamage) 
{
	name = characterName;
	health = characterHealth;
	monsterType = characterMonsterType;
	monsterDamage = characterMonsterDamage;
	clase = characterClass;
}
string Monster::GetMonsterType() 
{
	return monsterType;
}
void Monster::SetMonsterType(string characterMonsterType) 
{
	monsterType = characterMonsterType;
}
int Monster::GetMonsterDamage()
{
	return monsterDamage;
}
void Monster::SetMonsterDamage(int characterMonsterDamage)
{
	monsterDamage = characterMonsterDamage;
}
void Monster::Display()
{
	cout << "\nThis is a " << clase << endl;
}
void Monster::Display(bool moreInfo)
{
	if (moreInfo)
	{
		cout << "\nThis is " << name << endl;
		cout << "\nThis is a " << clase << " class." << endl;
		cout << "\nThis character has a health pool of " << health << endl;
		cout << "\nThis chararacter has a monster type of " << monsterType << endl;
		cout << "\nThis character has a damage output of " << monsterDamage << endl;
	}
	else
	{
		cout << "\nThis is a  " << clase << endl;
	}
}
//Demon class
Demon::Demon()
{
}
Demon::Demon(string characterName, string characterClass, int characterHealth, string characterSin, int characterDemonDamage) 
{
	name = characterName;
	health = characterHealth;
	sin = characterSin;
	demonDamage = characterDemonDamage;
	clase = characterClass;
}
string Demon::GetSin()
{
	return sin;
}
void Demon::SetSin(string characterSin) 
{
	sin = characterSin;
}
int Demon::GetDemonDamage()
{
	return demonDamage;
}
void Demon::SetDemonDamage(int characterDemonDamage)
{
	demonDamage = characterDemonDamage;
}
void Demon::Display()
{
	cout << "\nThis is a  " << clase << endl;
}
void Demon::Display(bool moreInfo)
{
	if (moreInfo)
	{
		cout << "\nThis is " << name << endl;
		cout << "\nThis is a " << clase << " class." << endl;
		cout << "\nThis character has a health pool of " << health << endl;
		cout << "\nThis chararacter punishes the sin of " << sin << endl;
		cout << "\nThis character has a damage output of " << demonDamage << endl;
	}
	else
	{
		cout << "\nThis is a  " << clase << endl;
	}
}
#include <iostream>
#include <string>
#include <iomanip>
#include "Character.h"

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
	cout << "The character's name is " << name 
		<< " with " << health << " health." << endl;
}
//Monster class
Monster::Monster() 
{
}
Monster::Monster(string characterName, int characterHealth, string characterMonsterType, int characterMonsterDamage) 
{
	name = characterName;
	health = characterHealth;
	monsterType = characterMonsterType;
	monsterDamage = characterMonsterDamage;
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
	cout << "The Monster's name is " << name
		<< "which is a  " << monsterType <<
		" type of monster with the health of "
		<< health << endl;
}
//Demon class
Demon::Demon()
{
}
Demon::Demon(string characterName, int characterHealth, string characterSin, int characterDemonDamage) 
{
	name = characterName;
	health = characterHealth;
	sin = characterSin;
	demonDamage = characterDemonDamage;
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
	cout << "The Demon's name is " << name
		<< "who punishes thoses who commit the sin of "
		<< sin << " with a health pool of " << health
		<< endl;
}
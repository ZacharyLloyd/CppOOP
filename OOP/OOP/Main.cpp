#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include "Character.h"
//This is the main cpp file where the magic actually happens by using the class I have created
using namespace std;
void reprintCharacter();

vector<Character *> characterList;
Character * characterPointer;

//Main
void main()
{
	string inputClass, inputString1, inputString2;
	int inputValue1, inputValue2;
	int choice;
	Monster * monsterPointer;
	Demon * demonPointer;

	do {
		cout << "\n Menu for creating characters:\n";
		cout << "1: To create a monster\n";
		cout << "2: To create a demon\n";
		cout << "99: See the character(s) you have created\n";
		cout << "Please pick the character number you would like to create\n";
		cin >> choice;

		switch (choice)
		{
		case 1:
			inputClass = "Monster";
			cout << "Monster name: ";
			cin >> inputString1;
			cout << "Monster health: ";
			cin >> inputValue1;
			cout << "Type of monster: ";
			cin >> inputString2;
			cout << "The monster's damage output: ";
			cin >> inputValue2;
			monsterPointer = new Monster();
			monsterPointer->SetName(inputString1);
			monsterPointer->SetClass(inputClass);
			monsterPointer->SetHealth(inputValue1);
			monsterPointer->SetMonsterType(inputString2);
			monsterPointer->SetMonsterDamage(inputValue2);
			characterList.push_back(monsterPointer);
			break;
		case 2:
			inputClass = "Demon";
			cout << "Demon name: ";
			cin >> inputString1;
			cout << "Demon health: ";
			cin >> inputValue1;
			cout << "The sin of choice: ";
			cin >> inputString2;
			cout << "The demon's damage outpt: ";
			cin >> inputValue2;
			demonPointer = new Demon();
			demonPointer->SetName(inputString1);
			demonPointer->SetClass(inputClass);
			demonPointer->SetHealth(inputValue1);
			demonPointer->SetSin(inputString2);
			demonPointer->SetDemonDamage(inputValue2);
			characterList.push_back(demonPointer);
			break;
		case 3:
			break;
		}
	} while (choice != 99);

	if (characterList.size()) reprintCharacter();
	system("pause");
}
/*Used to reprint out all the data taken in from the user
to show them what they have created in this program*/
void reprintCharacter()
{
	cout << "\nThese are the characters you created: " << endl;
	for (unsigned int i = 0; i < characterList.size(); i++)
	{
		characterPointer = characterList[i];
		characterPointer->Display(true);
	}
}
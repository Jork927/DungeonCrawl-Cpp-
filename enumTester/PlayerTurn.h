#pragma once
#include <iostream>
#include <format>
#include <string>
using namespace std;

#include "Characters.h"
#include "Globals.h"

int attack()
{
	int randomDamage = 10;
	if (guy.weapon == "Sword")
	{
		int randomDamage = rand() % 20 + 10;
		cout << endl << "You deal " << randomDamage << " damage to the Orc" << endl << endl;
		Orc.damageMult += 0.25;
	}
	if (guy.weapon == "Dagger")
	{
		int randomDamage = rand() % 15 + 10;
		cout << endl << "You deal " << randomDamage << " damage to the Orc" << endl << endl;
	}
	if (guy.weapon == "Quarterstaff")
	{
		int randomDamage = rand() % 30 + 10;
		if (randomDamage <= 15) { cout << "Your magic fails, and you deal 0 damage" << endl << endl; }
		else
			cout << endl << "You deal " << randomDamage << " damage to the Orc" << endl << endl;
	}
	return randomDamage;

}

int potion()
{
	guy.score -= 100;
	guy.potionCount--;

	int randomDamage = rand() % 50 + 30;
	cout << "You drink a potion and heal for " << randomDamage << " hp" << endl << endl;
	if (randomDamage + guy.health > 100) { randomDamage = 100 - guy.health; }
	cout << "You now have " << guy.potionCount << " potions left" << endl << endl;
	return randomDamage;
}


void playerTurn()
{
	bool hasRun = false;
	int num = 3;
	while (num < 1 || num > 2)
	{
		if (hasRun == true) { cout <<endl<< "Please enter a valid number." << endl; }
		hasRun = true;
		cout << "1: Attack" << endl << "2: Use a Health Potion" << endl << endl;
		cin >> num;
		if (cin.fail() || num < 0)
		{
			cin.clear();
			cin.ignore(1000, '\n');
			
			continue;
		}
	}
	switch (num)
	{
	case 1: Orc.health -= attack(); break;
	case 2:
		if (guy.potionCount > 0)
		{
			guy.potionsUsed++;
			guy.health += potion(); cout << "You now have " << guy.health << " health remaining." << endl << endl; break;
		}
		else cout << "You are out of potions";
	}
}


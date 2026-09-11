#pragma once
#include <iostream>
#include <format>
#include <string>
using namespace std;

#include "Characters.h"
#include "Globals.h"

void respawnOrc()
{
	Orc = Enemy();
	Orc.health = rand() % 75 + 50;
	Orc.damageMult += rand() % (20 + 10) / 10;

}


int enemyTurn()
{

	int randomDamage = rand() % 10 + 5;
	int realDamage = 0;
	realDamage = randomDamage * Orc.damageMult;
	guy.health -= realDamage;
	cout << "You are hit for " << realDamage << " damage" << endl << "You now have " << guy.health << " remaining." << endl << endl;
	return randomDamage;
}

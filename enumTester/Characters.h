#pragma once
#include <iostream>
#include <format>
#include <string>
using namespace std;

struct Enemy
{
public:
	int health = 75;
	float damageMult = 1.0;
};

struct GameCharacter
{
	string name = "Unknown";
	int health = 100;
	int potionCount = -1;
	int potionsUsed = 0;
	string weapon = "Sword";
	bool isDead = false;
	float score = 0;
};

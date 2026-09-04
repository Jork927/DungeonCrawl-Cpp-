#include <iostream>
#include <format>
#include <string>
using namespace std;


void playerTurn();
int attack(string weapon);
int enemyTurn();
int potion();
void respawnOrc();

struct Enemy
{
public:
	int health = 75;
	float damageMult = 1.0;
};
Enemy Orc;

struct GameCharacter
{
	string name = "";
	int health = 100;
	int potionCount = 10;
	int potionsUsed = 0;
	string weapon = "";
	bool isDead = false;
	float score = 0;
};
GameCharacter guy;
int main()
{
	srand(time(0));
	int playerNum = 4;
	string playerString = "";
	int totalOrcs = 0;
	
	

	
	cout << "What is your character's name?" << endl;
	cin >> playerString;
	guy.name = playerString;
	cout << "How many potions do you want? (Less potions = higher difficulty)" << endl;
	cin >> guy.potionCount;
	cout << "How many Orcs do you want to fight?" << endl;
	cin >> totalOrcs;
	cout << "Hello " << guy.name << ", and welcome to the dungeon" << endl; 
	cout << "There are monsters ahead, so you're going to need a weapon. Choose one from these options!" << endl;
	while (playerNum >= 4) 
	{
		 cout << "1: Sword" << endl << "2: Dagger" << endl << "3: Quarterstaff" << endl << "4: Ask about weapons" << endl;
		cin >> playerNum;
		switch (playerNum) 
		{
		case 1: guy.weapon = "Sword"; break;
		case 2: guy.weapon = "Dagger"; break;
		case 3: guy.weapon = "Quarterstaff"; break;
		case 4: cout << "A sword is a well balanced weapon. Be warned though, large swings can leave you exposed, an easy target." << endl << "A dagger is a light, nimble weapon. It may not pack the same punch as a sword, but it will help you keep your feet under you during combat." << endl << "A quarterstaff's magical capabilities pack a huge punch, but your attacks may fail sometimes due to lack of spellcasting experience." << endl << endl;break;
		}
	}
	
	cout << "An excellent choice " << guy.name << ", I wish you luck!" << endl;
	cout << "YOU HAVE AQUIRED A " << guy.weapon << endl << endl;
	
	cout << "Defeat "<< totalOrcs << " Orcs to escape! How would you like to proceed?" << endl;

	
	int OrcsDefeated = 0;
	while (OrcsDefeated < totalOrcs && !guy.isDead)
	{
		while (Orc.health > 0 && guy.health > 0)
		{
			playerTurn();
			enemyTurn();
		}
		if (Orc.health <= 0)
		{
			OrcsDefeated++;
			cout << "You have won " << OrcsDefeated << " out of " << totalOrcs << " battles!" << endl;
			// todo: check if we defeated 3 of them and quit
			// else ...
			
			respawnOrc();
			guy.score += 1000;

			if (OrcsDefeated < totalOrcs) { cout << endl << "Another Orc Approaches" << endl; }
		}
		else {
			cout << endl << "You Died!" << endl << "The Orc had " << Orc.health << " remaining" << endl << "You defeated " << OrcsDefeated << " out of " << totalOrcs << " total Orcs, and you used " << guy.potionsUsed << " potions of healing." << endl;
			if (guy.potionCount == 0 || guy.potionsUsed == 0) {
				
				guy.score - (guy.potionCount * 10);
				cout << endl << "Final Score: " << guy.score << endl; guy.isDead = true;
				break;
			}
		}
		
	}
	if (guy.health > 0 && OrcsDefeated == totalOrcs) {
		guy.score += 1500;
		guy.score - (guy.potionCount * 10);
		cout << "You've escaped the dungeon! You successfully killed " << OrcsDefeated << " Orc(s) and used " << guy.potionsUsed << " potion(s) of healing" << endl;
		guy.score = (OrcsDefeated * 1000) / (guy.potionsUsed/2) + (guy.potionCount/4);
		cout << endl << "Final Score: " << guy.score << endl;
	}
}

void respawnOrc() 
{
	Orc = Enemy();
	Orc.health = rand() % 75 + 50;
	Orc.damageMult += rand() % (20 + 10) / 10;

}
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
void playerTurn()
{
	int num = 3;
	while (num < 1 || num > 2)
	{
		cout << "1: Attack" << endl << "2: Use a Health Potion" << endl << endl;
		cin >> num;
	}
	switch (num)
	{
	case 1: Orc.health -= attack(); break;
	case 2: 
		if (guy.potionCount > 0)
		{
			guy.potionsUsed++;
			guy.health += potion(); cout << "You now have " << guy.health << " remaining." << endl << endl; break;
		}
		else cout << "You are out of potions";
	}
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
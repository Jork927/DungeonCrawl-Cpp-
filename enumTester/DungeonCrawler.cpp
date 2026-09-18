//#include <iostream>
//#include <format>
//#include <string>
//#include <fstream>
//#include "Globals.h"
//#include "PlayerTurn.h"
//#include "EnemyTurn.h"
//using namespace std;
//
//ifstream inputFile;
//ofstream outputFile;
//fstream bothFile;
//
//
//
//
//void playerTurn();
//int attack();
//int enemyTurn();
//int potion();
//void respawnOrc();
//
//int highScore = 0;
//string hsHolder = "John";
//bool highScoreManager(int score);
//int main()
//{
//
//	srand(time(0));
//	int playerNum = 4;
//	string playerString = "";
//	int totalOrcs = 0;
//
//	ifstream logFile("game_state.txt");
//	if (logFile.is_open())
//	{
//		logFile >> hsHolder;
//		logFile >> highScore;
//	
//		logFile.close();
//	}
//	else { cout << "File failed to open"; logFile.close(); }
//
//	cout << "Current High Score is " << highScore << ", held by " << hsHolder << endl<< endl;
//
//
//
//	cout << "What is your character's name?" << endl;
//
//	
//	cin >> guy.name;
//	
//	cout << "How many potions do you want? (Less potions = higher difficulty)" << endl;
//
//	while (guy.potionCount < 0)
//	{
//		cin >> playerNum;
//
//		if (cin.fail() || playerNum <= 0)
//		{
//			
//			cin.clear();
//			cin.ignore(1000, '\n');
//			cout <<endl<< "Please enter a valid number of potions." << endl;
//			continue;
//		}
//		guy.potionCount = playerNum;
//		cin.ignore(1000, '\n');
//	}
//	playerNum = 0;
//	cout << "How many Orcs do you want to fight?" << endl;
//	
//
//	while (totalOrcs == 0)
//	{
//		cin >> playerNum;
//
//		if (cin.fail() || playerNum <= 0)
//		{
//
//			cin.clear();
//			cin.ignore(1000, '\n');
//			cout << endl << "Please enter a valid number of orcs." << endl;
//			continue;
//		}
//		totalOrcs = playerNum;
//		playerNum = 0;
//		cin.ignore(1000, '\n');
//	}
//
//	cout << endl << "Hello " << guy.name << ", and welcome to the dungeon" << endl; 
//	cout << "There are monsters ahead, so you're going to need a weapon. Choose one from these options!" << endl << endl;
//	bool hasRun = false;
//	while (playerNum >= 4 || playerNum <= 0) 
//	{
//		
//		if (hasRun == true) { cout << endl << "Please enter a valid number." << endl<<endl; }
//		hasRun = true;
//		 cout << "1: Sword" << endl << "2: Dagger" << endl << "3: Quarterstaff" << endl << "4: Ask about weapons" << endl;
//		cin >> playerNum;
//		if (cin.fail())
//		{
//			cin.clear();
//			cin.ignore(1000, '\n');
//			
//			continue;
//		}
//
//		switch (playerNum) 
//		{
//		case 1: guy.weapon = "Sword"; break;
//		case 2: guy.weapon = "Dagger"; break;
//		case 3: guy.weapon = "Quarterstaff"; break;
//		case 4: cout << endl << "A sword is a well balanced weapon. Be warned though, large swings can leave you exposed, an easy target." << endl << endl << "A dagger is a light, nimble weapon. It may not pack the same punch as a sword, but it will help you keep your feet under you during combat." << endl<< endl << "A quarterstaff's magical capabilities pack a huge punch, but your attacks may fail sometimes due to lack of spellcasting experience." << endl << endl;break;
//		}
//		cin.ignore(1000, '\n');
//	}
//	
//	cout << endl << "An excellent choice " << guy.name << ", I wish you luck!" << endl;
//	cout << "YOU HAVE AQUIRED A " << guy.weapon << endl << endl;
//	
//	cout << "Defeat "<< totalOrcs << " Orcs to escape! How would you like to proceed?" << endl;
//
//	
//	int OrcsDefeated = 0;
//	while (OrcsDefeated < totalOrcs && !guy.isDead)
//	{
//		while (Orc.health > 0 && guy.health > 0)
//		{
//			playerTurn();
//			enemyTurn();
//		}
//		if (Orc.health <= 0)
//		{
//			OrcsDefeated++;
//			cout << "You have won " << OrcsDefeated << " out of " << totalOrcs << " battles!" << endl;
//			 todo: check if we defeated 3 of them and quit
//			 else ...
//			
//			respawnOrc();
//			
//
//			if (OrcsDefeated < totalOrcs) { cout << endl << "Another Orc Approaches" << endl; }
//		}
//		else {
//			cout << endl << "You Died!" << endl << "The Orc had " << Orc.health << " remaining" << endl << "You defeated " << OrcsDefeated << " out of " << totalOrcs << " total Orcs, and you used " << guy.potionsUsed << " potions of healing." << endl; 
//			if (guy.potionCount == 0 || guy.potionsUsed == 0) {
//				
//				guy.score -= (guy.potionCount * 10);
//				if (guy.score < 0) { guy.score = 0; }
//				cout << endl << "Final Score: " << guy.score << endl; guy.isDead = true;
//				highScoreManager(guy.score);
//				break;
//			}
//			break;
//		}
//		
//	}
//	if (guy.health > 0 && OrcsDefeated == totalOrcs) {
//		guy.score += 1500;
//		guy.score -= ((guy.potionCount * 10) + (guy.potionsUsed * 5));
//		cout << "You've escaped the dungeon! You successfully killed " << OrcsDefeated << " Orc(s) and used " << guy.potionsUsed << " potion(s) of healing" << endl;
//		guy.score += (OrcsDefeated * 1000);
//		if (guy.score < 0) { guy.score = 0; }
//		cout << endl << "Final Score: " << guy.score << endl;
//		highScoreManager(guy.score);
//	}
//}
//
//bool highScoreManager(int score)
//{
//
//	ifstream logFile("game_state.txt");
//	if (logFile.is_open())
//	{
//		logFile >> highScore; 
//		
//		logFile.close();
//	}
//	else { cout << "File failed to open"; logFile.close(); }
//
//	ofstream logScore("game_state.txt");
//	if (logScore.is_open())
//	{
//		if (score >= highScore)
//		{
//			cout << "New high score: " << score << endl;
//			highScore = score;
//			
//			hsHolder = guy.name;
//			logScore << hsHolder << endl;
//			logScore << highScore << endl;
//			return true;
//		}
//		else
//		{
//			logScore << hsHolder << endl;
//			logScore << highScore << endl;
//			
//			return false;
//		}
//
//		logScore.close();
//	}
//	else { cout << "File failed to open"; }
//
//
//
//
//
//}
//

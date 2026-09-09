#include <iostream>
#include <format>
#include <string>
#include <cctype>
using namespace std;

int main()
{
	
	const int PLAYER_LIVES = 3;
	const string GAME_TITLE = "My Game";
	string playerIn;
	string playerOut;
	/*cout << "player lives: " << PLAYER_LIVES << endl << "Game title: " << GAME_TITLE << endl;
	cout << "Player Name: " << playerName << endl << "Player Name Length: " << playerName.length() << endl << "First character of players name: " << playerName.at(0) << endl;
	cin >> playerIn;
	cout << "Player input: " << playerIn;*/
	
	
	
	//cin >> playerIn;
	//cout << "Player Name: " << playerIn << endl << "Player Name Length: " << playerIn.length() << endl;
	//if (playerIn == playerName) { cout << "Player Names are equal" << endl; }
	//else { cout << "Player names are not equal" << endl; }
	cin >> playerIn;
	for (auto& x : playerIn) { x = tolower(x); playerOut = playerOut + x;   }
	cout << playerOut << endl;
	if (playerOut == "quit") { cout << "I don't know how to make the game quit but here's proof that the logic works :)"; }

	const int MAX_PLAYERS = 4;
	const string GAME_NAME = "Adventure";
	const float VERSION = 1.0;

	cout << MAX_PLAYERS << endl << GAME_NAME << endl << VERSION << endl;
	cin >> playerIn;
	const string playerName = playerIn;
}
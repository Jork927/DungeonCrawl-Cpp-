#include <fstream>
#include <iostream>
using namespace std;
ifstream inputFile;
ofstream outputFile;
fstream bothFile;
int highScore = 0;
int main()
{
	int playerInput;

	ifstream logFile("game_state.txt");
	if (logFile.is_open()) 
	{
		inputFile >> highScore; logFile.close();
	}
	else { cout << "File failed to open"; logFile.close(); }
	
	ofstream logFile("game_state.txt");
		if (logFile.is_open()) 
		{
			
			
			cout << "Current high score: " << highScore << endl;
		
			cout << "What is your score?";
			cin >> playerInput;
			if (playerInput >= highScore) 
			{
				cout << "New high score: " << playerInput << endl;
				highScore = playerInput;
				logFile >> highScore;
				
			}
			
			logFile.close();
		}
		else { cout << "File failed to open"; }
	
	
	


}
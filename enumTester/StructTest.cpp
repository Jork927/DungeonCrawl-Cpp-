#include <iostream>
#include <format>
#include <string>
using namespace std;

 

int main()
{
	int playerNum = 0;
	/*string playerString = "";
	struct GameCharacter
	{
		string name = "";
		int health = 20;
		int level = 1;
	};

	GameCharacter guy;
	cout << "What is your character's name?" << endl;
	cin >> playerString;
	guy.name = playerString;
	cout << "How much HP does your character have?" << endl;
	cin >> playerNum;
	guy.health = playerNum;
	cout << "What level is your character?" << endl;
	guy.level = 1;
	cout << guy.name << " is level " << guy.level << " with " << guy.health << " HP ";
	
	class BankAccount 
	{
	private: 

		int balance = 50; 
		int accountNumber = 0;

	public:

		int deposit(int amount) 
		{ 
			
			balance += amount;
			return balance;
			
		}
		
		int withdraw(int amount) 
		{
			balance -= amount; 
			return balance;
		}
		
		int getBalance() 
		{ 
			return balance;
		}
		
		int setAccountNumber(int num) 
		{
			accountNumber = num;
			return accountNumber;
		}
	};
	
	std::cout << "What is your account number?";
	std::cin >> playerNum;
	

	BankAccount myAccount;
	myAccount.setAccountNumber(playerNum);
	std::cout << "You have $50 in your account. Would you like to withdraw or deposit?" << endl;
	std::cout << "1: Deposit" << endl << "2: Withdraw" << endl;
	std::cin >> playerNum;
	if (playerNum == 1)
	{
		cout << "How much would you like to deposit?" << endl;
		cin >> playerNum;
	
		cout << myAccount.deposit(playerNum) << endl;
	}
	if (playerNum == 2)
	{
		cout << "How much would you like to withdraw?" << endl;
		cin >> playerNum;
		cout << "Balance: ";
		cout << myAccount.withdraw(playerNum) << endl;
	}*/
	
	//struct Address
	//{
	//	string street;
	//	string city;
	//	int zipCode;
	//};

	//struct PlayerStats 
	//{
	//	string name;
	//	Address playerAddress;
	//	int score;
	//};
	//PlayerStats player;
	//cout << "What is your player's name?" << endl;
	//cin >> player.name;
	//cout << "What street do they live on?" << endl;
	//cin >> player.playerAddress.street;
	//cout << "What city do they live in?" << endl;
	//cin >> player.playerAddress.city;
	//cout << "What is their zip code?" << endl;
	//cin >> player.playerAddress.zipCode;
	//cout << "How many points does your player have?" << endl;
	//cin >> player.score;
	//cout << "Your player's name is " << player.name << " and they live on " << player.playerAddress.street << " street in " << player.playerAddress.city << ", " << player.playerAddress.zipCode << " and they have a score count of " << player.score << endl;

class student 
{
private: string name; int id; float gpa;
public:
	student()
	{
		name = "Unknown";
		id = 0;
		gpa = 0.0;
	}
	student()
	{
		cout << "Input student name." << endl;
		cin >> name;
		cout << "Input student ID." << endl;
		cin >> id;
		cout << name << "is your student name, and" << id << " is your student ID";
	}
	
};

}
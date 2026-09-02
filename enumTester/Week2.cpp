#include <iostream>
#include <format>
#include <string>
using namespace std;

//enum healthState
//{
//	Dead,
//	Bloodied,
//	Battered,
//	Scratched,
//	Healthy,
//	Pristine,
//};
//
//string getStatus(int hp)
//{
//	healthState state = Pristine;
//
//	if (hp <= 0)
//	{
//		state = Dead;
//	}
//	else if (hp > 0 && hp <= 20)
//	{
//		state = Bloodied;
//	}
//	else if (hp > 20 && hp <= 40)
//	{
//		state = Battered;
//	}
//	else if (hp > 40 && hp <= 60)
//	{
//		state = Scratched;
//	}
//	else if (hp > 60 && hp <= 80)
//	{
//		state = Healthy;
//	}
//	else
//	{
//		state = Pristine;
//	}
//
//	switch (state)
//	{
//	case Dead:
//		return "You Died.";
//		
//	case Bloodied:
//		return "You are Bloodied.";
//
//	case Battered:
//		return  "You are Battered.";
//	case Scratched: 
//		return "You are Scratched";
//	case Healthy: 
//		return "You are Healthy";
//	case Pristine:
//		return "You are Pristine";
//
//		
//
//	}
//
//}



enum weaponType 
{
	Sword,
	Spear,
	Mace,
	Axe,
};

enum itemRarity
{
	COMMON,
	UNCOMMON,
	RARE,
	EPIC,
	LEGENDARY
};

string getRarityName(itemRarity rarity) 
{
	if (rarity == 0) 
	{
		return "Common";
	}
	else if (rarity == 1)
	{
		return "Uncommon";
	}
	else if (rarity == 2)
	{
		return "Rare";
	}
	else if (rarity == 3)
	{
		return "Epic";
	}
	else if (rarity == 4)
	{
		return "Legendary";
	}
}

int weaponCheck(string damage)
{
	weaponType weapon = Sword;
	if (damage == "Sword")
	{
		weapon = Sword;
	}
	else if (damage == "Spear")
	{
		weapon = Spear;
	}
	else if (damage == "Axe")
	{
		weapon = Axe;
	}
	else if (damage == "Mace")
	{
		weapon = Mace;
	}


	switch (weapon)
	{
	case Sword:
		return 10;
	case Spear:
		return 5;
	case Mace:
		return 20;
	case Axe:
		return 15;
	default:
		return 0;
	}
}



//void dayName(int day) 
//{
//	switch (day)
//	{
//	case 1:
//		cout << "Monday" << endl;
//		break;
//	case 2:
//		cout << "Tuesday" << endl;
//	case 3:
//		cout << "Wednesday" << endl;
//	case 4:
//		cout << "Thursday" << endl;
//	case 5:
//		cout << "Friday" << endl;
//	case 6:
//		cout << "Saturday" << endl;
//	case 7:
//		cout << "Sunday" << endl;
//	default:
//		cout << "What are you doing" << endl;
//	}
//}



int main()
{

	//int hp;
	//cout << "Enter HP percentage (1-100)" << endl;

	//cin >> hp;

	//cout << getStatus(hp);
 
	string rarity;
	string playerWeapon;
	int playerLevel;
	cout << "What is your weapon?";
	cin >> playerWeapon;
	cout << "What level are you?";
	cin >> playerLevel;
	cout << "Your total damage is ";
	cout << weaponCheck(playerWeapon) * playerLevel;
	cin >> rarity;
	
















	/*std::cout << "Hello World" << std::endl;
	std::cout << "Branch test" << std::endl;*/


	/*int playerAge;
	int multiplier = 10000000000;
	int result;
	std::string playerName;
	std::cout << "enter your name" << std::endl;
	std::cin >> playerName;
	std::cout << "enter your age" << std::endl;
	std::cin >> playerAge;
	std::cout << "your name is ";
	std::cout << playerName;
	std::cout << " and you are ";
	std::cout << playerAge;
	std::cout << " years old!" << std::endl;
	result = playerAge * multiplier;
	std::cout << result << std::endl;
	return 0;*/
}




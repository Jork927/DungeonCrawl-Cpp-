//#include <iostream>
//#include <format>
//#include <string>
//using namespace std;
//
////enum healthState
////{
////	Dead,
////	Bloodied,
////	Battered,
////	Scratched,
////	Healthy,
////	Pristine,
////};
////
////string getStatus(int hp)
////{
////	healthState state = Pristine;
////
////	if (hp <= 0)
////	{
////		state = Dead;
////	}
////	else if (hp > 0 && hp <= 20)
////	{
////		state = Bloodied;
////	}
////	else if (hp > 20 && hp <= 40)
////	{
////		state = Battered;
////	}
////	else if (hp > 40 && hp <= 60)
////	{
////		state = Scratched;
////	}
////	else if (hp > 60 && hp <= 80)
////	{
////		state = Healthy;
////	}
////	else
////	{
////		state = Pristine;
////	}
////
////	switch (state)
////	{
////	case Dead:
////		return "You Died.";
////		
////	case Bloodied:
////		return "You are Bloodied.";
////
////	case Battered:
////		return  "You are Battered.";
////	case Scratched: 
////		return "You are Scratched";
////	case Healthy: 
////		return "You are Healthy";
////	case Pristine:
////		return "You are Pristine";
////
////		
////
////	}
////
////}
//
//int itemCost = 10;
//
//enum weaponType 
//{
//	Sword,
//	Spear,
//	Mace,
//	Axe,
//};
//
//enum itemRarity
//{
//	COMMON,
//	UNCOMMON,
//	RARE,
//	EPIC,
//	LEGENDARY
//};
//
//string getRarityName(itemRarity rarity) 
//{
//	if (rarity == 0) 
//	{
//		return "Common";
//	}
//	else if (rarity == 1)
//	{
//		return "Uncommon";
//	}
//	else if (rarity == 2)
//	{
//		return "Rare";
//	}
//	else if (rarity == 3)
//	{
//		return "Epic";
//	}
//	else if (rarity == 4)
//	{
//		return "Legendary";
//	}
//
//	switch (rarity) 
//	{
//	case 0: itemCost = 10;
//	case 1: itemCost = 25;
//	case 2: itemCost = 50;
//	case 3: itemCost = 75;
//	case 4: itemCost = 100;
//	}
//
//}
//
//
//
//int weaponCheck(string damage)
//{
//	weaponType weapon = Sword;
//	if (damage == "Sword")
//	{
//		weapon = Sword;
//	}
//	else if (damage == "Spear")
//	{
//		weapon = Spear;
//	}
//	else if (damage == "Axe")
//	{
//		weapon = Axe;
//	}
//	else if (damage == "Mace")
//	{
//		weapon = Mace;
//	}
//
//
//	switch (weapon)
//	{
//	case Sword:
//		return 10;
//	case Spear:
//		return 5;
//	case Mace:
//		return 20;
//	case Axe:
//		return 15;
//	default:
//		return 0;
//	}
//}
//
//
//
////void dayName(int day) 
////{
////	switch (day)
////	{
////	case 1:
////		cout << "Monday" << endl;
////		break;
////	case 2:
////		cout << "Tuesday" << endl;
////	case 3:
////		cout << "Wednesday" << endl;
////	case 4:
////		cout << "Thursday" << endl;
////	case 5:
////		cout << "Friday" << endl;
////	case 6:
////		cout << "Saturday" << endl;
////	case 7:
////		cout << "Sunday" << endl;
////	default:
////		cout << "What are you doing" << endl;
////	}
////}
//
//
//
//int main()
//{
//	int playerGold = 100;
//	//int hp;
//	//cout << "Enter HP percentage (1-100)" << endl;
//
//	//cin >> hp;
//
//	//cout << getStatus(hp);
// 
//	itemRarity rarity;
//	int choice;
//	/*string playerWeapon;
//	int playerLevel;
//	cout << "What is your weapon?";
//	cin >> playerWeapon;
//	cout << "What level are you?";
//	cin >> playerLevel;
//	cout << "Your total damage is ";
//	cout << weaponCheck(playerWeapon) * playerLevel;*/
//	cout << "What Rarity is your item?" << endl;
//	cout << "0 = Common" << endl;
//	cout << "1 = Uncommon" << endl;
//	cout << "2 = Rare" << endl;
//	cout << "3 = Epic" << endl;
//	cout << "4 = Legendary" << endl;
//	cin >> choice;
//
//
//
//
//	string rarityName = getRarityName((itemRarity)choice);
//	
//	switch (choice)
//	{
//	case 0: itemCost = 10;
//	case 1: itemCost = 25;
//	case 2: itemCost = 50;
//	case 3: itemCost = 75;
//	case 4: itemCost = 100;
//	}
//	cout << "Your item costs ";
//	cout << itemCost;
//	cout << " gold" << endl;
//	cout << "Are you buying or selling?" << endl;
//	cout << "0 = Buying" << endl;
//	cout << "1 = Selling" << endl;
//	cin >> choice;
//	if (choice == 0)
//	{
//		
//		cout << "You now have your new ";
//		cout << rarityName;
//		cout << " item!" << endl;
//		cout << "Your remaining balance is ";
//		cout << playerGold - itemCost;
//		cout << " Gold! " << endl;
//	}
//	else if (choice == 1) {
//		
//		cout << "Thanks for the  ";
//		cout << rarityName;
//		cout << " item" << endl;
//		cout << "Your remaining balance is ";
//		cout << playerGold + itemCost;
//		cout << " Gold! " << endl;
//	}
//	else
//	{
//		cout << "Wrong Answer";
//	}
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//
//	/*std::cout << "Hello World" << std::endl;
//	std::cout << "Branch test" << std::endl;*/
//
//
//	/*int playerAge;
//	int multiplier = 10000000000;
//	int result;
//	std::string playerName;
//	std::cout << "enter your name" << std::endl;
//	std::cin >> playerName;
//	std::cout << "enter your age" << std::endl;
//	std::cin >> playerAge;
//	std::cout << "your name is ";
//	std::cout << playerName;
//	std::cout << " and you are ";
//	std::cout << playerAge;
//	std::cout << " years old!" << std::endl;
//	result = playerAge * multiplier;
//	std::cout << result << std::endl;
//	return 0;*/
//}
//
//
//

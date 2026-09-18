#include <iostream>
#include <format>
#include <string>
#include <fstream>
#include "Globals.h"
#include "PlayerTurn.h"
#include "EnemyTurn.h"
using namespace std;

class Animal 
{
public : virtual void makeSound() 
	{
		cout << "some animal sound" << endl;
	}
};
class Dog : public Animal 
{
public : void makeSound() override 
	{
		cout << "bark" << endl;
	}
};



int main() 
{
	Animal rando;
	Dog chud;
	rando.makeSound();
	chud.makeSound();
}
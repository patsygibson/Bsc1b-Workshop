#pragma once
#include <iostream>
#include <string>

#include "character.h"

using namespace std;

class MysteriousStranger : public Character
{
    private:

	int health;

   public:
	MysteriousStranger();
	virtual int getHealth();
	string getDescription();
	string getName();

	//The attack roll for human player involves the user guessing a number between 1 and 3 for success.
	//int randomAttackRoll();
	//void outputStatus();


};


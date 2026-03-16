#pragma once
#include <iostream>
#include <string>

#include "character.h"


class MysteriousStranger : public Character
{
private:

	int health;

public:
	MysteriousStranger();
	virtual int getHealth();
	std::string getDescription();
	std::string getName();

	//The attack roll for human player involves the user guessing a number between 1 and 3 for success.
	//int randomAttackRoll();
	//void outputStatus();
};



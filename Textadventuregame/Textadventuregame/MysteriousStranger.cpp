#include "MysteriousStranger.h"
#include <string>
#include <iostream>

using namespace std;

MysteriousStranger::MysteriousStranger() : Character()
{
	this->name = "Mysterious Stranger";
	this->description = "A strange figure enveloped in nocturnal shadows. All you know is that they know everything about you.";
	this->health = 150;
}

int MysteriousStranger::getHealth()
{
	return this->health;
}

string MysteriousStranger::getName()
{
	return this->getName();
}

string MysteriousStranger::getDescription()
{
	return this->getDescription();
}


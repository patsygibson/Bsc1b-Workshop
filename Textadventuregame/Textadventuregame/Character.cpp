#include "Character.h"
#include "Location.h"

Character::Character()
{
	this->name = "Unnamed room";
	this->description = "A dark room.";
}

Character::Character(string nName, string nDesc)
{
	this->name = nName;
	this->description = nDesc;
}


string Character::getName()
{
	return this->name;
}

string Character::getDescription()
{
	return this->description;
}


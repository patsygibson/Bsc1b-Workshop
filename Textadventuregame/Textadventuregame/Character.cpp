#include "Character.h"
#include "Location.h"
#include "Item.h"


Character::Character()
{
	this->name = "Unnamed room";
	this->description = "A dark room.";
	this->inventory = vector<Item*>();
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

void Character::addItem(Item* item)
{
	inventory.push_back(item);
}

Item* Character::getItem(string itemName)
{
	for (Item* item : inventory)
	{
		if (item->getName() == itemName)
		{
			return item;

		}
	}
}



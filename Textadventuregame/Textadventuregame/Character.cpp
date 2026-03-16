#include "Character.h"
#include "Location.h"
#include "Item.h"


Character::Character()
{
	this->name = "Unnamed room";
	this->description = "A dark room.";
	this->inventory = std::vector<Item*>();
}

Character::Character(std::string nName, std::string nDesc)
{
	this->name = nName;
	this->description = nDesc;
}


std::string Character::getName()
{
	return this->name;
}

std::string Character::getDescription()
{
	return this->description;
}

void Character::addItem(Item* item)
{
	inventory.push_back(item);
}

Item* Character::getItem(std::string itemName)
{
	for (Item* item : inventory)
	{
		if (item->getName() == itemName)
		{
			return item;

		}
	}
}



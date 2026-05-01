#include "Weapon.h"

Weapon::Weapon()
{
	this->name = "Unnamed Weapon";
	this->description = "No description";
}

Weapon::Weapon(std::string nName, std::string nDesc)
{
	this->name = nName;
	this->description = nDesc;
}


std::string Weapon::getName()
{
	return this->name;
}

std::string Weapon::getDescription()
{
	return this->description;

}
std::string Weapon::setName()
{
	return this->name;
}

std::string Weapon::setDescription()
{
	return this->description;
}

void Weapon::setEquipped(bool equipped)
{
	itemEquipped = equipped;
}

bool Weapon::isEquipped()
{
	return itemEquipped;
}

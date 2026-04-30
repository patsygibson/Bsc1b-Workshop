#include "Weapon.h"

Weapon::Weapon()
{
	this->name = "Old Rusty Sword";
	this->description = "An ancient sword which looks as it dates back to old Sumerian times.";
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
bool Weapon::isEquipped()
{
	return true;
}

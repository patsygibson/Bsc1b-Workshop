#include "Item.h"

Item::Item()
{
	this->name = "Unamed Item";
	this->description = "An indescribable item.";
}

Item::Item(std::string nName, std::string nDesc)
{
	this->name = nName;
	this->description = nDesc;
}

std::string Item::getName()
{
	return this->name;
}

std::string Item::getDescription()
{
	return this->description;
}
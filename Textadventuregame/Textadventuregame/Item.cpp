#include "Item.h"
#include <iostream>
#include <string>

using namespace std;

Item::Item()

{
	this->name = "Unamed Item";
	this->description = "An indescribable item.";
}
Item::Item(string nName, string nDesc)
{
	this->name = nName;
	this->description = nDesc;
}

string Item::getName()
{
	return this->name;
}

string Item::getDescription()
{
	return this->description;
}
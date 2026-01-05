#include "Location.h"

Location::Location()
{
	this->name = "Unnamed room";
	this->description = "A dark room.";
}

Location::Location(string nName, string nDesc)
{
	this->name = nName;
	this->description = nDesc;
}


string Location::getName()
{
	return this->name;
}

string Location::getDescription()
{
	return this->description;
}

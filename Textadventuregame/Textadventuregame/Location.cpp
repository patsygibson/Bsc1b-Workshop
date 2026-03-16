#include "Location.h"

Location::Location()
{
	this->name = "Unnamed room";
	this->description = "A dark room.";
	this->story = {};
}

Location::Location(std::string nName, std::string nDesc)
{
	this->name = nName;
	this->description = nDesc;
	this->story = {};
}


std::string Location::getName()
{
	return this->name;
}

std::string Location::getDescription()
{
	return this->description;
}

void Location::runScenario()
{
	std::cout << "This is a generic location, there is no scenario to run." << std::endl;
}
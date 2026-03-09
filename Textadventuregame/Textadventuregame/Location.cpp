#include "Location.h"

Location::Location()
{
	this->name = "Unnamed room";
	this->description = "A dark room.";
	this->story = {};
}

Location::Location(string nName, string nDesc)
{
	this->name = nName;
	this->description = nDesc;
	this->story = {};
}


string Location::getName()
{
	return this->name;
}

string Location::getDescription()
{
	return this->description;
}

void Location::runScenario()
{
	cout << "This is a generic location, there is no scenario to run." << endl;
}
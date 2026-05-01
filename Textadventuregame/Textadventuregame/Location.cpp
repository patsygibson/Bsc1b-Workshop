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

void Location::runScenario(int& userHealth, int& userSkill)
{
	std::cout << "This is a generic location, there is no scenario to run." << std::endl;
}



int safeInput(int min, int max)
{
	int userInp;

	while (true)
	{
		std::cin >> userInp;
		if (userInp >= min && userInp <= max)
		{
			return userInp;
		}
		else
		{
			std::cout << "\033[91m Invalid input, please enter a number between " << min << " and " << max << ".\033[0m" << std::endl;
		}


	}
}

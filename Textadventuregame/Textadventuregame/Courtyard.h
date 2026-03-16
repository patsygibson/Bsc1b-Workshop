#pragma once
#include <iostream>
#include <vector>

#include "Location.h"


class Courtyard : public Location
{
private:
	
public:
	Courtyard(std::string iName);
	void setName(std::string nName);
	std::string getName();

	void runScenario() override;
};


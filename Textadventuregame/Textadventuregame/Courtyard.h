#pragma once
#include <iostream>
#include <vector>

#include "Location.h"

int safeInput(int min, int max);

class Courtyard : public Location
{
private:
	
public:
	Courtyard(std::string iName);
	void setName(std::string nName);
	std::string getName();

	void runScenario(int& userHealth, int& userSkill) override;
};


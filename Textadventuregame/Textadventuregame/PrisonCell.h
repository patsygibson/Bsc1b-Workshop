#pragma once
#include <iostream>
#include <vector>

#include "Location.h"



class PrisonCell : public Location
{

private:

public:
	PrisonCell(std::string iName);
	void setName(std::string nName);
	std::string getName();
	
	void runScenario(int& userHealth, int& userSkill) override;
};



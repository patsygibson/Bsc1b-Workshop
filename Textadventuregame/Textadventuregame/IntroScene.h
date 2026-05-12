#pragma once
#include <iostream>
#include <vector>

#include "Location.h"

int safeInput(int min, int max);

class IntroScene : public Location
{
private:

public:
	IntroScene(std::string iName);
	void setName(std::string nName);
	std::string getName();

	void runScenario(int& userHealth, int& userSkill) override;
};


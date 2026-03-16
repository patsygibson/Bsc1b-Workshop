#pragma once
#include <iostream>
#include <vector>

#include "Location.h"

class IntroScene : public Location
{
private:

public:
	IntroScene(std::string iName);
	void setName(std::string nName);
	std::string getName();

	void runScenario() override;
};


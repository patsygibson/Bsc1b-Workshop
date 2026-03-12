#pragma once
#include <iostream>
#include <vector>

#include "Location.h"

class IntroScene : public Location
{
private:

public:
	IntroScene(string iName);
	void setName(string nName);
	string getName();

	void runScenario() override;
};


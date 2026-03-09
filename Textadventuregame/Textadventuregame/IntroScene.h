#pragma once

#include "Location.h"

class IntroScene : public Location
{
private:
	string name;

public:
	IntroScene(string iName);

	string getName();
};


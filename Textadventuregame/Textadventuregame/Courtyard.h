#pragma once
#include <iostream>
#include <vector>

#include "Location.h"

using namespace std;

class Courtyard : public Location
{
private:
	
public:
	Courtyard(string iName);
	void setName(string nName);
	string getName();

	void runScenario() override;
};


#pragma once
#include <iostream>
#include <vector>

#include "Location.h"

using namespace std;

class PrisonCell : public Location
{
private:

public:
	PrisonCell(string iName);
	void setName(string nName);
	string getName();
	
	void runScenario() override;
};


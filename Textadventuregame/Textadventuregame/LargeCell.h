#pragma once
#include "Location.h"

int safeInput(int min, int max);

class LargeCell : public Location
{
private:

public:
	LargeCell(std::string iName);
	void setName(std::string nName);
	std::string getName();

	void runScenario(int& healthEffect, int& skillEffect) override;

};


#pragma once
#include "Location.h"

int safeInput(int min, int max);

class CrumblingCell : public Location
{
private:

public:
	CrumblingCell(std::string iName);
	void setName(std::string nName);
	std::string getName();

	void runScenario(int& healthEffect, int& skillEffect) override;

};




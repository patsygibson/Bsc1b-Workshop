#pragma once
#include "Location.h"

class CrumblingCell : public Location
{
private:

public:
	CrumblingCell(std::string iName);
	void setName(std::string nName);
	std::string getName();

	void runScenario(int& healthEffect, int& skillEffect) override;

};




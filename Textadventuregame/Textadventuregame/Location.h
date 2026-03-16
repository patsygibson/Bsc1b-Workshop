#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "NarrPoint.h"


class Location
{
protected:
	std::string name;
	std::string description;
	std::vector<NarrPoint> story;

public:
	Location();
	Location(std::string nName, std::string nDesc);


	std::string getName();
	std::string getDescription();

	virtual void runScenario();

};

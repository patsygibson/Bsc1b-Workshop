#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "NarrPoint.h"


using namespace std;


class Location
{
protected:
	string name;
	string description;
	vector<NarrPoint> story;

public:
	Location();
	Location(string nName, string nDesc);


	string getName();
	string getDescription();

	virtual void runScenario();

};

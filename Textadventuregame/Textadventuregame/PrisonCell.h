#pragma once
#include <iostream>
#include <vector>

#include "Location.h"

using namespace std;

class PrisonCell : public Location
{
private:
	string name;
	
public:
	PrisonCell(string iName);
	void setName(string nName);
	string getName();
	
};


#pragma once
#include "Location.h"

using namespace std;

class Courtyard : public Location
{
private:
	//string name;
public:
	Courtyard(string iName);
	void setName(string nName);
	string getName();
};


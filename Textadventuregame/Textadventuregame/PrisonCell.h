#pragma once
#include <iostream>
#include <vector>

using namespace std;

class PrisonCell
{
private:
	string name;
	string description;

public:
	PrisonCell();
	PrisonCell(string iName, string iDesc);

	string getName();
	string getDescription();

};


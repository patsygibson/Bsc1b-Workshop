#pragma once
#include <iostream>
#include <string>

using namespace std;

class Item
{
private:
	string name;
	string description;

public:
	Item();
	Item(string nName, string nDesc);
	string getName();
	string getDescription();
};





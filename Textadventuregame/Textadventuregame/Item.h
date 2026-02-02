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

Item::Item()
{
	this->name = "Unnamed item";
	this->description = "Unknown item.";
}

Item::Item(string nName, string nDesc)
{
	this->name = nName;
	this->description = nDesc;
}

string Item::getName()
{
	return this->name;
}

string Item::getDescription()
{
	return this->description;
}




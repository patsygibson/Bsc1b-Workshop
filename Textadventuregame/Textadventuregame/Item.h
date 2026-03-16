#pragma once
#include <iostream>
#include <string>


class Item
{
private:
	std::string name;
	std::string description;

public:
	Item();
	Item(std::string nName, std::string nDesc);
	std::string getName();
	std::string getDescription();
};




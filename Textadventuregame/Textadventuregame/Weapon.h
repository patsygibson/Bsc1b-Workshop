#pragma once
#include <iostream>

class Weapon
{
protected:
	std::string name;
	std::string description;

public:
	Weapon();
	Weapon(std::string nName, std::string nDesc);


	std::string getName();
	std::string getDescription();

	bool isEquipped();

};

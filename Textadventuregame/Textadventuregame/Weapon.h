#pragma once
#include <iostream>

class Weapon
{
protected:
	std::string name;
	std::string description;
	bool itemEquipped;

public:
	Weapon();
	Weapon(std::string nName, std::string nDesc);


	std::string getName();
	std::string getDescription();

	std::string setName();
	std::string setDescription();

	void setEquipped(bool equipped);

	bool isEquipped();

};

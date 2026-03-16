#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"


class Character
{
private:
	std::string name;
	std::string description;
	std::vector<Item*> inventory;

public:
		Character();
		Character(std::string nName, std::string nDesc);

		std::string getName();
		std::string getDescription();

		void addItem(Item* item);
		Item* getItem(std::string item);
	};


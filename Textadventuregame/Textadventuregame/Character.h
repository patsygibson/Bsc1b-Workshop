#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Item.h"

using namespace std;

class Character

{
private:
	string name;
	string description;
	vector<Item*> inventory;

public:
		Character();
		Character(string nName, string nDesc);


		string getName();
		string getDescription();

		void addItem(Item* item);
		Item* getItem(string item);
	};


#pragma once
#include <iostream>
#include <string>

using namespace std;

class Character

{
private:
	string name;
	string description;

public:
		Character();
		Character(string nName, string nDesc);


		string getName();
		string getDescription();

	};


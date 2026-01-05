#pragma once
#include <iostream>
#include <string>


using namespace std;


class Location
{
private:
	string name;
	string description;

public:
	Location();
	Location(string nName, string nDesc);


	string getName();
	string getDescription();

};

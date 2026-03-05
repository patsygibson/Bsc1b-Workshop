#pragma once
#include "Location.h"

class IntroScene
{
private:
	string name;
	string userInput;
	string playerName;
public:
	IntroScene();
	IntroScene(string iName, string iuserInput, string iplayerName);

	string getName();
	string getUserInput();
	string getplayerName();
};


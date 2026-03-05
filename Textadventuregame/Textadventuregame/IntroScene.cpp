#include "IntroScene.h"
#include <iostream>
#include <vector>

using namespace std;

IntroScene::IntroScene()
{
	this->name = "Empty name";
	this->userInput = "Empty userInput";
	this->playerName = "Empty playerName";
}

IntroScene::IntroScene(string iName, string iuserInput, string iplayerName)
{
	this->name = iName;
	this->userInput = iuserInput;
	this->playerName = iplayerName;
}

string IntroScene::getName()
{
	return this->name;
}

string IntroScene::getUserInput()
{
	return this->userInput;
}

string IntroScene::getplayerName()
{
	return this->playerName;
}

int main()
{
	string name = "IntroScene";
	string userInput = "Empty userinput";

	cout << "You are sitting in your office staring at the blank screen of your computer. All of a sudden, your computer starts to glitch and a message appears on the screen: 'Please enter your name to continue: ' " << endl;
	cin >> userInput;
	system("cls");
	userInput == playerName;


	//Next scene will be the prison cell.

}
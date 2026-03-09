#include "IntroScene.h"
#include <iostream>
#include <vector>

using namespace std;

IntroScene::IntroScene(string iName) : Location()
{
	this->name = iName;
}

string IntroScene::getName()
{
	return this->name;
}

/*
int main() {
	string name = "IntroScene";
	string userInput = "Empty userinput";

	cout << "You are sitting in your office staring at the blank screen of your computer. All of a sudden, your computer starts to glitch and a message appears on the screen: 'Please enter your name to continue: ' " << endl;
	cin >> userInput;
	system("cls");

	string playerName;
	playerName = userInput;

	cout << "Well done, " << playerName << " !" << endl;
}
 //Trying to assign the user input to the player name variable.

 */

	//Next scene will be the prison cell.


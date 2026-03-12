#include "IntroScene.h"
#include "NarrPoint.h"


IntroScene::IntroScene(string iName) : Location()
{
	
	this->name = iName;
	string name = "Intro";
	string userInput = "Empty userinput";

	cout << "You are sitting in your office staring at the blank screen of your computer. All of a sudden, your computer starts to glitch and a message appears on the screen: 'Please enter your name to continue: ' " << endl;
	cin >> userInput;
	system("cls");

	string playerName;
	playerName = userInput;

	cout << "Well done, " << playerName << " !" << endl;
}



void IntroScene::setName(string nName)
{
	this->name = nName;
}

string IntroScene::getName()
{
	return this->name;
}

void IntroScene::runScenario()
{
	int plotIndex = 0;

	while (plotIndex >= 0 && plotIndex < this->story.size()) {
		cout << story[plotIndex].getPlot() << endl;
		cout << story[plotIndex].getQuestion() << endl;

		for (int i = 0; i < story[plotIndex].getChoices().size(); i++) {
			cout << "[" << i << "]" << story[plotIndex].getChoices()[i] << endl;
		}
		int userInp;
		cin >> userInp;
		system("cls");
		cout << "You chose: " << story[plotIndex].getChoices()[userInp] << endl;

		plotIndex += 1;
		cout << "=================================================== " << endl;
	}
}


/*

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


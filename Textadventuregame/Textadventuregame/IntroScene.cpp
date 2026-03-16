#include "IntroScene.h"
#include "NarrPoint.h"


IntroScene::IntroScene(std::string iName) : Location()
{
	this->name = iName;
	std::string name = "Intro";
	std::string userInput = "Empty userinput";

}



void IntroScene::setName(std::string nName)
{
	this->name = nName;
}

std::string IntroScene::getName()
{
	return this->name;
}

void IntroScene::runScenario()
{
	std::string playerName;
	std::string userInput;
	std::string getline;
	int plotIndex = 0;

	std::cout << "You are sitting in your office staring at the blank screen of your computer. All of a sudden, your computer starts to glitch and a message appears on the screen: 'Please enter your name to continue: ' " << std::endl;
	std::getline(std::cin, userInput);
	//std::cin >> userInput;
	system("cls");


	std::cout << "Welcome, " << userInput << " !" << std::endl;


	while (plotIndex >= 0 && plotIndex < this->story.size()) {
		std::cout << story[plotIndex].getPlot() << std::endl;
		std::cout << story[plotIndex].getQuestion() << std::endl;

		for (int i = 0; i < story[plotIndex].getChoices().size(); i++) {
			std::cout << "[" << i << "]" << story[plotIndex].getChoices()[i].text << std::endl;
		}
		int userInput;
		std::cin >> userInput;
		system("cls");
		std::cout << "You chose: " << story[plotIndex].getChoices()[userInput].text << std::endl;

		plotIndex += 1;
		std::cout << "=================================================== " << std::endl;
	}
}



#pragma once
#include <iostream>
#include <vector>



struct Choice
{
	std::string text;

	int healthEffect;
	int skillEffect;
};


class NarrPoint
{
private:
	std::string plot;
	std::string question;

	std::vector<Choice> choice;

public:
	NarrPoint();
	NarrPoint(std::string iPlot, std::string iQuestion);

	std::string getPlot();
	std::string getQuestion();
	void addChoice(Choice iChoice);

	std::vector<Choice> getChoices();
};


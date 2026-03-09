#pragma once
#include <iostream>
#include <vector>

using namespace std;

/*
struct Choice
{
	string text;


	int healthEffect;
	int skillEffect;
};
*/

class NarrPoint
{
private:
	string plot;
	string question;

	vector<string> choice;

public:
	NarrPoint();
	NarrPoint(string iPlot, string iQuestion);

	string getPlot();
	string getQuestion();
	void addChoice(string iChoice);

	vector<string> getChoices();
};


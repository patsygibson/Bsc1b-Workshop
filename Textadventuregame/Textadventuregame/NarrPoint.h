#pragma once
#include <iostream>
#include <vector>

using namespace std;

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


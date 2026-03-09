#include "NarrPoint.h"

NarrPoint::NarrPoint()
{
	this->plot = "Empty plot";
	this->question = "Empty question";
	this->choice = {};
}
NarrPoint::NarrPoint(string iPlot, string iQuestion)
{
	this->plot = iPlot;
	this->question = iQuestion;
	this->choice = {};
}

string NarrPoint::getPlot()
{
	return this->plot;
}

string NarrPoint::getQuestion()
{
	return this->question;
}

void NarrPoint::addChoice(string iChoice)
{
	this->choice.push_back(iChoice);
}

vector<string> NarrPoint::getChoices()
{
	return this->choice;
}
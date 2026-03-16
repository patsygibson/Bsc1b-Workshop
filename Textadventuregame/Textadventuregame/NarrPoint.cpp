#include "NarrPoint.h"

NarrPoint::NarrPoint()
{
	this->plot = "Empty plot";
	this->question = "Empty question";
	this->choice = {};
}
NarrPoint::NarrPoint(std::string iPlot, std::string iQuestion)
{
	this->plot = iPlot;
	this->question = iQuestion;
	this->choice = {};
}

std::string NarrPoint::getPlot()
{
	return this->plot;
}

std::string NarrPoint::getQuestion()
{
	return this->question;
}

void NarrPoint::addChoice(Choice iChoice)
{
	this->choice.push_back(iChoice);
}

std::vector<Choice> NarrPoint::getChoices()
{
	return this->choice;
}
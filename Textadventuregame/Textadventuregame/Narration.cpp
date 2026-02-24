#include "Narration.h"

Narration::Narration()
{
	this->question = " ";
	this->possibleAnswers = {};
	this->correctAnswer = " ";
	this->returnIndex = 0;
}

Narration::Narration(string nQuestion, vector<string> nPossibleAnswer, string nCorrectAnswer, int nReturnIndex)
{
	this->question = nQuestion;
	this->possibleAnswers = nPossibleAnswer;
	this->correctAnswer = nCorrectAnswer;
	this->returnIndex = nReturnIndex;
}
string Narration::getQuestion()
{
	return this->question;
}

vector<string> Narration::getPossibleAnswers()
{
	return this->possibleAnswers;
}
string Narration::getCorrectAnswer()
{
	return this->correctAnswer;
}
int Narration::getReturnIndex()
{
	return this->returnIndex;
}
bool Narration::checkAnswer()
{
	string answer; cout << "your answer: "; 
	cin >> answer;
	if (answer == this->correctAnswer)
	{
		return true;
	}
	else
	{
		return false;

	}
}

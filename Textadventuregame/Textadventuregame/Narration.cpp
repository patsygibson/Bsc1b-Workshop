#include "Narration.h"

Narration::Narration()
{
	this->Question = " ";
	this->PossibleAnswer = vector<string>();
	this->CorrectAnswer = " ";
	this->Failure = 0;
	this->CheckAnswer = false;
}

Narration::Narration(string nQuestion, vector<string> nPossibleAnswer, string nCorrectAnswer, int nFailure)
{
	this->Question = nQuestion;
	this->PossibleAnswer = nPossibleAnswer;
	this->CorrectAnswer = nCorrectAnswer;
	this->Failure = nFailure;
	this->CheckAnswer = nCheckAnswer;
}
string Narration::getQuestion()
{
	return this->Question;
}

vector<string> Narration::getPossibleAnswer()
{
	return this->PossibleAnswer;
}
string Narration::getCorrectAnswer()
{
	return this->CorrectAnswer;
}
int Narration::getFailure()
{
	return this->Failure;
}
bool Narration::CheckAnswer(string input)
{
	string answer; cout << "your answer: "; 
	cin >> answer;
	if (answer == this->CorrectAnswer)
	{
		this->CheckAnswer = true;
	}
	else
	{
		this->CheckAnswer = false;

	} return this->CheckAnswer;
}

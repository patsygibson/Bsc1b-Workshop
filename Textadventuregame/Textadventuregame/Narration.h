#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Character.h"
#include "Game.h"

using namespace std;

class Narration
{
private:
	string Question;
	vector<string> PossibleAnswer;
	string CorrectAnswer;
	int Failure;
	bool CheckAnswer;
public:
	Narration();
	Narration(string nQuestion, vector<string> nPossibleAnswer, string nCorrectAnswer, int nFailure, bool nCheckAnswer);
	string getQuestion();
	vector<string> getPossibleAnswer();
	string getCorrectAnswer();
	int getFailure();

	bool CheckAnswer(string input);

};


#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "Character.h"

using namespace std;

class Narration
{
private:
	string question;
	vector<string> possibleAnswers;
	string correctAnswer;
	int returnIndex;

public:
	Narration();
	Narration(string nQuestion, vector<string> nPossibleAnswer, string nCorrectAnswer, int nReturnIndex);
	string getQuestion();
	vector<string> getPossibleAnswers();
	string getCorrectAnswer();
	int getReturnIndex();

	bool checkAnswer();

};


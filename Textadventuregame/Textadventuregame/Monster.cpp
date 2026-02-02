#include "Monster.h"
#include <string>
#include <iostream>

using namespace std;
// this is a new line


Monster::Monster()
{
	this->name = "Tairn";
	this->type = "Ork";
	this->health = 100;
	this->attackStat = 0;
}

Monster::Monster(string nName, string nType, int nAttackStat)
{
	this->name = nName;
	this->type = nType;
	this->health = 100;
	this->attackStat = 0;
}

	string Monster::getName()
	{
		return this->name;
	}

	string Monster::getType()
	{
		return this->type;
	}

	int Monster::getAttackStat()
	{
		return this->attackStat;
	}

	int Monster::getHealth()
	{
		return this->health;
	}
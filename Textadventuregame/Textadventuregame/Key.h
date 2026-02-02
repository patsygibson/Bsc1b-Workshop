#pragma once
#include <iostream>
#include <string>

#include "Item.h"

using namespace std;

class Key : public Item
{
private:
	bool used;
public:
	bool unlock();
};



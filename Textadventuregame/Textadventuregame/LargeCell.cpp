#include "LargeCell.h"
#include "NarrPoint.h"

LargeCell::LargeCell(std::string iName) : Location()
{
	this->name = iName;

NarrPoint twelfth = NarrPoint("You enter another prison cell but this one has a very large book in it. Ludovic says 'If you touch this book, it will take you back to your home back in 2026'", "Will you enter the cell and touch the book?");
/*
twelfth.addChoice("Yes");
twelfth.addChoice("No");
*/
}

void LargeCell::setName(std::string nName)
{
	this->name = nName;
}

std::string LargeCell::getName()
{
    return this->name;
}

void LargeCell::runScenario()
{
    int plotIndex = 0;
    int userInp;

    while (plotIndex >= 0 && plotIndex < this->story.size()) {
        std::cout << story[plotIndex].getPlot() << std::endl;
        std::cout << story[plotIndex].getQuestion() << std::endl;

        for (int i = 0; i < story[plotIndex].getChoices().size(); i++) {
            std::cout << "[" << i << "]" << story[plotIndex].getChoices()[i].text << std::endl;
        }
        std::cin >> userInp;
        system("cls");
        std::cout << "You chose: " << story[plotIndex].getChoices()[userInp].text << std::endl;

        plotIndex += 1;
        std::cout << "=================================================== " << std::endl;
    }
}

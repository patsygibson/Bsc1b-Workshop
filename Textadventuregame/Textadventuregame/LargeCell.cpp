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
NarrPoint thirteenth = NarrPoint("As you enter the cell and you touch the large book all of a sudden the cell door slams shut behind you. 'Please do forgive me' He smirks 'You really thought I would just let you go without a price to pay?", "Will you ask him what the price is?");
//thirteenth.addChoice("What price?");
//thirteenth.addChoice("I don't care, just let me go!");

NarrPoint fourteenth = NarrPoint("'You're an old soul Herman, you left this timeline a longtime ago and travelled to escape your fate.'", "'You never finished writing this book. Now I can be kind and I can let you go back to your timeline and your silly little job if you finish the Codex Giga. You must solve the missing words and riddles, if you fail to do so your soul will be another one added to my collection.'" );
//fourteenth.addChoice("I will do it"); You gain points at this choice
//fourteenth.addChoice("I refuse to make a deal with you!"); You lose points at this choice



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

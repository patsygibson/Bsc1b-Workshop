#include "LargeCell.h"
#include "NarrPoint.h"

LargeCell::LargeCell(std::string iName) : Location()
{
	this->name = iName;

NarrPoint first = NarrPoint("You enter another prison cell but this one has a very large book in it. Ludovic says 'Here, I have had enough of you... If you touch this book, it will take you back to your home back in 2026'", "Will you enter the cell and touch the book?");
Choice firstChoice = Choice{ "Yes", "You step into the cell and you touch the book, you feel a strange sensation and all of a sudden the cell door behind you slams shut", 0, 0 };
first.addChoice(firstChoice);

NarrPoint second = NarrPoint("As you enter the cell and you touch the large book all of a sudden the cell door slams shut behind you. 'Please do forgive me' He smirks 'You really thought I would just let you go without a price to pay?", "Will you ask him what the price is?");
Choice secondChoice = Choice{ "Fine if you tell me the price, I will do it.", "You ask him what the price is and he says 'I want you to finish where you left off with this book...' The pages of the book start to turn towards the next part of the book where you see there are missing words annd blank parts. You don't understand the book's language or what it's about. But you know you have to solve this issue, fill in the blanks if you want to go back to your timeline.", 0, 1 };

NarrPoint third = NarrPoint("'You're an old soul Herman, you left this timeline a longtime ago and travelled to escape your fate.'", "'You never finished writing this book. Now I can be kind and I can let you go back to your timeline and your silly little job if you finish the Codex Giga. You must solve the missing words and riddles, if you fail to do so your soul will be another one added to my collection.'" );
Choice firstChoice = Choice{ "I will do it", "You gain points at this choice", 0, 1 };
Choice secondChoice = Choice{ "I refuse to make a deal with you!", "He sighs 'Very well, have it your way' You feel a sharp pain hit your chest and you fall back 'Please don't refuse my offer, I can help you.' He says nonchalantly", 0, -1 };

NarrPoint fourth = NarrPoint("You look at the book and you can't but notice how big it is. You can look through the pages to get a rough idea on what you have to write", "Which page would you like to turn to?");
Choice firstChoice = Choice{ "Page 1", "You turn to the first page and you see it says 'Frater Ambrosius tua munuscula perferens' Which looks like the beginning of the Vulgate Bible.", 1, 0 };
Choice secondChoice = Choice{ "Page 577", "You turn to page 577 and you see a full illustration of a horned creature with a large grin on its face and a human body. ", 0, 1 };
Choice thirdChoice = Choice{ "Page 333", "You turn to page 333 and it says 'In nomine patris et filii et spiritus sancti. Exsurgat Deus et dissipentur inimici eius et fugiant qui oderunt eum a facie eius.' This is the begining of a powerful exorcism prayer in Latin.", 1, 0 };

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

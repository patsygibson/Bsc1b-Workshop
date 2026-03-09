#include "PrisonCell.h"
#include "NarrPoint.h"

PrisonCell::PrisonCell(string iName) : Location()
{
    this->name = iName;


    NarrPoint first = NarrPoint("You wake up in a cold damp room. ", " You hear distant screams and the clanging of metal. You look around and you realise you are in a old prison cell. Suddenly you hear a voice echo from the shadows... 'Ah there you are...' the stranger says 'so you were brave enough to enter your name after all'. Your eyes try to adjust to the dimness of the cell and you try to make this figure. You don't recognise them but their voice sounds familiar somehow. They speak again 'I am guessing you would like to know where you are.' ");
    first.addChoice("Yes");
    first.addChoice("I don't know");

    NarrPoint second = NarrPoint("'You are in a Catholic Benedictine Monastery prison cell, located in Podlazice, Bohemia to be exact.' ", "Can you guess the year?");
    second.addChoice("500BC.");
    second.addChoice("1221.");

    NarrPoint third = NarrPoint("You look at the prison cell door, it is old and rusty.", "Would you like to attempt in opening it? ");
    third.addChoice("Yes");
    third.addChoice("No");

    NarrPoint fourth = NarrPoint("You try to open the door but it won't budge, it's locked tight. ", "The stranger chuckles 'You won't be able to get out that easily.'" "Would you like to ask the stranger why you are here? ");
    fourth.addChoice("Yes");
    fourth.addChoice("No");

    NarrPoint fifth = NarrPoint("You have a choice to make.", "Will you choose to cooperate with the stranger or not? ");
    fifth.addChoice("Yes");
    fifth.addChoice("No");

    NarrPoint sixth = NarrPoint("You can now escape the cell", "Will you choose to escape or not? ");
    sixth.addChoice("Yes");
    sixth.addChoice("No");

	this->story.push_back(first);
	this->story.push_back(second);
	this->story.push_back(third);
	this->story.push_back(fourth);
	this->story.push_back(fifth);
	this->story.push_back(sixth);
}

void PrisonCell::setName(string nName)
{
    this->name = nName;
}

string PrisonCell::getName()
{
    return this->name;
}




void PrisonCell::runScenario()
{
    int plotIndex = 0;
    int userInp;

    while (plotIndex >= 0 && plotIndex < this->story.size()) {
        cout << story[plotIndex].getPlot() << endl;
        cout << story[plotIndex].getQuestion() << endl;

        for (int i = 0; i < story[plotIndex].getChoices().size(); i++) {
            cout << "[" << i << "]" << story[plotIndex].getChoices()[i] << endl;
        }
        cin >> userInp;
        system("cls");
        cout << "You chose: " << story[plotIndex].getChoices()[userInp] << endl;

        plotIndex += 1;
        cout << "=================================================== " << endl;
    }
}




//Recommended to me to move this code from the main .cpp to here.
    
    /*
    if (fourth.getChoices()[0] == "Yes") {
        cout << "I can tell you but first you must work with me... '" << endl;

    }
    else if (fourth.getChoices()[1] == "No") {
        string userInput;
        cout << "'Fine have it your way', you start to feel dizzy and nauseous all of a sudden, 'Now I will ask you again, do you want to know why we are here?' " << endl;
        cin >> userInput;
        if (userInput == "Yes") {
            cout << "I can tell you but first you must work with me' Will you cooperate ? " << endl;
        }
        else if (userInput == "No") {
            cout << "'Very well, it seems you would prefer to rot in this cell and to become rats food, suit yourself' The stranger walks away and you feel a sharp pain your chest, it's getting harder to breathe and everything starts to fade to black..." << endl;
            vector<NarrPoint> story = { first };
            //You go back to the start of the scene Prison Cell. " break;
        }


    }







    if (fifth.getChoices()[0] == "Yes") {
        cout << "'Fantastic.' He chuckles 'Here, take this key' You have gained a key, you can now open the cell door. " << endl;

    }
    else if (fifth.getChoices()[1] == "No") {
        cout << "'Very well, it seems you would prefer to rot in this cell and to become rats food, suit yourself' The stranger walks away and you feel a sharp pain your chest, it's getting harder to breathe and everything starts to fade to black..." << endl;
        vector<NarrPoint> story = { fourth };
        //Go back to last question
    }



    if (sixth.getChoices()[0] == "Yes") {
        cout << "You open the cell door and you leave the cell, free to explore the rest of the monastery and to find out why you are here." << endl;
        //Move on to the next scene which is the Courtyard.
    }
    else if (sixth.getChoices()[1] == "No") {
        cout << "You decide to wait in the cell, the stranger speaks up 'Well what are you waiting for?' Open the cell!'" << endl;
        vector<NarrPoint> story = { sixth };
        //You go back to the previous question 'will you choose to escape or not?'
    }
    


    struct Key {
        string name;
        string description;

    };
*/
    //Maybe the if statements above should be changed, need help with this. 

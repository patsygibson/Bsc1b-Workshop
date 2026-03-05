#include "PrisonCell.h"
#include "NarrPoint.h"

PrisonCell::PrisonCell()
{
    this->name = "Empty name";
    this->description = "Empty description";
}

PrisonCell::PrisonCell(string iName, string iDesc)
{
    this->name = iName;
    this->description = iDesc;
}

string PrisonCell::getName()
{
    return this->name;
}

string PrisonCell::getDescription()
{
    return this->description;
}

int main()
{
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

    if (fourth.getChoices()[0] == "Yes") {
        cout << "I can tell you but first you must work with me' Will you cooperate ? " << endl;


    }
    else if (fourth.getChoices()[1] == "No") {
        NarrPoint fifth = NarrPoint("You don't cooperate with them"  "'Fine have it your way', you start to feel dizzy and nauseous all of a sudden, 'Now I will ask you again, do you want to know why we are here?' ");
        fifth.addChoice("Yes");
        fifth.addChoice("No");
        if (fifth.getChoices()[0] == "Yes") {
            cout << "I can tell you but first you must work with me' Will you cooperate ? " << endl;
            //Just repeated code , How can I make it so it jumps back to the question instead of repeating the code?
        }
        else if (fifth.getChoices()[1] == "No") {
            cout << "'Very well, it seems you would prefer to rot in this cell and to become rats food, suit yourself' The stranger walks away and you feel a sharp pain your chest, it's getting harder to breathe and everything starts to fade to black..." << endl;
            //You go back to the start of the scene Prison Cell. 
        }





    }
    NarrPoint sixth = Narrpoint("You have a choice to make." "Will you choose to cooperate with the stranger or not? ");
    sixth.addChoice("Yes");
    sixth.addChoice("No");

    if (sixth.getChoices()[0] == "Yes") {
        cout << "'Fantastic.' He chuckles 'Here, take this key' You have gained a key, you can now open the cell door. " << endl;

    }
    else if (sixth.getChoices()[1] == "No") {
        cout << "'Very well, it seems you would prefer to rot in this cell and to become rats food, suit yourself' The stranger walks away and you feel a sharp pain your chest, it's getting harder to breathe and everything starts to fade to black..." << endl;
        //You go back to the start of the scene Prison Cell. 
    }

    NarrPoint seventh = Narrpoint("You can now escape the cell" "Will you choose to escape or not? ");
    seventh.addChoice("Yes");
    seventh.addChoice("No");

    if (seventh.getChoices()[0] == "Yes") {
        cout << "You open the cell door and you leave the cell, free to explore the rest of the monastery and to find out why you are here." << endl;
        //Move on to the next scene which is the Courtyard.
    }
    else if (seventh.getChoices()[1] == "No") {
        cout << "You decide to wait in the cell, the stranger speaks up 'Well what are you waiting for?' Open the cell!'" << endl;
        //You go back to the previous question 'will you choose to escape or not?'


    vector<NarrPoint> story = { first, second, third };

}

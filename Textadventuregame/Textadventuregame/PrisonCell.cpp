#include "PrisonCell.h"
#include "NarrPoint.h"

PrisonCell::PrisonCell(std::string iName) : Location()
{
    this->name = iName;


    NarrPoint first = NarrPoint("You wake up in a cold damp room. ", " You hear distant screams and the clanging of metal. You look around and you realise you are in a old prison cell. Suddenly you hear a voice echo from the shadows... 'Ah there you are...' the stranger says 'so you were brave enough to enter your name after all'. Your eyes try to adjust to the dimness of the cell and you try to make this figure. You don't recognise them but their voice sounds familiar somehow. They speak again 'I am guessing you would like to know where you are.' ");
    Choice firstChoice = Choice{"Yes", "'You're a little heazy but here take some water and bread, you will need the energy'.  You eat the bread and the water he offers to you and you feel a little more rejuvinated after your travel.", 1, 1};
    Choice secondChoice = Choice{ "No", "The stranger chuckles and says 'Of course you don't, still a little dazed from your travels back.", 0, 0};
    first.addChoice(firstChoice);
    first.addChoice(secondChoice);


    NarrPoint second = NarrPoint("'You are in a Catholic Benedictine Monastery prison cell, located in Podlazice, Bohemia to be exact.' ", "    Can you guess the year?");
    Choice thirdChoice = Choice{ "550BC","Catholicism wasn't around then... 'Your brain is still a little foggy I see and you can't remember stuff but don't worry I'm a patient man' He says as he slowly approaches the cell door'", 0, 0};
    Choice fourthChoice = Choice{ "1221", "You chose the right answer but you feel tired", -1, 1};
    second.addChoice(thirdChoice);
    second.addChoice(fourthChoice);

    NarrPoint third = NarrPoint("You look at the prison cell door, it is old and rusty.", "Would you like to attempt in opening it? ");
    Choice fifthChoice = Choice{ "Yes!", "You try to open the door but it won't budge, it's locked tight. The stranger chuckles 'You won't be able to get out that easily.' You don't have enough strength nor do you have key! But you do feel your strength slowly coming back.", 1, -1};
    Choice sixthChoice = Choice{ "Nah. why bother!","You simply stand there awkwardly and you wait for the stranger to speak again.", 0, 0};
    second.addChoice(fifthChoice);
    second.addChoice(sixthChoice);

    NarrPoint fourth = NarrPoint(" ", "Would you like to ask the stranger why you are here? ");
    Choice seventhChoice = Choice{ "Yes!", " ", 0 , 1  };
    Choice eighthChoice = Choice{ "No... he seems strange.", " ", 0, -1};
    fourth.addChoice(seventhChoice);
    fourth.addChoice(eighthChoice);

    NarrPoint fifth = NarrPoint(" 'I can tell you exactly everything but first you must work with me' He says.  You have a choice to make.", "Will you choose to cooperate with the stranger or not? ");
    Choice ninthChoice = Choice{ "Okay...", "You get given a key by the stranger. ", - 1 , 1};
    Choice tenthChoice = Choice{ "Hell no.", "'Why not?' I can give you this key", 1, -1};
    fifth.addChoice(ninthChoice);
    fifth.addChoice(tenthChoice);

    NarrPoint sixth = NarrPoint("You can now escape the cell", "Will you choose to escape or not? ");
    Choice eleventhChoice = Choice{ "Let's go."," ", 0, 0};
    Choice twelfthChoice = Choice{ "Um... I'll stay.", " You stay a little longer until eventually you can.", 0, 0};
    sixth.addChoice(eleventhChoice);
    sixth.addChoice(twelfthChoice);

	this->story.push_back(first);
	this->story.push_back(second);
	this->story.push_back(third);
	this->story.push_back(fourth);
	this->story.push_back(fifth);
	this->story.push_back(sixth);
}

void PrisonCell::setName(std::string nName)
{
    this->name = nName;
}

std::string PrisonCell::getName()
{
    return this->name;
}



void PrisonCell::runScenario()
{
    int plotIndex = 0;
    int userInp;
    bool hasKey = false;

    while (plotIndex >= 0 && plotIndex < this->story.size()) {
        std::cout << story[plotIndex].getPlot() << std::endl;
        std::cout << story[plotIndex].getQuestion() << std::endl;

        for (int i = 0; i < story[plotIndex].getChoices().size(); i++) {
            std::cout << "[" << i << "]" << story[plotIndex].getChoices()[i].text << std::endl;
        }
        std::cin >> userInp;

       

        system("cls");
        std::cout << "You chose: " << story[plotIndex].getChoices()[userInp].text << std::endl;
        std::cout << story[plotIndex].getChoices()[userInp].outcome << std::endl;

        std::cout << story[plotIndex].getChoices()[userInp].healthEffect << " health" << std::endl;
        std::cout << story[plotIndex].getChoices()[userInp].skillEffect << " skill" << std::endl;
 
        if (plotIndex == 4 && Choice = ninthChoice);
        {
            bool hasKey = true;
        }

        if (plotIndex = 4 && Choice = tenthChoice); 
        {
            bool hasKey = false;
            plotIndex - 1;

        }

        plotIndex += 1;
        std::cout << "=================================================== " << std::endl;
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

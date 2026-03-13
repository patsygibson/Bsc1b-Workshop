#include "Courtyard.h"
#include "NarrPoint.h"

Courtyard::Courtyard(string iName) : Location()
{
	this->name = iName;                         
   NarrPoint seventh = NarrPoint("You both walk outside into the courtyard...", "All of a sudden a guard is stood in front of you, 'Stab him!' the stranger orders you, 'Do it now...', Will you obey the stranger's orders?");
   seventh.addChoice("Yes");
   seventh.addChoice("No");

   NarrPoint eighth = NarrPoint("The guard is stabbed and he falls to the ground.", "The stranger looks at you and says 'My name is something you may not be able to pronounce but you can call me Ludovic.");
   eighth.addChoice("Cool name");
   eighth.addChoice("What's your real name?");

   NarrPoint ninth = NarrPoint("Ludovic laughs and says 'You are still quite the character aren't you?'", "You both look around the courtyard and Ludovic says 'Come now, we need to get moving.' Will you follow Ludovic?");
   ninth.addChoice("Yes");
   ninth.addChoice("No");

   NarrPoint tenth = NarrPoint("You follow Ludovic but something feels off in the air.", "You don't understand why he said 'You are still quite the character aren't you?', It's as though he knows you but you don't konw him. What do you say?");
   tenth.addChoice("What did you mean by 'still quite the chracter'?");
   tenth.addChoice("[Say nothing]");

   NarrPoint eleventh = NarrPoint("He leads you back through the monastery and you are confused as to why he is taking you back inside", "What do you say?");
   eleventh.addChoice("Where are we going?");
   eleventh.addChoice("[Say nothing]");

   NarrPoint twelfth = NarrPoint("You enter another prison cell but this one has a very large book in it. Ludovic says 'If you touch this book, it will take you back to your home back in 2026'", "Will you enter the cell and touch the book?");
   twelfth.addChoice("Yes");
   twelfth.addChoice("No");
}

void Courtyard::setName(string nName)
{
	this->name = nName;
}

string Courtyard::getName()
{
	return this->name;
}


void Courtyard::runScenario()
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

#include "Courtyard.h"
#include "NarrPoint.h"
//#include "Weapon.h"

Courtyard::Courtyard(std::string iName) : Location()
{
	this->name = iName;       
	//Narrative points and choices for the courtyard location   
    NarrPoint first = NarrPoint("You both walk outside into the courtyard...", "All of sudden a guard is stood in front of you! 'Stab him!' the stranger orders you, 'Do it now!', will you obey the stranger's orders?");
    Choice firstChoice = Choice{ "Yes", "You succesfully stab the guard 'My, my, I'm impressed... Hermann' he smirks... But your name is not Hermanm...", 0, 1 };
    Choice secondChoice = Choice{ "No", "'You idiot!' the stranger casts some sort of strange spell on the guard which makes him freeze and vanish into thin air. This shocks you as you begin to realise this stranger is not just an ordinary person... but something entirely different... not human. ", 1, 0 };
    first.addChoice(firstChoice);
    first.addChoice(secondChoice);

    NarrPoint second = NarrPoint("Something feels eery as though everything was stopped in time and the stranger says 'I thought I got all of them before you arrived but I guess that was a test of your strength'", "He looks at you 'My name is something you may not be able to pronounce but you can call me Ludovic.");
    Choice thirdChoice = Choice{ "What's your real name?", "'Curious are we?' He pauses 'You don't need to know though'. The hair on the back of your neck start to rise.", 2, 0 };
    Choice fourthChoice = Choice{ "Cool name", "'Still quite the character that used to be' You wonder what he means by that... It's as though he knows you but you don't know what he is.", 1, 1 };
    second.addChoice(thirdChoice);
    second.addChoice(fourthChoice);

    NarrPoint third = NarrPoint("You wonder what he meant by his name is something you won't be able pronunce. Perhaps he's foreign?", "Do you decide to ask him?");
    Choice fifthChoice = Choice{ "Yes", "'You have been here before... We have met before... Hermann.' He walks as though he has practiced this 'Let me tell you story...'", 0, 1 };
    Choice sixthChoice = Choice{ "No", "You say nothing and you continue on your journey with this strange individual who will hopefully tell you that this is all but a lucid dream.", 1, 0 };
    third.addChoice(fifthChoice);
    third.addChoice(sixthChoice);

    NarrPoint fourth = NarrPoint("'Once upon a time there was a priest who broke his monastic vows... In order to be set free he agreed to write a great book which glorified the monastery in a single night...' He leads you back through the monastery. You are confused as to why he is taking you back inside", "Do you interrupt and ask him why?");
    Choice seventhChoice = Choice{ "Yes", "You suddenly feel a sharp pain hit your chest and you fall back 'Please don't interrupt me when I'm speaking of your past' He says so nonchalently", -1, -1 };
    Choice eighthChoice = Choice{ "No", "'However it were to be impossible for a single individual such as yourself to write a large book in one night... so you came to me!", 0, 0 };
    fourth.addChoice(seventhChoice);
    fourth.addChoice(eighthChoice);

    NarrPoint fifth = NarrPoint("The place where he is leading you seems all so familiar to you... 'But you escaped the deal and managed to hop to the next life, but I found you again...' He looks at you 'I have been looking for you for a long time...'", "You are still confused and you are hoping this is all but a dream... ");
    Choice ninthChoice = Choice{ "What deal?", "    ", 0, 1 };
    Choice tenthChoice = Choice{ "What do you want?", "    ", 1, 0 };
    Choice eleventhChoice = Choice{ "Is this a dream?", "THIS IS NOT A DREAM!", 0, -2 };
	fifth.addChoice(ninthChoice);
	fifth.addChoice(tenthChoice);
    fifth.addChoice(eleventhChoice);
   
	//Adding the narrative points to the story vector
	this->story.push_back(first);
	this->story.push_back(second);
	this->story.push_back(third);
	this->story.push_back(fourth);
	this->story.push_back(fifth);

}

void Courtyard::setName(std::string nName)
{
	this->name = nName;
}

std::string Courtyard::getName()
{
	return this->name;
}


void Courtyard::runScenario(int& userHealth, int& userSkill)
{
    int plotIndex = 0;
    int userInp;
	//Weapon weapon = Weapon("Old Rusty Sword", "An ancient sword which looks as it dates back to old Sumerian times.",);

    //ascii art
    std::cout << "                                                                                                                                                            " << std::endl;
    std::cout << "                                                                        @                                                                                   " << std::endl;
    std::cout << "                                                                      @@@@@                                                                                 " << std::endl;
    std::cout << "                                                                        @                                                                                   " << std::endl;
    std::cout << "                                                                   @@@@@@@@@@@-                                                                             " << std::endl;
	std::cout << "                                                                @@@            @@                                                                           " << std::endl;
	std::cout << "                                                              @@                 @@                                                                         " << std::endl;
	std::cout << "                                                            @@                     @@                                                                       " << std::endl;
	std::cout << "                                                            @@       @@@%@@@@       @                                                                       " << std::endl;
	std::cout << "                                                          @@  @@@@@@@   @%   @@@  @@@@@@                                                                    " << std::endl;
	std::cout << "                                                         @  @@-      @@    @@@         @@                                                                   " << std::endl;
    std::cout << "                                                      @@@@@=   @@@@@@         @@@@@@@@@@ @@+                                                                " << std::endl;
    std::cout << "                                                      @@@@              @@              @+@@                                                                " << std::endl;
    std::cout << "                                                         @  @@@@-     @@  @@       @@@@  @                                                                  " << std::endl;
	std::cout << "                                                         @  @   @     @    @      @@  @  @                                                                  " << std::endl;
    std::cout << "                                                         @  @   @     @    @      @@  @  @                                                                  " << std::endl;
	std::cout << "                                                       @  @   @  @@@@@@@ % @@@@@  @@  @  @                                                                  " << std::endl;
	std::cout << "                                                         @  @ = @@#  #@@@@@@@@   @@@  @  @                                                                  " << std::endl;
	std::cout << "                                                     @@@@@@@@@   @@           @@@  @@@@@@@@@@                                                               " << std::endl;
	std::cout << "                                                     @     @  @@   @@@@@@@@@@@   @@  @@    @@                                                               " << std::endl;
	std::cout << "                                           @@@@@@@@@@@@@@@@ @@  @@@     @     @@@  @@ @@@@@@@@@@@@@@@                                                       " << std::endl;
	std::cout << "                                          @@            @@ @@ @@       @@@       @# @@  @            @                                                      " << std::endl;
	std::cout << "                                         @@            :@ @@ @@       @   @       @@ @@ @@            @                                                     " << std::endl;
	std::cout << "                                        @             @ * @ @@         @@@         @@ @  @            @@                                                    " << std::endl;
	std::cout << "                                       @         @@@@@@@@@@@                        @@@@@@@@@@          @@                                                  " << std::endl;
	std::cout << "                                      @          @         @                        @        @           @@                                                 " << std::endl;
	std::cout << "                                    @@@@@@@@@@@@@@         @    @@@@@@@@@@@@@@@@    @        @@@@@@@@@@@@@                                                  " << std::endl;
	std::cout << "                                      @         @@ @@@     @    @             @@    @   @@@  @           @                                                  " << std::endl;
	std::cout << "                                      @ - @@    @@         @    @             @@    @        @         @@@                                                  " << std::endl;
	std::cout << "                                      @         @@         @    @             @@    @        @           @                                                  " << std::endl;
	std::cout << "                                      @#        @@    @@   @    @             @@    @ @@@    @           @                                                  " << std::endl;
	std::cout << "                                      @#    @@@ @@         @    @             @@    @        @ @@@       @                                                  " << std::endl;
	std::cout << "                                      @#        @@         @    @             @@    @        @           @                                                  " << std::endl;
	std::cout << "                                      @#        @@ @@@     @    @             @@    @    @@@ @           @                                                  " << std::endl;
	std::cout << "                                      @         @@         @    @             @@    @        @           @                                                  " << std::endl;
	std::cout << "                                      @ = @@@   @@         @    @             @@    @        @           @                                                  " << std::endl;
	std::cout << "                                      @         @@         @    @             @@    @        @           @                                                  " << std::endl;
	std::cout << "                                      @#        @@    @@   @    @             @@    @ @@@    @           @                                                  " << std::endl;
	std::cout << "                                      @@        @@         @    @             @@    @        @           @                                                  " << std::endl;
	std::cout << "                                        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                                    " << std::endl;
    std::cout <<  "                                                                                                                                                            " << std::endl;
  

	//Main loop for the courtyard scenario
    while (plotIndex >= 0 && plotIndex < this->story.size()) {
        std::cout << story[plotIndex].getPlot() << std::endl;
        std::cout << story[plotIndex].getQuestion() << std::endl;

        for (int i = 0; i < story[plotIndex].getChoices().size(); i++) {
			std::cout << "[" << i << "]" << story[plotIndex].getChoices()[i].text << std::endl;  //Display the choices for the current narrative point
        }
        
        std::cout << "Enter your choice: " << std::endl;
        userInp = safeInput(0, story[plotIndex].getChoices().size() - 1);
  
		std::cout << "You chose: " << story[plotIndex].getChoices()[userInp].text << std::endl;  //Display the choice the user made

        std::cout << story[plotIndex].getChoices()[userInp].healthEffect << " health" << std::endl;
        std::cout << story[plotIndex].getChoices()[userInp].skillEffect << " skill" << std::endl;
        userHealth += story[plotIndex].getChoices()[userInp].healthEffect; 
        userSkill += story[plotIndex].getChoices()[userInp].skillEffect;
        
        
     //When you gain the sword you gain 2 skills 
        if (plotIndex == 0)
        {
            std::cout << "You have gained the sword! +2 skill" << std::endl;
            userSkill += 2;
			//std::cout << Weapon.getName() << ": " << Weapon.getDescription() << std::endl;
		}
        plotIndex += 1;
        std::cout << "=================================================== " << std::endl;
    }
}

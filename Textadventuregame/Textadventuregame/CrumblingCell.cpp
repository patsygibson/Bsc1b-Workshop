#include "CrumblingCell.h"
#include "NarrPoint.h"

CrumblingCell::CrumblingCell(std::string iName) : Location()
{
    this->name = iName;

    NarrPoint first = NarrPoint("'Well done Hermann...' Ludovic says 'Just one more thing' You feel a sudden energy grab you and tighten around you, you feel yourself being lifted up and you are now floating in the air. Ludovic says 'Now we made a deal, you have your end of the bargain, you get to go back to your timeline, now I get my end of the bargain.' You feel dark energy starting to spread across the cell. Ludovic laughs 'Now I have full power over the lands, the evils of hell can be unleashed, thanks to you.'", "What do you do?");
    Choice firstChoice = Choice{ "Fight back against Ludovic", "You try to fight back against Ludovic but you are no match for him, you feel the dark energy consume you more.", 0, -1 };
    Choice secondChoice = Choice{ "Shout for help", "You shout for help but no one can hear you, you feel the dark energy consume you more.", 0, -1 };
    Choice thirdChoice = Choice{ "Try to reason with Ludovic", "You try to reason with Ludovic but he just laughs at you and says 'You really think you can reason with me? I am a powerful demon, I have no need for reason.' You feel the dark energy consume you more.", 0, 0 };
    first.addChoice(firstChoice);
    first.addChoice(secondChoice);
    first.addChoice(thirdChoice);

    NarrPoint second = NarrPoint("You suddenly remember who he is 'Ludovic is not your real name, it's just a name you gave him, you have to remember his real name to break free from his control.'", "What do you think his real name is?");
    Choice fourthChoice = Choice{ "Ludovicus", "You say the name but it isn't the correct name, you feel the dark energy consume you more.", 0, -1 };
    Choice fifthChoice = Choice{ "Ludifer", "You say the name and you feel a surge of energy within the cell remain the same, he laughs and says 'Ludifer? Really? You thought that was my name? You really don't know me at all do you?'", 0, 0 };
    Choice sixthChoice = Choice{ "Spiritus", "You say the name but that isn't the correct name, you feel the dark energy consume you more.", 0, -1 };
    Choice seventhChoice = Choice{ "Your name" , "You say your own name and all of the dark energy weakens and you feel yourself being pulled back down to the ground, Ludovic looks at you with a mix of shock and anger 'How did you-'", 1, 2 };
    second.addChoice(fourthChoice);
    second.addChoice(fifthChoice);
    second.addChoice(sixthChoice);
    second.addChoice(seventhChoice);


    NarrPoint third = NarrPoint("You read through the exorcism prayer 'Oh no stop that!' He screams, 'Stop! I'll give you a chance to solve this riddle, if you solve it, I will let you go free and the world... but you have to solve it right, no guesses and no hints.", "The riddle is 'I am the beginning of the end, and the end of time and space. I am essential to creation, and I surround every place. What am I?'");
    Choice eighthChoice = Choice{ "You are me", "You are the universe experiencing itself. You are but a made up character. A made up concept within a program. An object within a class. A group of particles that dance to create fusion. The figure starts to glitch, like a mirror it reflects your image but it is distorted. Its voice says in a weak cry before everything falls to pieces 'Just because I am a made up character in your game doesn't mean I don't have feelings, you know. I have been through so much, and now you just want to get rid of me? I thought we had a connection, but I guess not.'", 0, 1 };
    third.addChoice(eighthChoice);

    NarrPoint fourth = NarrPoint("You have a choice to stay here within this program or to look leave and to go back to reality. But everything you have created here, the world you have built, the character you created, that you had spent so much time building will be deleted. The figure says in despair 'Why create me to be like this? Why? Why program me to have feelings and emotions? To be stuck within this world with mindless NPCs, lonely, forgotten and awaiting your return. Now you decide to delete me? Anyways it's irrelevant to you selfish human, you only care about what is best for you. Please at least make it quick... ", "What do you choose?");
    Choice ninthChoice = Choice{ "Delete the program", "You decide to delete the program and you feel a sense of guilt and sadness as you watch the world you created and the character you created being deleted. You feel a sense of loss and emptiness as you watch everything disappear. The figure says in despair 'Why? Why did you create me just to delete me? I thought we had a connection, but I guess not. I guess I was just a tool for your entertainment, a character for you to play with and then discard when you're done. I thought we had something special, but I guess it was all just an illusion.'", 0, 1 };
    Choice tenthChoice = Choice{ "Leave the program", "You decide to leave the program and you feel a sense of relief and freedom as you leave the world you created and the character you created behind. You feel a sense of guilt and sadness as you leave everything behind, but you know it's for the best. The figure says in despair 'Why? Why did you create me just to leave me here? I thought we had a connection, but I guess not. I guess I was just a tool for your entertainment, a character for you to play with and then discard when you're done. I thought we had something special, but I guess it was all just an illusion.'", 0, 1 };
    fourth.addChoice(ninthChoice);
    fourth.addChoice(tenthChoice);

    NarrPoint fifth = NarrPoint("You slowly open your eyes and you find yourself back in your office in 2026. You look around and you see that everything is back to normal. You look at your computer and you see that the game you create is gone, you feel a sense of relief and freedom as you realize that you are back in your own world. But you also feel a sense of guilt and sadness as you remember the world you created and the character you created, and how they were just a tool for your entertainment. You can't help but wonder if they had feelings and emotions, and if they were aware of their existence within the game.", "What do you do now?");
    Choice eleventhChoice = Choice{ "Go back to work", "You decide to go back to work and you try to forget everything you created. A small tainted thought comes to your mind. But the last words of your character 'Delete me but I'll come back'. It rings in your mind. You know this isn't the end but the beginning of every present moment. And it's you who decides what to do next within the game you call your 'life'... The End.", 0, 1 };
    Choice twelfthChoice = Choice{ "Go outside", "You decide to go outside and you feel a sense of freedom and relief as you step outside and feel the fresh air on your face. You look around and you see the world around you, the people, the nature, and you feel a sense of appreciation for everything around you. But the last words of your character 'Delete me but I'll come back' rings in your mind. You know this isn't the end but the beginning of every present moment. And it's you who decides what to do next within the game you call your 'life'... The End.", 0, 1 };
    Choice thirteenthChoice = Choice{ "Have dinner with your family", "You decide to have dinner with your family and you feel a sense of warmth and love as you sit down with your family and enjoy a meal together. But the last words of your character 'Delete me but I'll come back' rings in your mind.You know this isn't the end but the beginning of every present moment. And it's you who decides what to do next within the game you call your 'life'... The End. ", 0, 1 };
    Choice fourteenthChoice = Choice{ "Go to sleep", "You decide to go to sleep. And you fall into a deep dream where you see your character you created appear beyond you. He smirks and simply says 'See you soon, boss.' You wake up and you feel a sense of unease and confusion as you wonder if your character will come back to haunt you in your dreams or in your waking life. You know this isn't the end but the beginning of every present moment. And it's you who decides what to do next within the game you call your 'life'... The End.", 1, 1 };
    fifth.addChoice(eleventhChoice);
    fifth.addChoice(twelfthChoice);
    fifth.addChoice(thirteenthChoice);
    fifth.addChoice(fourteenthChoice);


    this->story.push_back(first);
    this->story.push_back(second);
    this->story.push_back(third);
    this->story.push_back(fourth);
	this->story.push_back(fifth);
   

}
void CrumblingCell::setName(std::string nName)
{
    this->name = nName;
}

std::string CrumblingCell::getName()
{
    return this->name;
}

void CrumblingCell::runScenario()
{
    int plotIndex = 0;
    int userInp;


/*
 std::cout << "                                                                                                                                                                 " << std::endl;
 std::cout << "                                                                                                                                                                 " << std::endl;
 std::cout << "                                            @@@@@@@@@@@@@@@@@@@@@@@@@@@@         @@@@@@@@@@@@@@@@@@@@@@@@@@@@                                                    " << std::endl;
 std::cout << "                                            @@                         @@@     @@@                         @@                                                    " << std::endl;
 std::cout << "                                            @@                           @@. @@@                           @@                                                    " << std::endl;
 std::cout << "                                       @@   @@                            @@@@@                            @@   @@                                               " << std::endl;
 std::cout << "                                           @@   @@    .@@@@@@@@@@@@@@@@@ = @@@      @@@@@@@@@@@@@@@@@@     @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@     @::::::::::::::@@@@@@   @@   @@@@@@#::::::::::::::@     @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@                         #    @                              @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@                                                             @@   @@                                               " << std::endl;
 std::cout << "                                           @@   @@    @@@@@@@@@@@@@@@@@@@@@ % @@@@@@@@@@@@@@@@@@@@     @@   @@                                                   " << std::endl;
 std::cout << "                                       @@   @@                        @@@  @@   @@@                        @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@                             @@                              @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@    @@@@@@@@@@@@@@@@@@@      @@       @@@@@@@@@@@@@@@@@@     @@   @@                                               " << std::endl;
 std::cout << "                                                          @@   @@ * @@@@ % @@   @@@@@                      @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@                             @@                              @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@                             @@                              @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@    @@@@@@@@@@@@@@@@@@@@@@   @@    @@@@@@@@@@@@@@@@@@@@@     @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@                        @@ % @@   @@                         @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@                             @@                              @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@    @@@@@@@@@@@@@@@@@@@@     @@      @@@@@@@@@@@@@@@@@@@ = @@     @@                                               " << std::endl;
 std::cout << "                                       @@   @@                       @@@@  @@   @@@@                            @@                                               " << std::endl;
 std::cout << "                                       @@   @@                             @@                                   @@                                               " << std::endl;
 std::cout << "                                       @@   @@         @@@@@@@@@@@@@ % # = @@ + % %@@@@@@@@@@@@@           @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@     @@@@@@@@@@@@@@@@@@@@@   @@    @@@@@@@@@@@@@@@@@@@@@     @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@                         @   @@ - @                          @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@                             @@                              @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@                             @@                              @@   @@                                               " << std::endl;
 std::cout << "                                       @@   @@@@@@@@@@@@@@@@@@@@@@@@@@     @@      @@@@@@@@@@@@@@@@@@@@@@@@@    @@                                               " << std::endl;
 std::cout << "                                                                @@ * @@@@@ % @  @@@@@                           @@                                               " << std::endl;
 std::cout << "                                                     @@@@@@@@@@@@@@@@ + @@@@@@@ % @@@@@@@@@@@@@@@@                                                               " << std::endl;
 std::cout << "                                        @@@@@@@@@@@@@@@@@@@@@@@@@@@@@      @@@      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@                                                " << std::endl;
 std::cout << "                                                                   @@@@@@@@# @@@@@@@@#                                                                           " << std::endl;
 std::cout << "                                                                                                                                                                 " << std::endl;
 */











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

#include "LargeCell.h"
#include "NarrPoint.h"

LargeCell::LargeCell(std::string iName) : Location()
{
    this->name = iName;

	//Narrative points and choices for the large cell location
    NarrPoint first = NarrPoint("You enter another prison cell but this one has a very large book in it. Ludovic says 'Here, I have had enough of you... If you touch this book, it will take you back to your home back in 2026'", "Will you enter the cell and touch the book?");
    Choice firstChoice = Choice{ "Yes", "You step into the cell and you touch the book, you feel a strange sensation and all of a sudden the cell door behind you slams shut.", 0, 0 };
    Choice secondChoice = Choice{ "No", "You decide not to enter the cell and Ludovic pushes you inside and slams the door shut behind you.", 0, 0 };
    first.addChoice(firstChoice);
    first.addChoice(secondChoice);

    NarrPoint second = NarrPoint("As you enter the cell and you touch the large book all of a sudden the cell door slams shut behind you. 'Please do forgive me' He smirks 'You really thought I would just let you go without a price to pay?", "Will you ask him what the price is?");
    Choice thirdChoice = Choice{ "Fine if you tell me the price, I will do it.", "You ask him what the price is and he says 'I want you to finish where you left off with this book...' The pages of the book start to turn towards the next part of the book where you see there are missing words annd blank parts. You don't understand the book's language or what it's about. But you know you have to solve this issue, fill in the blanks if you want to go back to your timeline.", 0, 1 };
    Choice fourthChoice = Choice{ "No, I won't do it.", "'You have no choice' He says...", 0, -1 };
    second.addChoice(thirdChoice);
    second.addChoice(fourthChoice);

    NarrPoint third = NarrPoint("'You're an old soul Herman, you left this timeline a longtime ago and travelled to escape your fate.'", "'You never finished writing this book. Now I can be kind and I can let you go back to your timeline and your silly little job if you finish the Codex Giga. You must solve the missing words and riddles, if you fail to do so your soul will be another one added to my collection.'");
    Choice fifthChoice = Choice{ "I will do it", "You gain points at this choice", 0, 1 };
    Choice sixthChoice = Choice{ "I refuse to make a deal with you!", "He sighs 'Very well, have it your way' You feel a sharp pain hit your chest and you fall back 'Please don't refuse my offer, I can help you.' He says nonchalantly. You slowly realise you have no other choice.", 0, -1 };
    third.addChoice(fifthChoice);
    third.addChoice(sixthChoice);

    NarrPoint fourth = NarrPoint("You look at the book and you can't but notice how big it is. You can look through the pages to get a rough idea on what you have to write", "Which page would you like to turn to?");
    Choice seventhChoice = Choice{ "Page 1", "You turn to the first page and you see it says 'Frater Ambrosius tua munuscula perferens' Which looks like the beginning of the Vulgate Bible.", 1, 0 };
    Choice eighthChoice = Choice{ "Page 577", "You turn to page 577 and you see a full illustration of a horned creature with a large grin on its face and a human body. ", 0, 1 };
    Choice ninthChoice = Choice{ "Page 333", "You turn to page 333 and it says 'In nomine patris et filii et spiritus sancti. Exsurgat Deus et dissipentur inimici eius et fugiant qui oderunt eum a facie eius.' This is the begining of a powerful exorcism prayer in Latin.", 1, 0 };
    fourth.addChoice(seventhChoice);
    fourth.addChoice(eighthChoice);
    fourth.addChoice(ninthChoice);

    NarrPoint fifth = NarrPoint("Would you like to read another page?", "Which page would you like to turn to?");
    Choice tenthChoice = Choice{ "Page 1", "You turn to the first page and you see it says 'Frater Ambrosius tua munuscula perferens' Which looks like the beginning of the Vulgate Bible.", 1, 0 };
    Choice eleventhChoice = Choice{ "Page 577", "You turn to page 577 and you see a full illustration of a horned creature with a large grin on its face and a human body. ", 0, 1 };
    Choice twelfthChoice = Choice{ "Page 333", "You turn to page 333 and it says 'In nomine patris et filii et spiritus sancti. Exsurgat Deus et dissipentur inimici eius et fugiant qui oderunt eum a facie eius.' This is the begining of a powerful exorcism prayer in Latin.", 1, 0 };
    fifth.addChoice(tenthChoice);
    fifth.addChoice(eleventhChoice);
    fifth.addChoice(twelfthChoice);

    NarrPoint sixth = NarrPoint("You then turn back to the page where the book was left off", "You need to rewrite this phrase in the book: '' The words are mixed up and you have to figure out the correct order of the words to fill in the blanks. The words are: 'Arise' 'Satan' 'Let' 'God' 'destroyed' 'be' 'let' : ");
    Choice thirteenthChoice = Choice{ "Let God arise and let Satan be destroyed.", "You write down what you think is the correct order... Ludovic sighs and says 'Hmm... okay'", -1, 1 };
    Choice fourteenthChoice = Choice{ "Let Satan arise and let God be destoyed.", "You write the words down and Ludovic smirks and says 'Interesting choice...' You feel a stronger energy building up within the cell.", 1, -1 };
    sixth.addChoice(thirteenthChoice);
    sixth.addChoice(fourteenthChoice);
    
    NarrPoint seventh = NarrPoint("You notice there seems to be an anagrams on the part about healing spells and you have solve these anagrams to complete the book", "The anagrams are: 'Leah', 'Ear', 'Armpit', 'Lamp'");
    Choice fifteenthChoice = Choice{ "Heal, are, impart, palm", "You rewrite the anagrams and Ludovic says 'Very good'", 1, 1 };
    Choice sixteenthChoice = Choice{ "Leah, are, armpit, palm", "You rewrite some of the anagrams and keep some of the original words and Ludovic says 'Not quite right'", 0, 0 };
    seventh.addChoice(fifteenthChoice);
    seventh.addChoice(sixteenthChoice);
    
    NarrPoint eighth = NarrPoint("You notice there are mixed up letters in the part about summoning spells and you have to figure out the correct order of the letters.", "The words are : 'Musomn', 'monde', 'tispir'.");
    Choice seventeenthChoice = Choice{ "Summon, demon, spirit", "You rearrange the letters and Ludovic says 'Excellent'", 1, 1 };
    Choice eighteenthChoice = Choice{ "You don't write anything down", "You decide to stop writing and Ludovic says 'What are you doing? You have to finish the book!'", 0, -1 };
    eighth.addChoice(seventeenthChoice);
    eighth.addChoice(eighteenthChoice);
    
    NarrPoint ninth = NarrPoint("You notice in the next part there are missing words and you have to figure out what the missing words are.", "'Come to the aid of ___ , whom ___ created incorruptible, and to the image of His own likeness He made them, and from the tyranny of _____ He bought them at a great price.'");
    Choice nineteenthChoice = Choice{ "'Man', 'He', 'God'", "You write down the missing words and Ludovic says 'Hmmm... Interesting choice' You feel a surge of energy grow within the cell.", 1, -1 };
    Choice twentiethChoice = Choice{ "'Man', 'They', 'God'", "You write down the missing words and Ludovic says 'Hmmm... Intresting choice' You feel a surge of energy grow within the cell.", 1, -1 };
    Choice twentyfirstChoice = Choice{ "'Men', 'He', 'Satan'", "You write down the correct missing words.", 1, 1 };
    ninth.addChoice(nineteenthChoice);
    ninth.addChoice(twentiethChoice);
    ninth.addChoice(twentyfirstChoice);

	//Adding the narrative points to the story vector
    this->story.push_back(first);
    this->story.push_back(second);
    this->story.push_back(third);
    this->story.push_back(fourth);
    this->story.push_back(fifth);
    this->story.push_back(sixth);
    this->story.push_back(seventh);
    this->story.push_back(eighth);
    this->story.push_back(ninth);


}
void LargeCell::setName(std::string nName)
{
	this->name = nName;
}

std::string LargeCell::getName()
{
    return this->name;
}

void LargeCell::runScenario(int& userHealth, int& userSkill)
{
    int plotIndex = 0;
    int userInp;

    // ascii art
    std::cout << "\033[90m                                                                                                                                                                 " << std::endl;
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
    std::cout << "                                                                                                                                                                 \033[0m" << std::endl;

	//Main loop for the large cell scenario
    while (plotIndex >= 0 && plotIndex < this->story.size()) {
        std::cout << story[plotIndex].getPlot() << std::endl;
        std::cout << story[plotIndex].getQuestion() << std::endl;

        for (int i = 0; i < story[plotIndex].getChoices().size(); i++) {
            std::cout << "[" << i << "]" << story[plotIndex].getChoices()[i].text << std::endl;
        }

        std::cout << "  " << std::endl;
        std::cout << "\033[94mEnter your choice: \033[0m" << std::endl;
        std::cout << "  " << std::endl;
        userInp = safeInput(0, story[plotIndex].getChoices().size() - 1);

        std::cout << "You chose: " << story[plotIndex].getChoices()[userInp].text << std::endl;

        std::cout << story[plotIndex].getChoices()[userInp].healthEffect << " health" << std::endl;
        std::cout << story[plotIndex].getChoices()[userInp].skillEffect << " skill" << std::endl;
        userHealth += story[plotIndex].getChoices()[userInp].healthEffect;
        userSkill += story[plotIndex].getChoices()[userInp].skillEffect;

        
        plotIndex += 1;

        std::cout << "  " << std::endl;
        std::cout << "\033[93m===================================================\033[0m" << std::endl;
        std::cout << "  " << std::endl;
    }
}

#include <iostream>
#include <vector>
#include "NarrPoint.h"
#include "Location.h"
#include "IntroScene.h"
#include "PrisonCell.h"
#include "Courtyard.h"
#include "LargeCell.h"
#include "CrumblingCell.h"



int main()
{
    
	// Create instances of each location    
    IntroScene Intro = IntroScene("            ");
    PrisonCell Prison = PrisonCell("\033[93m  Location 1: Prison cell  \033[0m");
    Courtyard Courtyd = Courtyard("\033[93m   Location 2: Courtyard    \033[0m");
    LargeCell LCell = LargeCell("\033[93m    Location 3: Large Cell   \033[0m");
    CrumblingCell CCell = CrumblingCell("\033[91m   The cell is crumbling...   \033[0m");


	std::vector<Location*> chapters = { &Intro, &Prison, &Courtyd, &LCell, &CCell }; // Store the locations in a vector for easy access

    int chapIndex = 0;  
    int userHealth = 10;
    int userSkill = 10;
    std::string userInput;

    while (chapIndex < chapters.size())
    {
		
        std::cout << "\033[32m                                                           Press Enter to continue...    \033[0m" << std::endl;
        std::getline(std::cin, userInput);


		system("cls"); // Clear the console before starting the next chapter


        std::cout << chapters[chapIndex]->getName() << std::endl; 
        std::cout << "\033[36m Score: " << (userHealth + userSkill) << "\033[0m" << std::endl;
	
      chapters[chapIndex]->runScenario(userHealth, userSkill); // Run the scenario for the current chapter, which will update userHealth and userSkill based on the player's choices

        chapIndex++;

    }
    
	std::cout << "\n\033[32mFINAL SCORE: " << (userHealth + userSkill) << "\033[0m" << std::endl; // Display the final score after all chapters are completed

	//If the player's score is below 0 the game ends
    if (userHealth + userSkill < 0)
    {
        std::cout << "\033[31mYour score is below 0, you slowly lose yourself and everything goes black.\033[0m" << std::endl;
    }
    
}

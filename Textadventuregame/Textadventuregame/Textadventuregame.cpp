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
    CrumblingCell CCell = CrumblingCell("\033[93m   The cell is crumbling...   \033[0m");

	std::vector<Location*> chapters = { &Intro, &Prison, &Courtyd, &LCell, &CCell }; // Store the locations in a vector for easy access

    int chapIndex = 0;  
    int userHealth = 10;
    int userSkill = 10;

    while (chapIndex < chapters.size())
    {
        std::cout << chapters[chapIndex]->getName() << std::endl;

        chapters[chapIndex]->runScenario(userHealth, userSkill);

        std::cout << "\033[36m Score: " << (userHealth + userSkill) << std::endl;

        std::cout << "Press Enter to continue... \033[0m" << std::endl;
        std::string temp;
        std::getline(std::cin, temp);

        chapIndex++;
    }

    std::cout << "\nFINAL SCORE: " << (userHealth + userSkill) << std::endl;

}
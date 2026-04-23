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


    IntroScene Intro = IntroScene("            ");
    PrisonCell Prison = PrisonCell("Prison Cell");
    Courtyard Courtyd = Courtyard("Courtyard");
    LargeCell LCell = LargeCell("Large Cell");
    CrumblingCell CCell = CrumblingCell("Crumbling Cell");

    std::vector<Location*> chapters = { &Intro, &Prison, &Courtyd, &LCell, &CCell };

  
    int chapIndex = 0;


    while (chapIndex < chapters.size()) {
        std::cout << "         " << chapters[chapIndex]->getName() << std::endl;

 
        chapters[chapIndex]->runScenario();


        chapIndex += 1;
        if (chapIndex == chapters.size()) {
            std::cout << "Congratulations, you have completed the game!" << std::endl;
            break;
        }


    }

}

#include <iostream>
#include <vector>
#include "NarrPoint.h"
#include "Location.h"
#include "IntroScene.h"
#include "PrisonCell.h"
#include "Courtyard.h"
#include "LargeCell.h"
#include "CrumblingCell.h"


/*void gameinstruct() {
 

    cout << "                                                                                         + #########" << endl;
    cout << "   ..                                                                                     +#########" << endl;
    cout << " :*#**+=.                   :@@%###*************@@.                                       +#########" << endl;
    cout << "-*******+-.                 :@+                 %@.                             .*:..    .=*********" << endl;
    cout << "=********+-.                :@+                 %@.                           ..:**:.   ..=*********" << endl;
    cout << ".********+-.                :@+                 %@.  =@@@@@@@@@@*               .*+:.   ..=*********" << endl;
    cout << " ..+****+:                  :@+                 %@   *@.       @@               .-+..     =*********" << endl;
    cout << "..=+++==..                  :@+                 %@   *@*+*****#@@+=.            .:+..     =*********" << endl;
    cout << ":++++====-..                .@+                 %@   .-%@========%@.            .-*..     =*********" << endl;
    cout << "=+========-.                .@@@@@@@@@@@@@@@@@@@@%   .:%@=-------%@             .-*..     -=========" << endl;
    cout << ":+========-.                       :@*  .%@          #@*+++++++@@+:             .-*..     -=========" << endl;
    cout << " .-===++=:                        .%@.   .@%.        @@       .@@               :+#..     -=========" << endl;
    cout << " ..------.            -@%#################################################@%.   -#%:.     -=========" << endl;
    cout << ".----::::::.          -@+                                                .%%.   =#@:.     -=========" << endl;
    cout << ":::::::::-:.          -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%.   =%@:.     .:::::::::" << endl;
    cout << ".:::::::--:.             @@..@*                         .@#             :@#     -#@:.     .:::::::::" << endl;
    cout << " .::::-==.               @@..@*                         .@#             :@#     -#%..     .:::::::::" << endl;
    cout << " ..-====-.               @@ .@*                         .@#    .#%%+    :@*     :#%..     .:::::::::" << endl;
    cout << ".+++++===-:.             @@ .@*                         .@#     ....    :@*     :#%..     .:::::::::" << endl;
    cout << "=+=======--.             @@ .@*                         .@#             :@*     :#%..     -=========" << endl;
    cout << "-+========:.             @@ .@*                         .@#.............-@*     :##.      -=========" << endl;
    cout << ".-======-.               @@ .@+                          @@#############%@*     :##..     -=========" << endl;
    cout << "  .=*##*=.               @@ .@+                          @#             :@*     .##.      -=========" << endl;
    cout << ".######**+:.             %@ .@+                          @#             :@+     .##.      -=========" << endl;
    cout << "*##******+=.             %@ .@+                          @#    =@@@@.   :@+     .##.      -=========" << endl;
    cout << "+#********-.             %@ .@+                          @#             :@+     ..+.      +#########" << endl;
    cout << ".-*#***#+.               %@ .@+                          @#             :@+     ..=.      +#########" << endl;
    cout << "                         %@@@@+                          @@@@@@@@@@@@@@@@@+     .:=.      +#########" << endl;
    cout << "                                                                                .:-.      +#########" << endl;
    cout << "                                                                                         +#########" << endl;
}*/ 

int main()
{


    IntroScene Intro = IntroScene("Intro Scene");
    PrisonCell Prison = PrisonCell("Prison Cell");
    Courtyard Courtyd = Courtyard("Courtyard");
    LargeCell LCell = LargeCell("Large Cell");
    CrumblingCell CCell = CrumblingCell("Crumbling Cell");

    std::vector<Location*> chapters = { &Intro, &Prison, &Courtyd, &LCell, &CCell };

    /*
    std::vector<std::string> asciiArt = {};
    asciiArt.push_back("adaenfeofn pfefaa8dfhaw9dhawd0awd");
    asciiArt.push_back("adaenfeofn pfefaa8dfhaw9dhawd0awd");
    asciiArt.push_back("adaenfeofn pfefaa8dfhaw9dhawd0awd");
    asciiArt.push_back("adaenfeofn pfefaa8dfhaw9dhawd0awd");
    */

    int chapIndex = 0;


    while (chapIndex < chapters.size()) {
        std::cout << "         " << chapters[chapIndex]->getName() << std::endl;

        //cout << asciiArt[chapIndex] << endl;
        chapters[chapIndex]->runScenario();


        chapIndex += 1;
        if (chapIndex == chapters.size()) {
            std::cout << "Congratulations, you have completed the game!" << std::endl;
            break;
        }


    }
}

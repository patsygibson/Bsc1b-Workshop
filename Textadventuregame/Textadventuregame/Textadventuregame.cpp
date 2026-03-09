#include <iostream>
#include <vector>
#include "NarrPoint.h"
#include "Location.h"
#include "IntroScene.h"
#include "PrisonCell.h"

using namespace std;

void gameinstruct() {
    system("cls");

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
    cout << "                                                                                          +#########" << endl;
}

int main()
{
<<<<<<< HEAD
    Location Room("Your Room", "A small room lit by your office lamp next to your computer on your desk");
    Location Cell("Prison Cell", "A dark wet room you have to share.");
    Location Courtyard("Courtyard", "A cold and medieval place");

    string userinput;
    string playerName;



    vector<Narration> gameStory = {};

    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);

   

    int currentNarrationIndex = 0;

    while (true) {
        cout << gameStory[currentNarrationIndex].getQuestion() << endl;
        bool result = gameStory[currentNarrationIndex].checkAnswer();
        if (result == true) {
            currentNarrationIndex += 1;
        }
        else {
            currentNarrationIndex = gameStory[currentNarrationIndex].getReturnIndex();
        }





    }

=======
//run intro scene
    IntroScene Intro = IntroScene("Name");
    PrisonCell Prison = PrisonCell("Name");
    vector<Location> chapters = {Intro, Prison};

    int chapIndex = 0;
    

    while (chapIndex < chapters.size()) { 
        cout << "You are currently in " << chapters[chapIndex].getName() << endl;
    else()
       
    }
>>>>>>> f75c78d1d8b40f1ad547e990ada9783418323d37

}
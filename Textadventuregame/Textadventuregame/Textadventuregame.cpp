#include <iostream>
#include "Location.h"
#include "Game.h"
#include <string>
#include "MysteriousStranger.h"
#include "Narration.h"

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
    Location Room("Your Room", "A small room lit by your office lamp next to your computer on your desk");
    Location Cell("Prison Cell", "A dark wet room you have to share.");
    string userinput;


    /*
    cout << "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell." << endl;
    cout << "Press Enter to continue..." << endl;
    cin >> userinput;
    system("cls");
    cout << "Suddenly a deep voice echoes from the other side of the cell bars..." << endl;
    cout << "'Ah there you are...'" << playerName << ", so you were brave enough to press enter after all.'" << endl;
    cout << "Press Enter to continue..." << endl;
    cin >> userinput;
    system("cls");
    cout << "Your eyes adjust to the dimness of the cell, finally making the figure out. You don't recognise him. But he seems familiar somehow..." << endl;
    cout << "He speaks again after a long pause... 'So I guess you have many questions including where you are...'" << endl;
    cout << "Type 'yes' to ash where you are or 'no' to stay silent: ";
    string response;
    cin >> response;
    if (response == "yes") {
        system("cls");
        cout << "'Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'" << endl;
        cout << "Enter your guess: ";
        int yearGuess;
        cin >> yearGuess;
        if (yearGuess >= 1204 && yearGuess <= 1230) {
            system("cls");
            cout << "He claps his hands slowly and says, 'Impressive, so you remember who you are after all..." << endl;
        }

        else {
            system("cls");
            cout << "'Wrong. You are in the year of 1230 in Bohemia. You will soon find out why you are here...' He laughs menacingly." << endl;
        }
    */


    vector<Narration> gameStory = {};

    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);

    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
    Narration firstChoice = Narration(
        "You wake up in a cold damp room. You hear distant screams and the clanging of metal. As you observe your surroundings, you realise you are in a prison cell. Suddenly a deep voice echoes from the other side of the cell bars... Czech Republic,in the Benedictine monastery of Podlazice to be exact. Can you guess the year?'",
        { "1220", "500BCE" },
        "1220",
        0
    );
    gameStory.push_back(firstChoice);
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

    

    /*
    void gamestart() {
        gameinstruct();

    }*/

}
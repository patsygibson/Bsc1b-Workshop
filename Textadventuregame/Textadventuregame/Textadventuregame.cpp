#include <iostream>
#include "Location.h"
#include "Monster.h"
#include <string>
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
    Location Cell("Prison Cell", "A dark wet room you have to share with Epstein and P Diddy");
    string userinput;

    cout << "... You are sitting in front of your computer. Suddenly, the computer turns on by itself..." << endl;
    cout << "Press Enter to continue..." << endl;
    cin >> userinput;
    gameinstruct();
    cout << "WELCOME" << endl;
    cout << "Please enter your name if you're brave enough: ";
    string playerName;
    cin >> playerName;
    cout << playerName << ",are you ready to travel to a time better than this place?" << endl;
    cout << "Press Enter to continue..." << endl;
    cin >> userinput;
    system("cls");
    //effects
    cout << "Error 404" << endl;
    cout << "   " << endl;
    cout << "System Malfunctioning" << endl;
    cout << "   " << endl;
    cout << "Restartovat systém" << endl;
    cout << "   " << endl;
    cout << "0101010101010010101101010010101010101010100101010101010010101010101010101010101101010101010101011010101010101010101010101010101010101010101010101010101010101010101010101010101010101010100101010 " << endl;
    cout << "Transferring you to another dimension..." << endl;
    cout << "Press Enter to continue..." << endl;
    cin >> userinput;
    system("cls");
    cout << "You suddenly feel dizzy and nauseous... The computer lets out a screeching sound loud enough to deafen you..." << endl;
    cout << "varování, budete p?eneseni do jiného ?asu" << endl;
    cout << "011010101010111010101101010101101010100000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000 " << endl;
    cout << "Everything goes black..." << endl;
}
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
    Location Roof = Location("dark sky", "Very cold and unstable");
    Location Basement = Location("unamed room", "The area is dark is gloomy");
    Location Attic = Location("Dusty room", "Area with lots of boxes and old ornaments");

    Location* currentLocation = &Roof;
    string userInp;
    string userChoice;

    Monster greg = Monster();
    Monster player1 = Monster("Stuart", "Monster", 0);
    
    while (true)
    {
        cout << currentLocation->getName() << " is your first location." << endl;
        cout << "Would you like to change location?" << endl;
        cout << "You can choose: Roof, Basement or Attic" << endl;
        cin >> userChoice;

        if (userChoice == "Basement")
        {
            Location currentLocation = Basement;
        }
        if (userChoice == "Attic")
        {
            Location currentLocation = Attic;
        }
        else 
        {
            cout << "Incorrect, please type again." << endl;
        }
    }

}
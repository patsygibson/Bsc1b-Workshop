#include "IntroScene.h"
#include "NarrPoint.h"


IntroScene::IntroScene(std::string iName) : Location()
{
	this->name = iName;
	std::string name = "Intro";
	std::string userInput = "Empty userinput";

}

void IntroScene::setName(std::string nName)
{
	this->name = nName;
}

std::string IntroScene::getName()
{
	return this->name;
}
//CHANGE HERE
void IntroScene::runScenario(int& userHealth, int& userSkill)
{
	//Asking the player for their name and storing it in a variable, userinput is used to store the player's input and getline is used to read the player's input as a string
	std::string playerName;
	std::string userInput;
	std::string getline;
	int plotIndex = 0;  //This variable is used to keep track of the player's progress through the story



	// ASCII art
	std::cout << "                                                                                                                                                            " << std::endl;
	std::cout << "\033[90m=================================================================================================================================================================\033[0m" << std::endl;
	std::cout << "                                                                                                                                                            " << std::endl;
	std::cout << "                                                                                                                                                            " << std::endl;
	std::cout << "\033[31m                 @@%  @@@                      @@@                                        @@  @@@@      @@                                                  " << std::endl;
	std::cout << "                @@     @          %             @@         @             @              @@     @+                   @           -                           " << std::endl;
	std::cout << "               @@@    @         @@@@        @ @@@@       @@@@      @@@@  @@            @@@    -@       @@@#       @@@@@@     %@@@@@                         " << std::endl;
	std::cout << "               @@@@   @         @  -@@       @  +@@      @  @@@      @@@  @             @@@   @@         @@#      @   @@          @@                        " << std::endl;
	std::cout << "               @@@@  @          @   @@@     @%   @@      @   @@       @@@@              @@@  @@@@@@      @@+     @    @@       @  @@                        " << std::endl;
	std::cout << "               @@@@ @           @    @@     @@   @@      @  @          @@@              @@@ @   @@@      @@+     @    @@      @   @@                        " << std::endl;
	std::cout << "               @@@@@            @@    @     @@   @@      @@@         @ @@@              @@@@    @@@      @@+     @@   @@     @@   @@                        " << std::endl;
	std::cout << "                @@@      @@     @@@  @      @@@# @@      @@@@       @@  @@@             @@@     @@@      @@+     @@@  @@     @@@  @@                        " << std::endl;
	std::cout << "                @@     @@        @@@        @@@ @@@       @@@@     @@@  @@@@            @@     @@@      @@@      @@@ @@@     @@@=@@@                        " << std::endl;
	std::cout << "               @  @@@@@@                                                                  @@@ @@@@                    @@                                    " << std::endl;
	std::cout << "                                                                                                               @@@   @*                              \033[0m" << std::endl;
	std::cout << "                                                                                                                                                            " << std::endl;

	std::cout << "\033[95m                                  You are siting at your computer,                                                                " << std::endl;
	std::cout << "                                                                            whiling away the hours...                          \033[0m    " << std::endl;
	std::cout << "\033[90m                                                                                                                    + #########" << std::endl;
	std::cout << "                                                                                                                    + #########" << std::endl;
	std::cout << "                             ..                                                                                      +#########" << std::endl;
	std::cout << "                            :*#**+=.                   :@@%###*************@@.                                       +#########" << std::endl;
	std::cout << "                           -*******+-.                 :@+                 %@.                             .*:..    .=*********" << std::endl;
	std::cout << "                           =********+-.                :@+                 %@.                           ..:**:.   ..=*********" << std::endl;
	std::cout << "                          .********+-.                 :@+                 %@.  =@@@@@@@@@@*               .*+:.   ..=*********" << std::endl;
	std::cout << "                            ..+****+:                  :@+                 %@   *@.       @@               .-+..     =*********" << std::endl;
	std::cout << "                           ..=+++==..                  :@+                 %@   *@*+*****#@@+=.            .:+..     =*********" << std::endl;
	std::cout << "                           :++++====-..                .@+                 %@   .-%@========%@.            .-*..     =*********" << std::endl;
	std::cout << "                           =+========-.                .@@@@@@@@@@@@@@@@@@@@%   .:%@=-------%@             .-*..     -=========" << std::endl;
	std::cout << "                           :+========-.                       :@*  .%@          #@*+++++++@@+:             .-*..     -=========" << std::endl;
	std::cout << "                            .-===++=:                        .%@.   .@%.        @@       .@@               :+#..     -=========" << std::endl;
	std::cout << "                            ..------.            -@%#################################################@%.   -#%:.     -=========" << std::endl;
	std::cout << "                           .----::::::.          -@+                                                .%%.   =#@:.     -=========" << std::endl;
	std::cout << "                           :::::::::-:.          -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%.   =%@:.     .:::::::::" << std::endl;
	std::cout << "                           .:::::::--:.             @@..@*                         .@#             :@#     -#@:.     .:::::::::" << std::endl;
	std::cout << "                            .::::-==.               @@..@*                         .@#             :@#     -#%..     .:::::::::" << std::endl;
	std::cout << "                            ..-====-.               @@ .@*                         .@#    .#%%+    :@*     :#%..     .:::::::::" << std::endl;
	std::cout << "                           .+++++===-:.             @@ .@*                         .@#     ....    :@*     :#%..     .:::::::::" << std::endl;
	std::cout << "                           =+=======--.             @@ .@*                         .@#             :@*     :#%..     -=========" << std::endl;
	std::cout << "                           -+========:.             @@ .@*                         .@#.............-@*     :##.      -=========" << std::endl;
	std::cout << "                           .-======-.               @@ .@+                          @@#############%@*     :##..     -=========" << std::endl;
	std::cout << "                             .=*##*=.               @@ .@+                          @#             :@*     .##.      -=========" << std::endl;
	std::cout << "                           .######**+:.             %@ .@+                          @#             :@+     .##.      -=========" << std::endl;
	std::cout << "                           *##******+=.             %@ .@+                          @#    =@@@@.   :@+     .##.      -=========" << std::endl;
	std::cout << "                           +#********-.             %@ .@+                          @#             :@+     ..+.      +#########" << std::endl;
	std::cout << "                           .-*#***#+.               %@ .@+                          @#             :@+     ..=.      +#########" << std::endl;
	std::cout << "                                                    %@@@@+                          @@@@@@@@@@@@@@@@@+     .:=.      +#########" << std::endl;
	std::cout << "                                                                                                           .:-.      +#########" << std::endl;
	std::cout << "                                                                                                                     +#########\033[0m" << std::endl;



	std::cout << "\033[95m                                 All of a sudden, your computer starts to glitch and a message appears on the screen:       " << std::endl;
	std::cout << "                                                                                                                            " << std::endl;
	std::cout << "\033[36m                                                       'Please enter your name to continue:                            \033[0m" << std::endl;
	std::cout << "                                                                                                                            " << std::endl;
	std::cout << "                                                                                                       ";
    std::getline(std::cin, userInput);
	while (userInput.empty()) {
		std::cout << "Invalid input. Please press Enter to continue ..." << std::endl;  // Prompt the user to press Enter to continue
		std::getline(std::cin, userInput);
	}
	std::cout << "                                                                                                              Welcome, " << userInput << " ! " << std::endl;
	std::cout << "                                 " << std::endl;
	
	
	std::cout << "\033[93m---------------------------------------------------------------------------------------------------------------------------------------------------------------\033[0m" << std::endl;
	std::cout << "       " << std::endl;
	std::cout << "\033[35m                              @@@@@@@  @@@@@@    @@@@@@     @@@@@:    @@@@@@           @:    @@@=       @@        " << std::endl;
	std::cout << "                              @        @-    @#  @    #@.  @@    @@   @@    @@       =@@@  :@+  @@    -@@@        " << std::endl;
	std::cout << "                              @        @     @@  @     @+ @@      @@  @     @@      @@ @*  @@    @   @@ @@        " << std::endl;
	std::cout << "                              @@@@@@   @@@@@@    @@@@@@   @@      @@  @@@@@@#      @@  @   @@    @  @@  @@        " << std::endl;
	std::cout << "                              @        @   @@    @   @    @@      @#  @   @@      @@@@@@@@ @@    @ @@@@@@@@@      " << std::endl;
	std::cout << "                              @.       @@   @@   @:   @@   @@   %@@   @@   @@          @:  .@#  @@      @@        " << std::endl;
	std::cout << "                              @@@@@@@  @:    @@  @     @#    @@@@     @*    @@         @=    @@@=       @@        \033[0m" << std::endl;
	std::cout << "                                                                                                                                                            " << std::endl;
	std::cout << "                                                                                                                                                            " << std::endl;
	std::cout << "                                                                                                                                                            " << std::endl;
	std::cout << "                                                                                                                                                            " << std::endl;
	std::cout << "\033[36m                                      Transmission received. Initializing...                                                                 " << std::endl;
	std::cout << "                                                                             Transcending into another dimension...                          " << std::endl;
	std::cout << "                                                                                                                                                            " << std::endl;
	std::cout << "                                                                                                                                                            " << std::endl;
			

			
	while (plotIndex >= 0 && plotIndex < this->story.size()) {  // Main loop for the intro scene scenario

		plotIndex += 1;     // Increment the plot index to move to the next narrative point
			std::cout << "===============================================================================================================================================================" << std::endl;
		}
	
	
}



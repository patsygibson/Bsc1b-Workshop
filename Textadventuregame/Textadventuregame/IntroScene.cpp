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

void IntroScene::runScenario()
{
	std::string playerName;
	std::string userInput;
	std::string getline;
	int plotIndex = 0;

	// ASCII art
	std::cout << "                                                                                                                                                            " << std::endl;
	std::cout << "=================================================================================================================================================================" << std::endl;
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

	std::cout << "                               You are siting at your computer,                                                                    " << std::endl;
	std::cout << "                                                                 whiling away the hours...                                         " << std::endl;
	std::cout << "                                                                                                                        + #########" << std::endl;
	std::cout << "                                                                                                                        + #########" << std::endl;
	std::cout << "                                  ..                                                                                     +#########" << std::endl;
	std::cout << "                                :*#**+=.                   :@@%###*************@@.                                       +#########" << std::endl;
	std::cout << "                               -*******+-.                 :@+                 %@.                             .*:..    .=*********" << std::endl;
	std::cout << "                               =********+-.                :@+                 %@.                           ..:**:.   ..=*********" << std::endl;
	std::cout << "                              .********+-.                 :@+                 %@.  =@@@@@@@@@@*               .*+:.   ..=*********" << std::endl;
	std::cout << "                                ..+****+:                  :@+                 %@   *@.       @@               .-+..     =*********" << std::endl;
	std::cout << "                               ..=+++==..                  :@+                 %@   *@*+*****#@@+=.            .:+..     =*********" << std::endl;
	std::cout << "                               :++++====-..                .@+                 %@   .-%@========%@.            .-*..     =*********" << std::endl;
	std::cout << "                               =+========-.                .@@@@@@@@@@@@@@@@@@@@%   .:%@=-------%@             .-*..     -=========" << std::endl;
	std::cout << "                               :+========-.                       :@*  .%@          #@*+++++++@@+:             .-*..     -=========" << std::endl;
	std::cout << "                                .-===++=:                        .%@.   .@%.        @@       .@@               :+#..     -=========" << std::endl;
	std::cout << "                                ..------.            -@%#################################################@%.   -#%:.     -=========" << std::endl;
	std::cout << "                               .----::::::.          -@+                                                .%%.   =#@:.     -=========" << std::endl;
	std::cout << "                               :::::::::-:.          -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%.   =%@:.     .:::::::::" << std::endl;
	std::cout << "                               .:::::::--:.             @@..@*                         .@#             :@#     -#@:.     .:::::::::" << std::endl;
	std::cout << "                                .::::-==.               @@..@*                         .@#             :@#     -#%..     .:::::::::" << std::endl;
	std::cout << "                                ..-====-.               @@ .@*                         .@#    .#%%+    :@*     :#%..     .:::::::::" << std::endl;
	std::cout << "                               .+++++===-:.             @@ .@*                         .@#     ....    :@*     :#%..     .:::::::::" << std::endl;
	std::cout << "                               =+=======--.             @@ .@*                         .@#             :@*     :#%..     -=========" << std::endl;
	std::cout << "                               -+========:.             @@ .@*                         .@#.............-@*     :##.      -=========" << std::endl;
	std::cout << "                               .-======-.               @@ .@+                          @@#############%@*     :##..     -=========" << std::endl;
	std::cout << "                                 .=*##*=.               @@ .@+                          @#             :@*     .##.      -=========" << std::endl;
	std::cout << "                               .######**+:.             %@ .@+                          @#             :@+     .##.      -=========" << std::endl;
	std::cout << "                               *##******+=.             %@ .@+                          @#    =@@@@.   :@+     .##.      -=========" << std::endl;
	std::cout << "                               +#********-.             %@ .@+                          @#             :@+     ..+.      +#########" << std::endl;
	std::cout << "                               .-*#***#+.               %@ .@+                          @#             :@+     ..=.      +#########" << std::endl;
	std::cout << "                                                        %@@@@+                          @@@@@@@@@@@@@@@@@+     .:=.      +#########" << std::endl;
	std::cout << "                                                                                                               .:-.      +#########" << std::endl;
	std::cout << "                                                                                                                         +#########" << std::endl;



	std::cout << "                                 All of a sudden, your computer starts to glitch and a message appears on the screen:       " << std::endl;
	std::cout << "                                                                                                                            " << std::endl;
	std::cout << "\033[36m                                                      'Please enter your name to continue:                            '\033[0m" << std::endl;
	std::cout << "                                                                                                                            " << std::endl;
    std::getline(std::cin, userInput);


	std::cout << "  Welcome, " << userInput << " ! " << std::endl;
	std::cout << "                                 " << std::endl;
	std::cout << "                Error 404            " << std::endl;
	std::cout << "==================================================================================================================================================================" << "  " << std::endl;
	std::cout << "                                                                                                     " << std::endl;
	std::cout << "    The screen flashes, then briefly turns in a sea of blue pixels before quickly winking out... " << " ...Entering new timeline..." << std::endl;
	std::cout << "                                                                                                 " << std::endl;


	while (plotIndex >= 0 && plotIndex < this->story.size()) {
		
		plotIndex += 1;
		std::cout << "===============================================================================================================================================================" << std::endl;
	}
}



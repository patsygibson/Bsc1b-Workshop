#include "Game.h"
#include "string"

Game::Game()
{
	this->startGame();

	//currentScene = 0;

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
    cout << "Press Enter to continue..." << endl;
    cin >> userinput;
    system("cls");



    //Next scene
    //currentScene = 1;
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

        cout << "You look around the cell and feel a sudden urge to get out of this cell. You look at the bars and you see that they are old but sturdy." << endl;
 
}

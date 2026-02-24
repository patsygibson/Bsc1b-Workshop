#include "Game.h"
#include "string"

using namespace std;

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
        cout << "Type 'break' to try to break the bars or 'wait' to let it be: ";
        string action;
        cin >> action;
        if (action == break) {
            system("cls");
            cout << "You try to break the bars with all your might but you don't enough strength to break them. You must gain more health to gain strength points." << endl;
            cout << "You hear a deep chuckle from the other side of the bars... 'I see you are yearning for freedom... You want it so badly? Well, I can give you that freedom, but you must work with me...'" << endl;
        }
        else {
            system("cls");
            cout << "You decide to wait and to let time pass by." << endl;
            cout << "The stranger speaks again after a long silence... 'Would you like to know why you are here?'" << endl;
            cout << "Type 'yes' to ask why you are here or 'no' to stay silent: ";
            string ask;
            cin >> ask;
            if (ask == "yes") {
                system("cls");
                cout << "'I will tell you more about who you are and why you are here, but first, you must work with me...'" << endl;
            }
            else {
                cout << "You decide to stay silent and not ask any questions. The whole atmosphere becomes tense and dark. The stranger sighs and says, 'I see you are stubborn... fine have it your way...' He laughs menacingly and you suddenly feel a sharp pain in your head and everythinh goes black..." << endl;
                //Return to the start of the game. 
            }
           
            cout << "Type 'yes' to work with him or 'no' to refuse: ";
            string choice;
            cin >> choice;
            if (choice == "yes") {
                //HEALTH POINT GAINED
                cout << "You gain health points and you gradually feel slightly more rejuvinated, the stranger smiles 'Fantastic'..." << endl;
            }
            else {
                //HEALTH POINT LOST
                cout << "I see you are just as stubborn as you used to be... You suddenly feel a sharp pain hitting you in your chest, you look towards the stranger and can't help but feel as though he is the one causing the pain telepathically. " << endl;
            }
             
}

/* Hangman Game
 * Alina Skowronek
 * 2 November 2022
 * Purpose:
 *   Create the gallows from a hangman game
 */

#include <iostream>
#include <string>
using namespace std;

int main() {

    char choice; // Choice user makes (Y or N) to play the game or not
    string userFriendName; // The name of the friend the user enters
    char userLetterGuess; // The letter the user types in to guess the word

    // Welcome screen to ask user if they would like to play
    cout << "Welcome to Hangman!" << endl;
    cout << "Would you like to play a game? |Y/N|: ";
    cin >> choice;
    choice = toupper('y');

    // if user types in 'Y' the directions will be displayed
    if (choice == 'Y') {
        cout << "In this game a random holiday will be chosen." << endl;
        cout << "Your job is to guess the name of the holiday in 7 tries or less." << endl;
        cout << "If you use more than 7 tries, your friend will be hung!" << endl;
        cout << "Good luck :)\n" << endl;
        cout << "Before the game starts enter the name of your friend here: ";
        cin >> userFriendName;

        // Title
        cout << "           -";
        for (int i = 0; i < 15; i++) {
            cout << "-";
        }
        cout << "\n          |     " << userFriendName << "    |" << endl;
        cout << "           -";
        for (int i = 0; i < 15; i++) {
            cout << "-";
        }
        // Create starting gallow
        cout << "\n\n           -";
        for (int i = 0; i < 15; i++ ) {
            cout << "-";
        }
        cout << "|" << endl;
        cout << "           |               |" << endl;

        for(int i = 0; i < 10; i++) {
            cout << "           |" << endl;
        }
        cout << "  -";
        for (int i = 0; i < 16; i++) {
            cout << "-";
        }
    }

    do {
        cout << "\nType in a letter: "; 
        cin >> userLetterGuess;
    }
    while (choice == 'y');
}
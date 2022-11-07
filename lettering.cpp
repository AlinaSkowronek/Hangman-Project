/* Hangman
* Ainslee Cole, Alina Skowronek
* 1 November 2022 - 7 November 2022
* 1 November 2022
* Purpose:
*	Create a hangman game to guess the random hidden holiday. 
*	Create a loop to guess a letter and fill in the blank.
*	Create code to display a body part if users guess was incorrect.
*	Create the body and stand for the Hangman
*	Create a loop to ask user if they want to play again.
*/

#include <iostream>
#include <string>
#include <ctime>
using namespace std;

int tries = 7;
char choice; // Choice user makes (Y or N) to play the game or not
void home_menu(); // Goes to start of loop.
int checkGuess(char, string, string&); // Checks to see if guess/letter matches the word.

int main() {
	string word;
	char letter; // The letter the user types in to guess the word
	string holiday[18]{ "april fools day", "christmas", "cinco de mayo", "columbus day", "easter", "fathers day", "halloween", "independence day", "labor day",
			"martin luther king jr day", "memorial day", "mothers day", "new years eve", "presidents day", "saint patricks day", "thanksgiving", "valentines day",
			"veterans day" };	// Holidays
	srand(time(NULL));			//NULL is a pointer.
	int h = rand() % 12;
	word = holiday[h];

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
    }
    
    // Title
    cout << "           -";

    for (int i = 0; i < 15; i++) {
        cout << "-";
    }
    cout << "\n          |     Hangman     |" << endl;
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

    string hide_h(word.length(), '-');	//Makes the letters in the holdiday dashes.
    cout << "\n\n";
    while (tries != 0) {
        home_menu();
        cout << hide_h;
        cout << "\nPlease guess a letter: ";
        cin.ignore();
        cin.get(letter);
        
        if (checkGuess(letter, word, hide_h) == 0) {
            cout << "\nIncorrect letter.";
            tries = tries - 1;
            
            // Loop for each wrong guess, a peice of the man is added
                do {
                    
                    if (tries == 6) {
                        cout << "\n\n           -";
                        for (int i = 0; i < 15; i++ ) {
                            cout << "-";
                        }
                        cout << "|" << endl;
                        cout << "           |               |" << endl;
                        cout << "           |               O" << endl;
                        for(int i = 0; i < 9; i++) {
                            cout << "           |" << endl;
                        }
                        cout << "  -";
                        for (int i = 0; i < 16; i++) {
                            cout << "-";
                        }
                    }

                    else if (tries == 5){
                        cout << "\n\n           -";
                        for (int i = 0; i < 15; i++ ) {
                            cout << "-";
                        }
                        cout << "|" << endl;
                        cout << "           |               |" << endl;
                        cout << "           |               O" << endl;
                        cout << "           |               |" << endl;
                        for(int i = 0; i < 8; i++) {
                            cout << "           |" << endl;
                        }
                        cout << "  -";
                        for (int i = 0; i < 16; i++) {
                            cout << "-";
                        }
                    }
                    
                    else if (tries == 4){
                        cout << "\n\n           -";
                        for (int i = 0; i < 15; i++ ) {
                            cout << "-";
                        }
                        cout << "|" << endl;
                        cout << "           |               |" << endl;
                        cout << "           |               O" << endl;
                        cout << "           |              /|" << endl;
                        for(int i = 0; i < 7; i++) {
                            cout << "           |" << endl;
                        }
                        cout << "  -";
                        for (int i = 0; i < 16; i++) {
                            cout << "-";
                        }
                    }

                    else if (tries == 3){
                        cout << "\n\n           -";
                        for (int i = 0; i < 15; i++ ) {
                            cout << "-";
                        }
                        cout << "|" << endl;
                        cout << "           |               |" << endl;
                        cout << "           |               O" << endl;
                        cout << "           |              /|\\" << endl;
                        for(int i = 0; i < 6; i++) {
                            cout << "           |" << endl;
                        }
                        cout << "  -";
                        for (int i = 0; i < 16; i++) {
                            cout << "-";
                        }
                    }

                    else if (tries == 2){
                        cout << "\n\n           -";
                        for (int i = 0; i < 15; i++ ) {
                            cout << "-";
                        }
                        cout << "|" << endl;
                        cout << "           |               |" << endl;
                        cout << "           |               O" << endl;
                        cout << "           |              /|\\" << endl;
                        cout << "           |               |" << endl;
                        for(int i = 0; i < 5; i++) {
                            cout << "           |" << endl;
                        }
                        cout << "  -";
                        for (int i = 0; i < 16; i++) {
                            cout << "-";
                        }
                    }

                    else if (tries == 1){
                        cout << "\n\n           -";
                        for (int i = 0; i < 15; i++ ) {
                            cout << "-";
                        }
                        cout << "|" << endl;
                        cout << "           |               |" << endl;
                        cout << "           |               O" << endl;
                        cout << "           |              /|\\" << endl;
                        cout << "           |               |" << endl;
                        cout << "           |              / " << endl;
                        for(int i = 0; i < 4; i++) {
                            cout << "           |" << endl;
                        }
                        cout << "  -";
                        for (int i = 0; i < 16; i++) {
                            cout << "-";
                        }  
                    }

                    else {
                        cout << "\n\n           -";
                        for (int i = 0; i < 15; i++ ) {
                            cout << "-";
                        }
                        cout << "|" << endl;
                        cout << "           |               |" << endl;
                        cout << "           |               O" << endl;
                        cout << "           |              /|\\" << endl;
                        cout << "           |               |" << endl;
                        cout << "           |              / \\" << endl;
                        for(int i = 0; i < 3; i++) {
                            cout << "           |" << endl;
                        }
                        cout << "  -";
                        for (int i = 0; i < 16; i++) {
                            cout << "-";
                        }  
                    }
                } while (tries == 7);
                
        }
        
        else cout << "\nCorrect! You guessed a letter";
    
        if (word == hide_h) {
            cout << "\nCongratulations! You guessed the word!";
            home_menu();
            cout << "\nThe word was: " << word << endl;
            break;
        }
    }
    if (tries == 0) {
        cout << "\nOn no! Our friend has been hanged.";
        home_menu();
        cout << "\nThe word was: " << word << endl;
    }

	cin.ignore();
	cin.get();		//access the array
	return 0;
}

int checkGuess(char guess, string hiddenholiday, string& holidayguess) {
	int matches = 0;
	int length = hiddenholiday.length();
	for (int i = 0; i < length; i++) {
		if (guess == holidayguess[i])
			return 0;
		if (guess == hiddenholiday[i]) {
			holidayguess[i] = guess;
			matches++;
		}
		
	}
	return matches;
}
void home_menu() {
	cout << "\nYou have " << tries << " tries left." << endl;
}
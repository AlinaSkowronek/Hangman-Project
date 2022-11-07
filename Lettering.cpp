/* Hangman
* Ainslee Cole
* October 31 - November 11, 2022
* Purpose:
*		Create a hangman game to guess the random hidden holiday. 
*		Create a loop to guess a letter and fill in the blank.
*/
#include <iostream>
#include <string>
#include <ctime>
#include <iostream>
using namespace std;

int tries = 7;
void home_menu();
int checkGuess(char, string, string&);

int main() {
	string word;
	char letter;
	string holiday[18]{ "april fools day", "christmas", "cinco de mayo", "columbus day", "easter", "fathers day", "halloween", "independence day", "labor day",
			"martin luther king jr day", "memorial day", "mothers day", "new_years eve", "presidents day", "saint patricks day", "thanksgiving", "valentines day",
			"veterans day" };
	
	srand(time(NULL));			//NULL is a pointer.
	int h = rand() % 12;
	word = holiday[h];
	
	string hide_h(word.length(), '-');
	
	cout << "\n\n";
	while (tries != 0) {
		home_menu();
		cout << hide_h;
		cout << "\nPlease guess a letter: ";
		
		cin >> letter;

		if (checkGuess(letter, word, hide_h) == 0) {
			cout << "\nIncorrect letter.";
			tries = tries - 1;
		}
		else cout << "\Correct! You guessed a letter";
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

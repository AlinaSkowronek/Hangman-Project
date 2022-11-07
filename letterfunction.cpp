#include <iostream>
#include "letterfunction.h"
#include <algorithm>
#include <ctime>


using namespace std;

int main() {
	int checkGuess(char, string, string&);
	string answer;
	int tries = 0;
	const int MAX = 7;
	string usedLetter;
	bool choice = false;
	char letter = 0;
	vector<char> incorrect;
	string soFar;				// what parts of the word the user has already filled out. (What they have so far)
	char repChar = 0;
	string holiday;

	string holidays[18] = {"April Fools Day", "Christmas", "Cinco De Mayo", "Columbus Day", "Easter", "Fathers Day", "Halloween", "Independence Day", "Labor Day",
		"Martin Luther King Jr Day", "Memorial Day", "Mothers Day", "New Years Eve", "Presidents Day", "Saint Patricks Day", "Thanksgiving", "Valentines Day",
		"Veterans day"};

	string WORD = holidays[rand() % 18];
	cout << WORD << endl;

	while (holiday != WORD && tries < 7) {
		showTries(tries);
		showStatus(incorrect, answer);
		cout << "\nPlease enter a letter: " << endl;
		cin >> letter;
		soFar = string(WORD.size(), '-');		//displays the parts of the word guessed so far.
		usedLetter = letter;					// letters already guessed.


		for (int i = 0; i < WORD.size(); i++) {
			if (letter == WORD[i]) {
				answer[i] = letter;
				choice = true;
			}
		}
		if (choice) cout << "\nCorrect!" << endl;
		else {
			cout << "\nIncorrect. Please choose again." << endl;
			incorrect.push_back(letter);
			tries++;
			cout << "You have " << MAX - tries << " tries left." << endl;
			cout << "You've used the following letters:\n " << usedLetter << endl;
			cout << "\nSo far, the word is:\n" << soFar << endl;
		}
		choice = false;
	}
}
	void showTries(int tries) 
	{
	}

	void showStatus(vector<char>incorrect, string choice)
	{
	}

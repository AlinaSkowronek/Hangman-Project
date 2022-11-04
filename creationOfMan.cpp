/* Hangman Game
 * Alina Skowronek
 * 3 November 2022
 * Purpose:
 *   Create a function that creates the man as the user gets letters incorrect 
 */

#include <iostream>
#include <string>
using namespace std;

int main () {
    char try1,
         try2,
         try3,
         try4,
         try5,
         try6,
         try7;

    if (try1 == false) {
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

    if (try2 == false){
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
    
    if (try3 == false){
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

    if (try4 == false){
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

    if (try5 == false){
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

    if (try6 == false){
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

    if (try7 == false){
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

}
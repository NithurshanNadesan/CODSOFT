#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void numberGuess();
void continueFun();

int main() {
    cout << "\n\n********  { WELCOME TO THE NUMBER-GUESSING-GAME! }  ********\n";
    cout << "\n------------------------------------------------------------\n";
    cout << "|   - Try to guess the secret number between 1 and 100 -   |"<<endl;
    cout << "------------------------------------------------------------\n\n";

    numberGuess();

    return 0;
}

void continueFun() {
    char choice;
    cout << "\nDo you want to continue this Game? [y/n]: ";
    cin >> choice;

    if (choice == 'y') {
        cout << ". . . . . . . . . . . . . . . . . . . . . .\n\n";
        numberGuess();
    } else if (choice == 'n') {
        cout << "\nThank You!! for playing The Number-Guess-Game :)\n\n";

    } else {
        cout << "Please enter the correct answer! [y] - for 'Yes' / [n] - for 'No'\n";
    }      
}

void numberGuess() {
    srand(time(0));

    int randomNumber = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    do {
        cout << "Please enter your guess: ";
        cin >> guess;
        if (guess>=1 && guess<=100) {
            attempts++;

            if (guess < randomNumber) {
                cout << "  -> Too low! Try again.\n";
            }
            else if (guess > randomNumber) {
                cout << "  -> Too high! Try again.\n";
            }
            else {
                cout << "\nCongratulations!\nYou guessed the secret number [" << randomNumber << "] in \"" << attempts << "\" attempts.\n";
                continueFun();
            }
        }
        else {
            cout<<"Invalid Number!!\n";
            numberGuess();
        }     
    }
    while (guess != randomNumber);
}
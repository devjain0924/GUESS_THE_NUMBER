#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip> // For formatting
using namespace std;

int main() {
    int b = 10, c = 50, n = 0;
    double count = -1;
    srand(time(0));
    int a = (rand() % (c - b + 1)) + b;

    cout << "=====================================\n";
    cout << "        WELCOME TO NUMBER GUESS       \n";
    cout << "=====================================\n\n";
    cout << "Rules:\n";
    cout << "1. Guess the number between " << b << " and " << c << ".\n";
    cout << "2. You'll get hints after each wrong guess.\n";
    cout << "3. Earn points based on fewer guesses!\n\n";

    cout << "Press Enter to start the game.";
    cin.get();

    cout << "\nGuess the number!\n";

    while (a != n) {
        count += 1;
        cout << "Enter your guess: ";
        cin >> n;

        if (n > c || n < b) {
            cout << "INVALID INPUT! Enter a number between " << b << " and " << c << ".\n";
        } else if (a < n) {
            cout << "WRONG! The number is LESS than " << n << ".\n";
        } else if (a > n) {
            cout << "WRONG! The number is GREATER than " << n << ".\n";
        }

        if (a != n) {
            cout << "Try again!\n";
        }
    }

    cout << "\n CONGRATULATIONS! You guessed the right number \n";
    if (count >= 10) {
        cout << "You earned 1 point.\n";
    } else {
        cout << "You earned " << (10 - count) << " points!\n";
    }

    cout << "\n=====================================\n";
    cout << "          THANK YOU FOR PLAYING!      \n";
    cout << "=====================================\n";

    return 0;
}

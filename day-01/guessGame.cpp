//Guess game that gives 5 tries and prints too low or too high if the guess is wrong.
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 20
    int secretNumber = rand() % 20 + 1;
    int guess;

    cout << "=== Number Guessing Game ===" << endl;
    cout << "Chose a number between 1 and 20." << endl;
    cout << "You have 5 tries to guess it." << endl;
    cout<<""<<endl;

   for (int tries = 1; tries <= 5; tries++) {
        cout << "Guess a number " << ": ";
        cin >> guess;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the number!" << endl;
            return 0;
        }
        else if (guess < secretNumber) {
            cout << "Too low!" << endl;
        }
        else {
            cout << "Too high!" << endl;
        }
    }

    cout << "The correct number was: " << secretNumber << endl;

    return 0;
}

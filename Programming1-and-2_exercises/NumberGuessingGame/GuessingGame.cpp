/*
*   Basic number guessing game.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;



int main()
{
    srand(time(0));
    int number = rand()%100;
    int guess;
    int numberOfGuesses = 1;
    while (numberOfGuesses<=5) {
        cout << "Guess the number." << endl;
        cin >> guess;
        if (guess<number) {
            cout << "Your guess is too low, try again!" << endl;
            numberOfGuesses = numberOfGuesses + 1;
        } else if (guess>number) {
            cout << "Your guess is too high, try again." << endl;
            numberOfGuesses = numberOfGuesses + 1;
        } else {
            cout << "You guessed the number!" << endl;
            return 0;
        }
    }
}

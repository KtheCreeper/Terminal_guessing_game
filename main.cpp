#include <iostream>
#include <random>
using namespace std;

int main()
{
    const int num_to_guess = random_device{}() % 10 + 1;
    int guesses = 0;
    bool guessed = 0;

    do {
        int guess;
        cout << "Guess the number   ";
        cin >> guess;
        cout << endl;
    
        if (guess == num_to_guess) {
            guessed = 1;
        } else if (guess < num_to_guess) {
            cout << "Guess was too low\nThe number is greater than " << guess << "\n\n";
        } else {
            cout << "Guess was too high\nThe number is less than " << guess << "\n\n";
        }
        guesses++;

    } while ((guesses < 3) && !guessed);

    cout << "You guessed the number in " << guesses << " guesses.";

    return 0;
}

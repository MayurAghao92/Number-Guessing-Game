#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void game()
{

    // Generate a random number between 1 and 100
    int randomNumber = rand() % 100 + 1;
    int guess;
    bool correctGuess = false;
    int attempts = 0;
    while (!correctGuess)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        // Check if the guess is correct
        if (guess == randomNumber)
        {
            cout << "Congratulations! You guessed the correct number in " << attempts + 1 << " attempts.\n";
            correctGuess = true;
        }
        else if (guess < randomNumber)
        {
            cout << "The number is greater. Try again.\n";
        }
        else
        {
            cout << "The number is smaller. Try again.\n";
        }

        attempts++;
    }
}

int main()
{

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Try to guess the number between 1 and 100.\n";

    srand(time(0));
    // Loop until the user guesses the correct number
    game();
    return 0;
}

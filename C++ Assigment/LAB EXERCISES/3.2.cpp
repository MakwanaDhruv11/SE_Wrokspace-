// 2. Number Guessing Game
// o Write a C++ program that asks the user to guess a number between 1 and 100. The
// program should provide hints if the guess is too high or too low. Use loops to allow
// the user multiple attempts.


#include <iostream>
using namespace std;

int main()
{
    int number = 50;
    int guess;

    cout << "Guess the number between 1 and 100" << endl;

    while (true)
    {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number)
            cout << "Too high" << endl;
        else if (guess < number)
            cout << "Too low" << endl;
        else
        {
            cout << "Correct guess!" << endl;
            break;
        }
    }

    return 0;
}

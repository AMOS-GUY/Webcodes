#include <iostream>
#include <cstdlib>
#include <ctime>
// using namespace std;
int main() {
    // Generate a random number between 1 and 100
    srand(static_cast<unsigned int>(time(0)));
    int randomNumber = rand() % 100 + 1;

    int guess;
    int guessCount = 0;

    std::cout << "Welcome to the Guessing Game!" << std::endl;

    while (true) {
        std::cout << "Enter your guess (between 1 and 100): ";
        std::cin >> guess;

        if (std::cin.fail()) {
            std::cout << "Invalid input. Please enter a valid number." << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            continue;
        }

        guessCount++;

        if (guess == randomNumber) {
            std::cout << "Congratulations! You guessed the correct number (" << randomNumber << ") in " << guessCount << " tries." << std::endl;
            break;
        } else if (guess < randomNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else {
            std::cout << "Too high! Try again." << std::endl;
        }
    }

    return 0;
}

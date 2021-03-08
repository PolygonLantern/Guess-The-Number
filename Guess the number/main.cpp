#include <iostream>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(0));
    int32_t randomNumber, userInput, lives;

    lives = 3;

    randomNumber = rand() % 10;

    std::cout << "Please enter a number between 1 - 10, you have " << lives << " lives left" << std::endl;

    for (int i = lives; i > 0 ; ++i)
    {
        std::cin >> userInput;

        if (userInput > randomNumber) std::cout << "The random number is lower. Lives remaining: " << --lives << std::endl;
        else if (userInput < randomNumber) std::cout << "The random number is greater. Lives remaining: " << --lives << std::endl;
        else
        {
            std::cout << "You guessed the number!" << std::endl;
            break;
        }

    }



    return 0;
}

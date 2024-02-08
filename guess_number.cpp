#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

int main()
{
    std::srand(std::time(nullptr));
    int random_nr = rand() % 10 + 1;
    int guess_nr;
    std::string retry;
    std::cout << random_nr << "\n"; //
    do
    {
        std::cout << "Guess the right number: ";
        std::cin >> guess_nr;
        if (guess_nr == random_nr)
        {
            std::cout << "Correct!";
            retry = "n";
        }
        else
        {
            if (random_nr < guess_nr)
            {
                std::cout << "The number is smaller!\n";
            }
            if (random_nr > guess_nr)
            {
                std::cout << "The number is bigger!\n";
            }
            std::cout << "Try again (y/n) ";
            std::cin >> retry;
        }
    } while (retry == "y");

    return 0;
}

#include <iostream>
#include <string>
#include <string.h>

int main()
{
    int numtries = 0;
    std::string secretWord = "hangman";
    std::string guess;
    std::cout << "_ _ _ _ _ _ _\n";

    std::cout << "Guess a letter\n";
    std::cin >> guess;
    while (numtries < 20)
    {
        for (int i = 0; i < secretWord.length(); i++)
        {
            if (secretWord[i] == guess)
            {
                std::cout << secretWord[i] << " ";
            }
            else
            {
                std::cout << " _";
                numtries++;
            }
        }
        std::cout << "Wrong tries:" << numtries;
    }

    return 0;
}

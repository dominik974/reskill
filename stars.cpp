#include <iostream>

int main()
{
    int starNumber;
    std::cout << "Enter number of stars: ";
    std::cin >> starNumber;

    for (int i = starNumber; i >= 1; i--)
    {
        for (int j = i; j >= 1; j--)
        {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}

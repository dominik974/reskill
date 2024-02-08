#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

int main()
{
    int inputnumbr = 1;

    while (inputnumbr != 0)
    {
        std::cout << "Enter a number (or 0 to exit)\n";
        std::cin >> inputnumbr;
        if (inputnumbr % 2 == 0)
        {
            std::cout << "Even\n";
        }
        else
        {
            std::cout << "Odd\n";
        }
    }

    return 0;
}

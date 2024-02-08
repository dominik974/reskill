#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

int main()
{
    int n;
    std::cout << "Number?\n";
    std::cin >> n;

    for (int i = 2; i <= n; i++)
    {
        if (i == n)
        {
            std::cout << "It's a prime number!\n";
        }

        else if (n % i == 0)
        {
            std::cout << "Not a prime number!\n";
            break;
        }
    }
    return 0;
}

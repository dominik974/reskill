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
    std::cout << "Mulitpliaction    Result\n";
    for (int i = 1; i <= 10; i++)
    {
        std::cout << n << " x " << i << " = " << i * n << "\n";
    }
    return 0;
}

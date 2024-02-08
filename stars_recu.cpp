#include <iostream>
void printstar(int n);
void recurive_line(int starNumber);

int main()
{
    int starNumber;
    std::cout << "Enter number of stars: ";
    std::cin >> starNumber;

    recurive_line(starNumber);

    return 0;
}

void printstar(int n)
{
    if (n >= 1)
    {
        std::cout << "*";
        printstar(n - 1);
    }
}

void recurive_line(int starNumber)
{
    for (int i = starNumber; i >= 1; i--)
    {
        printstar(i);
        std::cout << "\n";
    }
}

#include <iostream>

void swapIntegers(int *ptr1, int *ptr2);

int main()
{
    int num1 = 0, num2 = 0;
    int *ptr1 = &num1;
    int *ptr2 = &num2;

    std::cout << "Enter integer 1: ";
    std::cin >> num1;
    std::cout << "Enter integer 2: ";
    std::cin >> num2;

    swapIntegers(ptr1, ptr2);

    std::cout << "integer 1: " << num1 << "\n";
    std::cout << "integer 2: " << num2 << "\n";

    return 0;
}

void swapIntegers(int *ptr1, int *ptr2)
{
    int temp1 = *ptr1;
    int temp2 = *ptr2;

    *ptr1 = temp2;
    *ptr2 = temp1;
}

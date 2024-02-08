#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits.h>
#include <cfloat>

int main()
{

    std::cout << "Size of char: " << sizeof(char) << " bytes\n";
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << "Size of float: " << sizeof(float) << " bytes\n";
    std::cout << "Size of double: " << sizeof(double) << " bytes\n";
    std::cout << "Size of long: " << sizeof(long) << " bytes\n";
    std::cout << "Size of long long: " << sizeof(long long) << " bytes\n";
    std::cout << "Size of long long int: " << sizeof(long long int) << " bytes\n";
    std::cout << "\n";

    std::cout << "Range of char: " << CHAR_MIN << " to " << CHAR_MAX << "\n";
    std::cout << "Range of int: " << INT_MIN << " to " << INT_MAX << "\n";
    std::cout << "Range of float: " << FLT_MIN << " to " << FLT_MAX << "\n";
    std::cout << "Range of double: " << DBL_MIN << " to " << DBL_MAX << "\n";
    std::cout << "Range of long: " << LONG_MIN << " to " << LONG_MAX << "\n";
    std::cout << "Range of long long: " << LONG_LONG_MIN << " to " << LONG_LONG_MAX << "\n";
    std::cout << "Range of long long int: " << LLONG_MIN << " to " << LLONG_MAX << "\n";

    return 0;
}

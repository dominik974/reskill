#include <iostream>
#include "rectangle.h"


int main() {
    Rectangle r(4.5, 3.2);

    std::cout << r.calculateArea() << "\n";

    return 0;
}
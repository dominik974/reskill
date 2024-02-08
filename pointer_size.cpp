#include <iostream>

int main()
{
    int a_int = 0;
    char b_char = 'A';
    float c_float = 0;
    double d_double = 0;

    int *ptr_a = &a_int;
    char *ptr_b = &b_char;
    float *ptr_c = &c_float;
    double *ptr_d = &d_double;

    std::cout << "Size of int pointer:\t" << sizeof(ptr_a) << " Bytes\t(" << ptr_a << ")\n";
    std::cout << "Size of char pointer:\t" << sizeof(ptr_b) << " Bytes\t(" << ptr_b << ")\n";
    std::cout << "Size of float pointer:\t" << sizeof(ptr_c) << " Bytes\t(" << ptr_c << ")\n";
    std::cout << "Size of double pointer:\t" << sizeof(ptr_d) << " Bytes\t(" << ptr_d << ")\n";

    return 0;
}

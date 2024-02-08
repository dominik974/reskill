#include <stdio.h>
#include <math.h>

int main()
{
    int decnumber;
    printf("Enter a decimal number: ");
    scanf("%d", &decnumber);
    printf("Hexadeciaml: %X, Octal: %o", decnumber, decnumber);
    return 0;
}

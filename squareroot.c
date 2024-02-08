#include <stdio.h>
#include <math.h>

int main()
{
    double number;
    double snumber;
    printf("Enter a number: ");
    scanf("%lf", &number);
    snumber = sqrt(number);
    printf("%f", snumber);
    return 0;
}

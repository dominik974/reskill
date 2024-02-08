#include <stdio.h>

int main()
{
    char option;
    float value, result;
    printf("Convert Celsius into Fahrenheit (a), Convert Fahrenheit into Celsius (b)\n");
    scanf("%s", &option);
    printf("Temperature?\n");
    scanf("%f", &value);
    if (option == 'a')
    {
        result = value * 1.8 + 32;
    }
    else
    {
        result = (value - 32) * 5 / 9;
    }
    printf("Result:%.2f", result);
    return 0;
}

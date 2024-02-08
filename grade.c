#include <stdio.h>

int main()
{
    float grade;
    int repeat = 1;
    while (repeat)
    {
        printf("\nEnter a grade:\n");
        scanf("%f", &grade);

        if (grade < 0 || grade > 100)
        {
            printf("Error. Not a valid value.\n");
        }
        else if (grade >= 90)
        {
            printf("A\n");
        }
        else if (grade >= 80)
        {
            printf("B\n");
        }
        else if (grade >= 70)
        {
            printf("C\n");
        }
        else if (grade >= 60)
        {
            printf("D\n");
        }
        else if (grade >= 0)
        {
            printf("F\n");
        }
        else
        {
            printf("Error\n");
            return 1;
        }
        printf("\nCalculate another grade? 1:Yes, 0:No\n");
        scanf("%i", &repeat);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int price, mpg, repeat = 1;

    while (repeat)
    {
        printf("Price in Euros?\n");
        scanf("%d", &price);
        printf("Fuel efficiency in MPG?\n");
        scanf("%d", &mpg);

        if ((price < 20000 && mpg >= 30) || price < 15000)
        {
            printf("You should consider buying this car!\n");
        }
        else
        {
            printf("You might want to look for another option.\n");
        }

        printf("\nDo you want to evaluate another car? No: 0, Yes: other than 0\n");
        scanf("%d", &repeat);
    }
    return 0;
}

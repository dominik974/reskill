#include <stdio.h>

int main()
{
    int price, mpg, erange;
    char repeat_char = 'y';
    char electric;

    while (repeat_char == 'y')
    {
        printf("Do you want to evaluate an electric car? (y/n)\n");
        scanf("%s", &electric);

        if (electric == 'y')
        {
            printf("Price in Euros for the electric car?\n");
            scanf("%d", &price);
            printf("Range in km?\n");
            scanf("%d", &erange);
            if ((price < 30000 && erange >= 200) || price < 20000)
            {
                printf("You should consider buying this car!\n");
            }
            else
            {
                printf("You might want to look for another option.\n");
            }
        }

        printf("Price in Euros for the traditional car?\n");
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

        printf("\nDo you want to evaluate another electric car? (y/n)\n");
        scanf("%s", &repeat_char);
    }
    return 0;
}

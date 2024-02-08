#include <stdio.h>
#include <string.h>

int main()
{
    char password[] = "secret123";
    char input[10];
    int maxtry = 3;
    char retry;

    do
    {
        int result = 1;
        int numtry = 0;
        while (result == 1 && numtry < maxtry)
        {
            printf("Enter a password: ");
            scanf("%s", input);
            result = strcmp(password, input);
            numtry++;
            if (result == 0)
            {
                printf("Password OK\n");
            }
            else if (numtry == maxtry)
            {
                printf("Too many tries\n");
            }
        }

        printf("Try again? (y/n)");
        scanf("%s", &retry);

    } while (retry == 'y');

    return 0;
}

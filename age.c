#include <stdio.h>

int main()
{
    char fname[30], lname[30];
    int by, age;
    printf("First name: ");
    scanf("%s", fname);
    printf("Last name: ");
    scanf("%s", lname);
    printf("Year of birth: ");
    scanf("%d", &by);
    age = 2023 - by;
    printf("%s %s (%d years old)\n", fname, lname, age);
    return 0;
}

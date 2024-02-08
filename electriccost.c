#include <stdio.h>

int main()
{
    float consumption, price, anualcost;
    printf("Daily consumption in kWh:");
    scanf("%f", &consumption);
    printf("Price per kWh in Euro: ");
    scanf("%f", &price);
    anualcost = consumption * 365 * price;
    printf("Anual coasts: %.2f Euro", anualcost);
    return 0;
}

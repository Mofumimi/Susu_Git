#include <stdio.h>

int main()
{
    int price, onlinePrice;
    float discount = 0.95;

    printf("Kerem a termek arat: ");
    scanf("%d", &price);

    onlinePrice = (price * discount) + 2000;
    
    if (onlinePrice < price)
    {
        printf("You should buy online");
    }
    else if (onlinePrice > price)
    {
        printf("You should buy in person");
    }
    else
    {
        printf("The prices are equal");
    }
    return 0;
}
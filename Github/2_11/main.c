#include <stdio.h>

int main()
{
    int base, power, i, result = 1;
    printf("Adja meg a hatvany alapot es kitevot veszovel elvalaszva: ");
    scanf("%d, %d", &base, &power);
    if (base > 0 || power > 0)
    {
        for (i = 1; i <= power; i++)
        {
            result *= base;
        }
    }
    else if(base == 0 && power == 0)
    {
        result = 1;
    }
    else
    {
        printf("A szamok nem megfeleloek.");
    }

    printf("%d", result);
    return 0;
}
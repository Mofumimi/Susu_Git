#include <stdio.h>

int main()
{
    int number;

    printf("Adjon meg egy szamot: ");
    scanf("%d", &number);

    if (number % 3 == 0)
    {
        if (number % 6 == 0)
        {
            printf("divisible by 3, divisible by 6\n");
        }
        else
        {
            printf("divisible by 3, not divisible by 6\n");
        }
    }
    else
    {
        printf("not divisible by 3\n");
    }
    return 0;
}
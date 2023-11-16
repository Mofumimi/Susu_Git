#include <stdio.h>

int main()
{
    int a;
    printf("Adja meg a szamot: ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
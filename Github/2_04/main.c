#include <stdio.h>

int main()
{
    int a, b;
    printf("Kerek ket szamot: ");
    scanf("%d, %d", &a, &b);
    if (a > b)
        printf("%d", a);
    else if (a < b)
        printf("%d", b);
    else
        printf("The given numbers are equal");
    return 0;
}
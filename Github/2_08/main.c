#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Adjon meg egy szamot: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("Az osszeg: %d\n", sum);
    return 0;
}
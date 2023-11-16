#include <stdio.h>

int main()
{
    int n, i, count = 0;
    printf("Adjon meg egy szamot: ");
    scanf("%d", &n);
    if(n == 0)
    {
        printf("A 0-val nem lehet osztani.\n");
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
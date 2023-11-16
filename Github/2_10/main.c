#include <stdio.h>

int main()
{
    int n, i = 1, factorial = 1;
    printf("Adjon meg egy szamot: ");
    scanf("%d", &n);
    
    if ( n > 0 && n <= 10)
    {
        for (i = 1; i <= n; i++)
        {
            factorial *= i;
        }
    }
    else if(n == 0)
    {
        factorial = 1;
    }
    else
    {
        printf("A szam nem megfelelo.");
    }

    printf("A szam faktorialisa: %d", factorial);
    return 0;
}
#include <stdio.h>

int main()
{
    
    int n1, n2, i, numOfPrimes = 0, j, count = 0;

    printf("Adja meg az intervallum kezdo es vegpontjat vesszovel elvalaszva: ");
    scanf("%d, %d", &n1, &n2);

    for (i = n1; i < n2; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }

        }
        if (count == 0)
        {
            numOfPrimes++;
        }
        count = 0;
    }
    
    printf("%d", numOfPrimes);
    return 0;
}
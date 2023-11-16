#include <stdio.h>

int main()
{
    int ev1, ev2, i, szokoevek = 0;

    printf("Adja meg az intervallum kezdo es vegpontjat vesszovel elvalaszva: ");
    scanf("%d, %d", &ev1, &ev2);

    for (i = ev1; i < ev2; i++)
    {
        if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
        {
            szokoevek++;
        }
    }

    printf("A szokoevek szama: %d", szokoevek);
    
    return 0;
}
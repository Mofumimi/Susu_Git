#include <stdio.h>

int main()
{
    int a, b;
    double szamtani_kozep;
    printf("Adj meg ket szamot: ");
    scanf("%d, %d", &a, &b);
    szamtani_kozep = (a + b) / 2.0;
    printf("A ket szam szamtani kozepa: %.2f", szamtani_kozep);

    return 0;
}
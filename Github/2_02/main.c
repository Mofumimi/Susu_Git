#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;    
    float mertani_kozep;
    printf("Adja meg a szamokat vesszovel elvalasztva: ");
    scanf("%d,%d", &a, &b);
    mertani_kozep = sqrt(a * b);
    printf("A szamok mertani kozepa: %.2f", mertani_kozep);
    return 0;
}

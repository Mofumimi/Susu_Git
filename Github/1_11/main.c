#include <stdio.h>
#include <math.h>
int main()
{
    float oszto, osztando, div;
    double maradek;
    printf("Kerem az osztandot es az osztot: ");
    scanf("%f, %f", &osztando, &oszto);
    div = osztando / oszto;
    maradek = fmod(osztando, oszto);
    div = floor(div);
    printf("osztand / oszto = %.f, maradek: %.1f", div, maradek);
    return 0;
}
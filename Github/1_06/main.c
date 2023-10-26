#include <stdio.h>
#include <math.h>

int main(){

    int a, b, c, ker;
    double Heron, teru, s, ayo;

    printf("Adja meg a haromszog 3 oldalat ( pl. 3,4,5): ");
    scanf("%d,%d,%d", &a,&b,&c);
    
    ker = a + b + c;
    s = ker / 2;
    Heron = s*(s-a)*(s-b)*(s-c);
    teru = sqrt(Heron);

    printf("A 3szog terulete %.2lf cm^2\nA 3szog kerulete %d cm", teru, ker);

    return 0;
}
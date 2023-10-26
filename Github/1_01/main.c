#include <stdio.h>

int main(){

    int a, b;
    printf("Adja meg a teglalap 'A' es 'B' oldalat (pl. 5, 6): ");
    scanf("%d,%d", &a, &b);

    int ter = a * b;
    int ker = (a + b) * 2;

    printf("A teglalap kerulete: %d, A teglalap terulete: %d\n", ker, ter);

    return 0;
}
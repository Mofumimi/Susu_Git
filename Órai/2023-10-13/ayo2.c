#include <stdio.h>

int main() {
    int szam, faktorialis = 1;

    printf("Kerem adja meg a szamot (0 es 10 kozott): ");
    scanf("%d", &szam);

    if (szam < 0 || szam > 10) {
        printf("Hibas bemenet. A szamnak 0 es 10 kozott kell lennie.\n");
    } else {
        for (int i = 1; i <= szam; i++) {
            faktorialis *= i;
        }
        printf("%d! = %d\n", szam, faktorialis);
    }

return 0;
}
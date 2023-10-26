#include <stdio.h>

int main() {
    double szam, osszeg = 0.0;

    printf("Adjon meg szamokat, vagy irja be a 'q' karaktert a befejezeshez.\n");

    while (1) {
        printf("Kerem adja meg egy szamot (q a kilepeshez): ");
        if (scanf("%lf", &szam) == 1) {
            osszeg += szam;
        } else {
            char karakter;
            scanf(" %c", &karakter);
            if (karakter == 'q') {
                break;
            } else {
                printf("Hibas bemenet. Kerem adjon meg egy szamot vagy a 'q' karaktert a kilepeshez.\n");
            }
        }
    }

    printf("Az osszeg: %.2lf\n", osszeg);

return 0;
}
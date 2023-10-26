#include <stdio.h>

int main() {
    char tipus;
    int perc;
    double osszeg = 0.0;

    printf("Add meg a hivasok adatait, vagy irj 'q'-t a befejezeshez.\n");

    while (1) {
        printf("Hivas tipusa (1: halozaton belul, 2: halozaton kivul, 3: kulfold): ");
        scanf(" %c", &tipus);

        if (tipus == 'q') {
            break;
        }

        if (tipus != '1' && tipus != '2' && tipus != '3') {
            printf("Hibas bemenet. A hivas tipusa csak 1, 2 vagy 3 lehet.\n");
            continue;
        }

        printf("Hany percig tartott a hivas (minimum 1 perc): ");
        scanf("%d", &perc);

        if (perc < 1) {
            printf("Hibas bemenet. A hivasnak legalabb 1 percig kellett tartania.\n");
            continue;
        }

        double percdij;

        switch (tipus) {
            case '1':
                percdij = 40.0;
                break;
            case '2':
                percdij = 60.0;
                break;
            case '3':
                percdij = 100.0;
                break;
        }

        double hivasdij = percdij * perc;
        osszeg += hivasdij;

        printf("A hivas dija: %.2lf Ft\n", hivasdij);
    }
    printf("A telefonszamla vegosszege: %.2lf Ft\n", osszeg);

return 0;
}
#include <stdio.h>

int main() {
    double alap, kitevo, eredmeny = 1.0;

    printf("Kerem adja meg a hatvany alapot (pozitiv egesz szam): ");
    scanf("%lf", &alap);

    if (alap <= 0) {
        printf("Hibas bemenet. A hatvany alapnak pozitiv egesz szamnak kell lennie.\n");
    } else {
        printf("Kerem adja meg a hatvany kitevot (nemnegativ egesz szam): ");
        scanf("%lf", &kitevo);

        if (kitevo < 0) {
            printf("Hibas bemenet. A hatvany kitevo nemnegativ egesz szam kell legyen.\n");
        } else {
            for (int i = 0; i < kitevo; i++) {
                eredmeny *= alap;
            }
            printf("%.2lf ^ %.2lf = %.2lf\n", alap, kitevo, eredmeny);
        }
    }

return 0;
}
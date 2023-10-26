#include <stdio.h>

int isSzokoev(int ev) {
    return (ev % 4 == 0 && ev % 100 != 0) || (ev % 400 == 0);
}

int evHanyadikNapja(int ev, int ho, int nap) {
    int napokAHonapban[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (ho < 1 || ho > 12 || nap < 1 || nap > napokAHonapban[ho] + (ho == 2 && isSzokoev(ev))) {
        printf("Hibas datum!\n");
        return 1;
    }

    int napszam = nap;
    for (int i = 1; i < ho; i++) {
        napszam += napokAHonapban[i];
    }

    if (ho > 2 && isSzokoev(ev)) {
        napszam += 1;
    }

    return napszam;
}

int main() {
    int ev, ho, nap;
    printf("Adja meg az evet, a honapot es a napot (pl. 2020.03.01): ");
    scanf("%d.%d.%d", &ev, &ho, &nap);

    int eredmeny = evHanyadikNapja(ev, ho, nap);
    if (eredmeny != 1) {
        printf("Az ev %d. napja.\n", eredmeny);
    }

    return 0;
}
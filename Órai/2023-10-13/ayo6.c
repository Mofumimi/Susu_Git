#include <stdio.h>

int main() {
    int osszeg;
    
    printf("Kerem adja meg az osszeget (pozitiv, 5-tel oszthato szam): ");
    scanf("%d", &osszeg);

    if (osszeg <= 0 || osszeg % 5 != 0) {
        printf("Hibas bemenet. Az osszeg pozitiv es 5-tel oszthato kell legyen.\n");
        return 1;
    }

    printf("Beolvasott osszeg: %d\n", osszeg);

    int cimletek[] = {200, 100, 50, 20, 10, 5};
    int darabszamok[6] = {0};

    for (int i = 0; i < 6; i++) {
        while (osszeg >= cimletek[i]) {
            darabszamok[i]++;
            osszeg -= cimletek[i];
        }
        printf("Cimlet: %d -> %d x %d = %d\n", cimletek[i], darabszamok[i], cimletek[i], darabszamok[i] * cimletek[i]);
        
    }

    return 0;
}
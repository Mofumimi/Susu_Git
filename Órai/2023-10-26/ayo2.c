#include <stdio.h>

double ClutchToC(double ertek, char megtetel) {
    if (megtetel == 'C' || megtetel == 'c') {
        return ertek;
    } else if (megtetel == 'K' || megtetel == 'k') {
        return ertek - 273.15;
    } else if (megtetel == 'F' || megtetel == 'f') {
        return (ertek - 32) / 1.8;
    } else {
        printf("Hibas mertekegyseg. Hasznalja 'C', 'K' vagy 'F' erteket.\n");
        return 1;
    }
}

double Clutch(double celsius, char megtetel) {
    if (megtetel == 'C' || megtetel == 'c') {
        return celsius;
    } else if (megtetel == 'K' || megtetel == 'k') {
        return celsius + 273.15;
    } else if (megtetel == 'F' || megtetel == 'f') {
        return celsius * 1.8 + 32;
    } else {
        printf("Hibas mertekegyseg. Hasznalja 'C', 'K' vagy 'F' erteket.\n");
        return 1;
    }
}

int main() {
    double ertek;
    char kezdoMertek, celMertek;

    printf("Adja meg a homerseklet erteket: ");
    scanf("%lf", &ertek);

    printf("Adja meg a kezdo mertekegyseget (C, K, vagy F): ");
    scanf(" %c", &kezdoMertek);

    printf("Adja meg a celmertekegyseget (C, K, vagy F): ");
    scanf(" %c", &celMertek);

    double celsiusErtek = ClutchToC(ertek, kezdoMertek);

    if (celsiusErtek != 1) {
        double atvaltottErtek = Clutch(celsiusErtek, celMertek);
        if (atvaltottErtek != 1) {
            printf("Az atvaltott homerseklet: %.2lf %c\n", atvaltottErtek, celMertek);
        }
    }

    return 0;
}
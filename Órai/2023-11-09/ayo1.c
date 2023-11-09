#include <stdio.h>

double avgcalc(int* jegyek, int tantargySzam) {
    int sum = 0;

    for (int i = 0; i < tantargySzam; i++) {
        sum += jegyek[i];
    }

    return (double)sum / tantargySzam;
}

double sulyAtlag(int* jegyek, int* kredit, int tantargySzam) {
    int sum = 0, kreditsum = 0;

    for (int i = 0; i < tantargySzam; i++) {
        sum += kredit[i] * jegyek[i];
        kreditsum += kredit[i]; 
    }

    return (double)sum / kreditsum;
}

int main() {
    int tantargy[] = {5, 3, 4, 2, 4};
    int jegyek[] = {5, 3, 4, 4, 2};

    int tantargySzam = sizeof(tantargy) / sizeof(tantargy[0]);

    double avg = avgcalc(jegyek, tantargySzam);
    double sulyavg = sulyAtlag(jegyek, tantargy, tantargySzam);

    printf("A vizsgajegyek atlaga: %.2lf\n", avg);
    printf("Kreditekkel sulyozott atlag: %.2lf\n", sulyavg);

    return 0;
}
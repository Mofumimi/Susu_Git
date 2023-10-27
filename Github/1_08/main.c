#include <stdio.h>
#include <math.h>

int main(){

    double num, resu;

    printf("Adjon meg egy szamot: ");
    scanf("%lf",&num);

    resu = fabs(num);

    printf("|%.2lf| = %.2lf", num, resu);


    return 0;
}
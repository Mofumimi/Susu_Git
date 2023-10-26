#include <stdio.h>

void egeszBeker(int*);
void CollatzSzamsor(int);

int main(){

    int szam;
    egeszBeker(&szam);
    printf("Bekert szam: %d\n", szam);

    return 0;
}

void egeszBeker(int*szam){

    int jo;

    do{
        jo =1;
        printf("Kerek egy poz.egesz szamot!\nszam:");
        if (scanf("%d",szam) != 1){
            printf("Hibas adat!");
        }
        while(getchar() != '\n');

    } while (!jo || *szam < 1);

    return;
}
void CollatzSzamsor(int szam)

{
    int i = 1;

    while (szam != 1){
        if (szam % 2 == 0){
            szam /= 2;
        } else {
            szam = szam * 3 + 1;
        }
        printf("%d. szam: %d", i , szam);
        i++;
    }

    return;
}
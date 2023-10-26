#include <stdio.h>

int main(){
    int napSorszama;
    int HanyNapig;
    int eredmeny;

    printf("Kerem a nap sorszamat:\n");
    printf("Nap sorszama:");
    scanf("%d", &napSorszama);

    printf("Kerem adja meg hany napig lesz tavol:\n");
    printf("Tavol levo napok szama:");

    scanf("%d", &HanyNapig);

    switch (napSorszama){
    case 1: 
        printf("Hetfo\n");
        break;
    case 2: 
        printf("Kedd\n");
        break;
    case 3: 
        printf("Szerda\n");
        break;
    case 4: 
        printf("Csutortok\n");
        break;
    case 5: 
        printf("Pentek\n");
        break;
    case 6: 
        printf("Szombat\n");
        break;
    case 7: 
        printf("Vasarnap\n");
        break;
    default: 
        printf("1-7 varnek szamot\n");
        break;
    }

return 0;
}
#include <stdio.h>

int main(){

    int x, year = 365, yeartemp = 0, week = 7, weektemp = 0, day = 1, daytemp = 0;

    printf("Adjon meg egy szamot: ");
    scanf("%d", &x);

    while (x >= year){
        x = x - 365;
        yeartemp = yeartemp + 1;
    }
    while (x >= week){
        x = x - 7;
        weektemp = weektemp + 1;
    }
    while (x >= day){
        x = x - 1;
        daytemp = daytemp + 1;
    }
    

    printf("%d year(s) %d week(s) %d day(s)", yeartemp, weektemp, daytemp);

    return 0;
}
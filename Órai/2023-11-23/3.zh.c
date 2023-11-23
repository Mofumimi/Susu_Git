#include <stdio.h>
#include <math.h>

double asd(int input);

int main(){

    double ayo = 0.0;
    int inp, valid;
    printf("Adjon meg egy szamot 1.000 es 10.000 kozott: ");

    do {
        valid = 1;
        if (scanf("%d", &inp) !=1){
            valid = 0;
            printf("Kerem szamot adjon meg 1.000 es 10.000 kozott: ");
        } else if (inp < 1000 || inp > 10000) {
            valid = 0;
            printf("Hibas ertek. Kerem adjon meg egy szamot az adott halmazon belul: ");
        } 
        while(getchar() != '\n');
    } while (!valid);
     
    ayo = asd(inp);
    printf("Ertek: %lf", ayo);
}

double asd(int input){

    double pi = 0.0, dht;

    for (int i = 1; i <= input; i++){
        pi = pi + 1 / pow(i, 2);
    }
    dht = sqrt(pi * 6);

    return dht;
}
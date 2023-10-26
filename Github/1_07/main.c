#include <stdio.h>
#include <math.h>

int main(){

    int a, b;
    double result1, result2, atfo;
    
    printf("Adja meg a 2 befogo erteket ( pl. 20,20 ): ");
    scanf("%d,%d", &a, &b);

    result1 = pow(a, 2);
    result2 = pow(b, 2);
    atfo = result1 + result2;

    printf("A oldal negyzete: %.2lf\nB oldal negyzete: %.2lf\n", result1, result2);
    printf("Az atfogo: %.2lf", atfo);

    return 0;
}
#include <stdio.h>

int main(){

    int a, b, c, fel, ter;
    
    printf("Adja meg a teglatest 3 oldalat (pl. 10, 5, 4 ): ");
    scanf("%d, %d, %d", &a, &b, &c);

    fel = 2 * (a*b + a*c + b*c);
    ter = a*b*c;

    printf("A teglatest felszine: %d\nA teglatest terfogata: %d", fel, ter);

    return 0;
}
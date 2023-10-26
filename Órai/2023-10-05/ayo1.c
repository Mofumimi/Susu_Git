#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, x1, x2;
    int drw;

    printf("Provide 'a': ");
    scanf("%lf", &a);
    if (a <= 0){
        printf("'a' cannot be smaller than 0");
    } else {
    printf("Provide 'b': ");
    scanf("%lf", &b);
    printf("Provide 'c': ");
    scanf("%lf", &c);

    double kon = ( b * b ) - ( 4 * a * b );

    if ( kon > 0){
       x1 = ( -b + sqrt(kon)) / ( 2 * a );
       x2 = ( -b - sqrt(kon)) / ( 2 * a );
       printf("\nA gyokok: x1: %lf, x2: %lf\n ", x1, x2);
    }
    else if ( kon == 0){
        double x3 = -b / ( 2 * a );
        printf("\nEredmeny: %lf", x3);
    } else {
        printf("\nNincs megoldas");
    }
    }

    return 0;
}
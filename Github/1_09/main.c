#include <stdio.h>
#include <math.h>

int main(){

    double x, xy, yx;

    printf("Adjon meg egy szamot: ");
    scanf("%lf", &x);

    xy = ceil(x);
    yx = floor(x);

    printf("A megadott szam alatt %.2lf es felett %.2lf levo egesz szam.", yx, xy); 

    return 0;
}
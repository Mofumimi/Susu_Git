#include <stdio.h>

int main(){


double ao, bo, co;
    printf("Provide 'a': ");
    scanf("%lf", &ao);
    printf("Provide 'b': ");
    scanf("%lf", &bo);
    printf("Provide 'c': ");
    scanf("%lf", &co);

    if ( co < ao + bo || ao < bo + co || bo < ao + co ){
        printf("Valid triangle");
    } else {
        printf("Invalid triangle");
    }
}
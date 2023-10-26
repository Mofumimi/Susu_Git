#include <stdio.h>

int is_prime(int num){
    if (num <= 1){
        return 0;
    }
    for (int i = 2; i * i <= num; i++){
        if (num % i == 0){
            return 0;
        }
    }
return 1;
}

int main(){

    int numb;
    printf("Adjon meg egy szamot: ");
    scanf("%d", &numb );

    if (is_prime(numb)){
        printf("A(z) %d egy prim szam. ", numb);
    } else {
        printf("A(z) %d nem prim szam...", numb);
    }
}
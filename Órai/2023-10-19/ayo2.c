#include <stdio.h>

int lockpick(int also, int felso){
    int i;
    int osszeg = 0;

    for (i = also; i <= felso; i++){
        if (i % 3 == 0 || i % 5 == 0){
            osszeg += i;
        }
        
    }
    printf("Szamzar kodja: %d \n", lockpick);

    return osszeg;
}

int main(){

    int lock;
    lock = lockpick(1, 1000);


    return 0;
}
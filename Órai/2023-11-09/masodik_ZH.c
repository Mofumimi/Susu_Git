#include <stdio.h>

int main(){
    int ayo = 0, temp = 1;

    while(1){
    printf("Irjon be egy szamot 5 es 20 kozott: ");
    scanf("%d", &ayo);
    if (ayo < 5 || ayo > 20){
        temp = 0;
    } else  {   temp = 1;   }
    if (temp == 1){
        while(ayo !=1){
        if (ayo %2==0){
            ayo=ayo/2;
        } else {
            ayo = (ayo * 3) + 1;
        }
        printf("%d ", ayo);
        }   
       
    } else {   printf("Helytelen ertek\n");   }
    
    if (ayo == 1){
        break;
    }
    }

    return 0;
}
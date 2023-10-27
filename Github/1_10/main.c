#include <stdio.h>

int main(){

    int osztando, oszto, maradek, eredmeny;

    printf("Adjon meg ketto egesz szamot ( pl 101, 2 ): ");
    scanf("%d, %d", &osztando, &oszto);

    eredmeny = osztando / oszto;
    maradek = osztando - (eredmeny * oszto);

    printf("%d / %d = %d, remainder: %d ", osztando, oszto, eredmeny, maradek);

    return 0;
}
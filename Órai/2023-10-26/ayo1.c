#include <stdio.h>

void Fido(int hatar) {
    int prev = 1;
    int curr = 1;
    int nyx;

    printf("Fibonacci sorozat: %d, %d, ", prev, curr);

    for (int i = 2; i < hatar; i++) {
        nyx = prev + curr;
        printf("%d, ", nyx);

        prev = curr;
        curr = nyx;
    }
}

int main() {
    int hatar;
    printf("Adja meg a Fibonacci sorozat kiirando hatarerteket: ");
    scanf("%d", &hatar);

    if (hatar < 2) {
        printf("A hatarertek legalabb 2-nek kell lennie a Fibonacci sorozat megjelenitesehez.\n");
    } else {
        Fido(hatar);
    }

    return 0;
}
#include <stdio.h>

int szokoeve(int ev) {
    if ((ev % 4 == 0 && ev % 100 != 0) || (ev % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int also, felso;
    int count = 0;

    printf("Add meg a tartomany also hatarat: ");
    scanf("%d", &also);
    printf("Add meg a tartomany felso hatarat: ");
    scanf("%d", &felso);

    printf("A szokoevek a tartomanyban: ");
    for (int ev = also; ev <= felso; ev++) {
        if (szokoeve(ev)) {
            printf("%d ", ev);
            count++;
        }
    }

    printf("\nA tartomanyban osszesen %d szokoev van.\n", count);

return 0;
}
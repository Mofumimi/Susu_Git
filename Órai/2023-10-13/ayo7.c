#include <stdio.h>

int main() {
    char operator;
    double num1, num2, eredmeny;
    char folytat;

    do {
        printf("Kerem adja meg az elso szamot: ");
        scanf("%lf", &num1);

        printf("Kerem valasszon muveletet (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Kerem adja meg a masodik szamot: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                eredmeny = num1 + num2;
                break;
            case '-':
                eredmeny = num1 - num2;
                break;
            case '*':
                eredmeny = num1 * num2;
                break;
            case '/':
                if (num2 == 0) {
                    printf("Hibas bemenet. Nem lehet nullaval osztani.\n");
                    continue;
                } else {
                eredmeny = num1 / num2;
                break;
                }
            default:
                printf("Hibas bemenet. Ervenytelen muvelet.\n");
                continue;
        }

        printf("Eredmeny: %.2lf\n", eredmeny);

        printf("Folytatja? (igen [i]/nem [n]): ");
        scanf(" %c", &folytat);

    } while (folytat == 'i');

return 0;
}
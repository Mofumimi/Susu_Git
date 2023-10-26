#include <stdio.h>
#include <string.h>

int main(){

    double num1, num2, result;
    char op;

    printf("Adja meg az elso szamot: ");
    scanf("%lf", &num1);
    printf("Adja meg a muveletet ( + - * / %% ): ");
    scanf("%s", &op);
    printf("Adja meg az masodik szamot: ");
    scanf("%lf", &num2);
    
    switch (op){
    case '+':
        result = num1 + num2;
        printf("Az eredmeny: %.0lf\n", result);
        break;
    case '-':
        result = num1 - num2;
        printf("Az eredmeny: %.0lf\n", result);
        break;
    case '*':
        result = num1 * num2;
        printf("Az eredmeny: %.0lf\n", result);
        break;
    case '/':
        if (num2 != 0){
            result = num1 / num2;
            printf("Az eredmeny: %.2lf\n", result);
            break;
        } else {
            printf("0-aval nem lehet osztani");
            break;
        }
    case '%':
        if (num2 != 0) {
            result = (int)num1 % (int)num2;
            printf("Az eredmeny: %.0lf\n", result);
            break;
        } else {
            printf("0-val valo modulo muvelet nem lehetseges.\n");
            break;
        }
    default:
        printf("Hibas muvelet");
        break;
    }

    return 0;

    }
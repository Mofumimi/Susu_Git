#include <stdio.h>

int main()
{
    int ascii;
    printf("Enter an ASCII code: ");
    scanf("%d", &ascii);

    if (ascii >= 67 && ascii <= 122)
    {
        printf("%c", ascii);
    }
    else
    {
        printf("This number is not a letter in ASCII");
    }
    return 0;
}
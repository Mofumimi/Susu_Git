#include <stdio.h>
#include <math.h>

int main()
{
    int radius;
    double area, perimiter;
    printf("Adja meg a kor sugarat: ");
    scanf("%d", &radius);
    area = pow(radius, 2) * M_PI;
    perimiter = 2 * radius * M_PI;
    printf("A kor terulete: %.2f\n", area);
    printf("A kor kerulete: %.2f\n", perimiter);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int minIndexSearch(double* tomb, int meret);
int maxIndexSearch(double* tomb, int meret);
int lowerThanLimit(double* tomb, int meret, double limit);
int isMonoton(double* tomb, int meret);
void scanArray(double* tomb, int meret);
void printArray(double* tomb, int meret);
double avg(double* tomb, int meret);
void randomizeArray(double* tomb, int meret, double upperLimit, double lowerLimit);
void divegenceFromAvg(double* tomb, int meret, double avg);
int main()
{
    srand(time(NULL));
    int darab;
    double euro[] = {380, 385, 375};
    double limit = 382; 
    int atlag = 0;
    int meret = sizeof(euro) / sizeof(double);
    int minIndex, maxIndex; 
    double max, min;
    randomizeArray(euro, meret, 400, 300);
    minIndex = minIndexSearch(euro, meret);
    maxIndex = maxIndexSearch(euro, meret);
    max = euro[maxIndex];
    min = euro[minIndex];

    //scanArray(euro, meret);
    //printArray(euro, meret);
    divegenceFromAvg(euro, meret, avg(euro, meret));

    printf("Az euro minimum ertek: %.2f, ez a %d heten volt\n", min, minIndex + 1);
    printf("Az euro maximuma erteke: %.2f, ez a %d heten volt\n", max, maxIndex + 1);
    printf("Az euro %d darab eleme kisebb, mint %.2lf\n", lowerThanLimit(euro, meret, limit), limit);
    printf("Az euro monoton novekvo? %s\n", isMonoton(euro, meret)? "igen" : "nem");
    printf("Az euro atlagos ertkeke %.2lf\n", avg(euro, meret));

}

int minIndexSearch(double* tomb, int meret)
{
    int i;
    int minIndex = 0;
    for (i = 1; i < meret; i++)
    {
        if (tomb[i] < tomb[minIndex])
        {
            minIndex = i;
        }
    }
    return minIndex;
}

int maxIndexSearch(double* tomb, int meret)
{
    int i;
    int maxIndex = 0;
    for (i = 1; i < meret; i++)
    {
        if (tomb[i] > tomb[maxIndex])
        {
            maxIndex = i;
        }
    }
    return maxIndex;
}

int lowerThanLimit(double* tomb, int meret, double limit)
{
    int i;
    int darab = 0;
    for (i = 0; i < meret; i++)
    {
        if (tomb[i] < limit)
        {
            darab++;
        }
    }
    return darab;
}

int isMonoton(double* tomb, int meret)
{
    int i;
    int monoton = 1;
    for (i = 1; i < meret; i++)
    {
        if (tomb[i] < tomb[i - 1])
        {
            monoton = 0;
        }
    }
    return monoton;
}

void scanArray(double* tomb, int meret)
{
    int i = 0;
    int jo;
    int beolvasottAdatokSzama;

    printf("HUF/EUR arfolyamok:\n");

    jo = 0;

    do
    {
        printf("%d. ertek: ", i + 1);
        beolvasottAdatokSzama = scanf("%lf", &tomb[i]);
        if (beolvasottAdatokSzama == 1)
        {
            jo = 1;
        }
        else
        {
            if (beolvasottAdatokSzama == -1)
            {
                printf("\n");
            }
            printf("Hibas adat!\n");

            if (beolvasottAdatokSzama == 0)
            {
                while (getchar() != '\n');
            }
        }
    } while (!jo);
    
    return;
}

void printArray(double* tomb, int meret)
{
    int i;
    for (i = 0; i < meret; i++)
    {
        printf("%d. elem %.2f \n", i + 1, tomb[i]);
    }

    return;
}

double avg(double* tomb, int meret)
{
    int i;
    double osszeg = 0;
    for (i = 0; i < meret; i++)
    {
        osszeg += tomb[i];
    }
    return osszeg / meret;
}

void randomizeArray(double* tomb, int meret, double upperLimit, double lowerLimit)
{
    int i;
    upperLimit *= 100;
    lowerLimit *= 100;
    srand(time(NULL));
    for (i = 0; i < meret; i++)
    {
        tomb[i] = rand() % (int)(upperLimit - lowerLimit + 1) + lowerLimit;
        tomb[i] /= 100;
    }
    return;
}

void divegenceFromAvg(double* tomb, int meret, double avg)
{
    int i;
    for (i = 0; i < meret; i++)
    {
        printf("%d. \t %.1lf HUF/EUR \t %6.2lf \n", i + 1, tomb[i], tomb[i] - avg);
    }
    return;
}

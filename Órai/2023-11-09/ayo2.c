#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
srand(time(0));
int random_number = rand() % 100 + 1;

printf("%d", random_number);


}
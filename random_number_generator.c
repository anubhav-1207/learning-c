#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int max_limit;
    printf("Please enter the maximum limit of the random number: ");
    scanf("%d",&max_limit);

    int min_limit;
    printf("Enter the minimum limit too: ");
    scanf("%d",&min_limit);

    int randNum = (rand() % (max_limit - min_limit + 1)) + min_limit;
    printf("%d\n",randNum);
}


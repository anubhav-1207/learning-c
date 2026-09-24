#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    
    int max_limit = 100;
    int min_limit = 50;

    int randomNum = (rand() % (max_limit - min_limit + 1) + min_limit);
    
    int user_input;
    
    while (user_input != randomNum){
        printf("Guess a number: ");
        scanf("%d",&user_input);

        if (user_input > randomNum){
            printf("Guess lower\n");
            continue;
        } else if (user_input < randomNum){
            printf("Guess higher\n");
            continue;
        } else{
            printf("Congatulation! You won!\n");
            break;
        }
    };
}
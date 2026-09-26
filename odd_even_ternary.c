#include <stdio.h>

int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);

    printf("%s",(number % 2 == 0) ? "Even\n" : "Odd\n");
}
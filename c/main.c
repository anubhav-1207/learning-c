#include <stdio.h>

int main(){
    
    char prod[20];
    printf("What? : ");
    scanf("%s",prod);
    // printf("%s",prod);

    int quan;
    printf("How many? : ");
    scanf("%d",&quan);
    // printf("%d",quan);

    float price;
    printf("Each cost? : ");
    scanf("%f",&price);
    // printf("%f",price);

    float total = price*quan;
    printf("Total: %f\n",total);
}
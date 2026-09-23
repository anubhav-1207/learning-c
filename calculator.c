#include <stdio.h>

int main(){
    int choice;
    printf("1. Add\n2.Subtract\n3.Multiply\n4.Divide: \nChoose (1-4): ");
    scanf("%d",&choice);

    float num1;
    printf("Enter operand 1: ");
    scanf("%f",&num1);

    float num2;
    printf("Enter operand 2: ");
    scanf("%f",&num2);
    
    switch(choice){
        case 1:
            printf("%f",num1 + num2);
            break;
        case 2:
            printf("%f",num1 - num2);
            break;
        case 3:
            printf("%f",num1 * num2);
            break;
        case 4:
            printf("%f", num1 / num2);
            break;
        default:
            printf("Invalid choice");
            break;

    }
}
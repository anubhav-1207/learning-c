#include <stdio.h>

void happyBirthday(char name[],int age){
    printf("Happy brithday %s you're %d years old\n",name,age);
}

int main(){
    char name[20];
    int age;

    scanf("%s",name);
    scanf("%d",&age);

    happyBirthday(name, age);
}
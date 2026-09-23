#include <stdio.h>
#include <math.h>

int main(){
    int timesCompounded = 1;
    float rate = 10.0/100;
    float principal = 100;
    float time = 1;

    float total = principal * pow(1 + rate/timesCompounded,time * timesCompounded);
    printf("%f",total);
    


}

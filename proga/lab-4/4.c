#include <stdio.h>
#include <math.h>

int main()
{   //4
    float a=0.0;
    for(double i = 0.1; i <= 1.9;i+= 0.2){
        a += log(i);
    }
    printf("%f",a);

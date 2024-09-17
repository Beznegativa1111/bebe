
#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    float a,b,c,d,e,f,res1,res2,res3;
    printf("Input");
    scanf("%f %f %f %f %f %f",&a, &b, &c,&d,&e,&f);
    res1 = a + b + c + d +e +f;
    res2 = a * b * c * d *e *f;
    if(res1 > res2){
        res3 = res1 - res2;
        printf("сумма больше на %f",res3);
    }
    else{
        res3 = res2 - res1;
        printf("произведение больше на %f",res3);
    }
    return 0;
    //2
    
}

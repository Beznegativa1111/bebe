#include <stdio.h>

int main()
{
    float num,pl,mn = 0.0;
    for(int i = 0; i <= 7; i++){
        printf("введите числа"); scanf("%f",&num);
        if(num > 0){
            pl += 1.0;
        }else{
            mn += 1.0;
        }
    }
    printf("%f\n",pl);
    printf("%f",mn);
}

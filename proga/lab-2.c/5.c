
#include <stdio.h>

int main(){
    float num;
    float min_num = 100000;
    for(int i = 0;i <= 3;i++){
        printf("введите"); scanf("%f",&num);
        if(num < min_num){
            min_num = num;
        }
    }
    printf("%f",min_num);
}

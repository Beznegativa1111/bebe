#include <stdio.h>

int main(){
    int num;
    int min = 10000;
    int max = 0;
    for(int i = 0;i <= 3;i++){
        printf("Введите числа"); scanf("%d",&num);
        if(num < min ){
            min = num;
            max = num;
        }
        if(num > max){
            max = num;
        }
    }
    printf("%d %d",max - min);

}

#include <stdio.h>

int main(){
   float num,sum = 0;
   for(int i = 0; i <= 4; i++){
       printf("input"); scanf("%f",&num);
       if(num > 0){
           sum += num;
       }
    }
    printf("%f",sum);
}

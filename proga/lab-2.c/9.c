#include <stdio.h>

int main(){
    int num;
    int max = 0;
    int max_2;
    int max_m;
    for(int i = 0; i <= 3; i++){
         scanf("%d",&num);
            if(num > max){
                max = num;
            }
    }printf("%d",max);
    for(int j = 0; j <= 3; j ++){
            scanf("%d",&num);
            if(num > max_2 && num != max){
                max_2 = num;
            }
          
        }printf(" %d",max_2); 
        max_m = max;
        max = max_2;
        max_2 = max_m;
        
    printf("%d %d",max,max_m);
}


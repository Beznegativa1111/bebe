#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[5];
    int a;
    for(int i = 0; i < 5; i++){
        printf("введите число:");
        scanf("%d",&a);
        arr[i] = a;
    }
    for(int i = 0; i < 5;i++){
        printf("%d",arr[i]);
    }
    
}

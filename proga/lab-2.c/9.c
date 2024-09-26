#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[4]; 
    int a;
    for(int i = 0; i < 4; i++) {
        printf("Введите число: ");
        scanf("%d", &a);
        arr[i] = a;
    }
    int min = arr[0];
    int index = 0;
    int index_2 = 0;
    int max = arr[0];
    for(int i =0; i< 4; i++){
        if(arr[i] < min){
            min = arr[i];
            index = i;
        }
        if(arr[i] > max){
            max = arr[i];
            index_2 = i;
        }
    }
    int temp = arr[index]; 
    arr[index] = arr[index_2]; 
    arr[index_2] = temp;
    
    printf("Массив после обмена максимумов: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
        }
 
    
}

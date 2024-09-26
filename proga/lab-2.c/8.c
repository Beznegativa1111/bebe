#include <stdio.h>

int main() {
    int arr[4];
    int a;
    for(int i = 0; i < 4; i++) {
        printf("Введите число: ");
        scanf("%d", &a);
        arr[i] = a;
    }
    int max = arr[0];
    int max_2 = -500000; 
  
    for(int i = 1; i < 4; i++) {
        if(arr[i] > max) {
            max_2 = max; 
            max = arr[i]; 
        } else if(arr[i] > max_2 && arr[i] != max) {
            max_2 = arr[i]; 
        }
    }

    if (max_2 == -500000) {
        printf("Нет второго максимума.\n");
    } else {
 
        printf("Первый максимум: %d\n", max);
        printf("Второй максимум: %d\n", max_2);
    }

    return 0;
}

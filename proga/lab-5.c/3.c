#include <stdio.h>
#include <stdbool.h>

int main() {
    int n;
    
    printf("Введите число n: ");
    scanf("%d", &n);

   
    if (n < 2) {
        printf("Введенное число должно быть больше или равно 2.\n");
        return 1;
    }

    printf("Простые числа в диапазоне от 2 до %d:\n", n);

    for (int i = 2; i <= n; i++) {
        bool является_простым = true;
        int j = 2;
      
        do {
            if (i % j == 0 && i != j) {
                является_простым = false;
                break; 
            }
            j++;
        } while (j * j <= i);

        if (является_простым) {
            printf("%d ", i); 
        }
    }

    printf("\n");
    
    return 0;
}

#include <stdio.h>

int main() {
    int N, s = 0;


    printf("Введите значение N (>0): ");
    scanf("%d", &N);


    if (N <= 0) {
        printf("N должно быть больше 0.\n");
        return 1; 
    }

 
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            s -= i; 
        } else {
            s += i;  
        }
    }


    printf("Сумма последовательности s = %d\n", s);

    return 0;

}

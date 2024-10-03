#include <stdio.h>
#include <math.h>

int main() {
    double x;
    double sum = 0.0;
    printf("Введите значение x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= 10; i++) {
        double coefficient = 0.18 + (i - 1) * 0.02; 
        double term = pow(coefficient * x, i); 
        sum += term; 
    }

   
    printf("Сумма последовательности S(x) = %.5f\n", sum);

    return 0; 
}

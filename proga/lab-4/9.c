#include <stdio.h>
#include <math.h> // Для функции pow

double factorial(int n) {
    double result = 1.0;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

double calculate_sum(double x, int N) {
    double sum = 1.0; // Начинаем с первого члена ряда (1)
    
    // Вычисляем последующие члены ряда
    for (int i = 1; i <= N; ++i) {
        sum += (pow(x, i) / factorial(i));
    }
    
    return sum;
}

int main() {
    double x;
    int N;

    // Ввод значения x
    printf("Введите значение x: ");
    scanf("%lf", &x);

    // Ввод значения N
    printf("Введите значение N (N > 0): ");
    scanf("%d", &N);

    // Проверка корректности введенного N
    if (N <= 0) {
        printf("Ошибка: N должно быть больше 0.\n");
        return 1;
    }

    // Вычисление суммы ряда
    double result = calculate_sum(x, N);
    
    // Вывод результата
    printf("Сумма ряда для x = %.2f и N = %d равна: %.6f\n", x, N, result);

    return 0;
}

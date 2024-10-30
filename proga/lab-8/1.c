#include <stdio.h>
#include <math.h>

int main() {
    float a = 2.0;  // Начальная граница интегрирования
    float b = 10.0; // Конечная граница интегрирования

    float mass[1001]; // Объявляем массив для сохранения значений функции

    // Массив различных значений n для тестирования
    int n_values[] = {10, 100, 1000};
    int num_tests = sizeof(n_values) / sizeof(n_values[0]);

    // Проходим по каждому значению n
    for (int t = 0; t < num_tests; t++) {
        int n = n_values[t];  
        float h = (b - a) / n; 

        // Вычисляем значения функции для каждого x
        for (int i = 0; i <= n; i++) {
            float x = a + i * h; 
         
            // Проверяем, чтобы избежать логарифма от нуля или отрицательного числа
            if (x > 0) {
                mass[i] = pow(x + 1, 3) * sqrt(log10(x)); 
            } else {
                mass[i] = 0; 
            }
        }

        // Метод трапеций
        float integral_trap = 0.0;
        for (int i = 1; i < n; i++) {
            integral_trap += mass[i]; 
        }
        integral_trap = h * (mass[0] / 2 + integral_trap + mass[n] / 2); 

        // Метод Симпсона
        float integral_simpson = mass[0] + mass[n]; 
        for (int i = 1; i < n; i++) {
            if (i % 2 == 0) {
                integral_simpson += 2 * mass[i]; 
            } else {
                integral_simpson += 4 * mass[i]; 
            }
        }
        integral_simpson *= h / 3; 

        // Вывод результатов
        printf("n = %d\n", n);
        printf("Интеграл методом трапеций: %.6f\n", integral_trap);
        printf("Интеграл методом Симпсона: %.6f\n\n", integral_simpson);
    }

    return 0; // Нормальное завершение программы
}

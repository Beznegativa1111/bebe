#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 5;

int main() {
    srand(time(0));
    int A[N][N];
  // Заполнение исходной матрицы случайными числами
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = rand() % 100;  // Случайные числа от 0 до 99
        }
    }

    // Вывод исходной матрицы
    printf("Исходная матрица:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", A[i][j]);
        }
    printf("\n");
    }

    // Транспонирование матрицы на месте
    for (int i = 0; i < N; i++) {
        for (int j = i + 1; j < N; j++) {
            // Меняем местами A[i][j] и A[j][i]
            int temp = A[i][j];
            A[i][j] = A[j][i];
            A[j][i] = temp;
        }
    }
    
    // Вывод транспонированной матрицы
    printf("Транспонированная матрица:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", A[i][j]);
        }
    printf("\n");
    }

    return 0;
}

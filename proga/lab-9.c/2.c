#include <stdio.h>
#include <stdlib.h>
#include <time.h>


const int  N = 5;

int main() {
    float matrix[N][N];  
    int MAX = 10;
    int MIN = -10;

 
    srand(time(0));
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matrix[i][j] = (float)rand() / RAND_MAX * (MAX - MIN) + MIN;
        }
    }

    printf("Случайные вещественные числа:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%.2f ", matrix[i][j]);
        }
        printf("\n");  
    }
    for (int i = 0; i < N; i++) {
        float sum =0;
        for(int k =0;k<N;k++){
            sum += matrix[i][k];
        }
        for(int j = 0; j < N; j++) {
          
            matrix[i][j]  = matrix[i][j] /  sum;
        }
        
    }
    printf("после\n");
     for (int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            printf("%.2f ,",matrix[i][j]);
        }
        printf("\n");
     }    
}    

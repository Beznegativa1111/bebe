#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int  M =10;
const  int N = 20;
int main()
{
    srand(time(0));
    int A[M][N];
    for(int i =0;i < M;i++){
        for(int j = 0;j< N;j++){
            A[i][j] = rand() %100;
        }
    }
    printf("Исходная матрица:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ",A[i][j]);
        }
        printf("\n");
    }
    for(int i =0;i < M;i++){
        for(int j = 0;j< N;j++){
            int temp = A[i][j];
            A[i][j] = A[i+1][j];
            A[i+1][j] = temp;
        
        }
        i++;
    }
     printf("\nМатрица после замены строк:\n");
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            printf("%3d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
    
    
    
           

}

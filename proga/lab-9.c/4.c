#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int N = 3;
int main()
{
    srand(time(0));
    int A[N][N];
    for(int i =0;i < N;i++){
        int sumrow;
        int sumrow1;
        int sumrow2;
        int sumcol;
        int sumcol1;
        int sumcol2;
        for(int j = 0;j< N;j++){
            A[i][j] = rand() %100;
            sumrow += A[i][j];
            sumrow1 += A[i+1][j+1];
            sumrow2 += A[i+2][j+2];
            sumcol += A[i][j];
            sumcol1 += A[i+1][j+1];
            sumcol2 += A[i+2][j+2];
        }
        
    }
    printf("Исходная матрица:\n");
    for(int i =0;i < N;i++){
        for(int j = 0;j< N;j++){
           printf("%d ,",A[i][j]);
        }
        printf("\n");
    }
    printf("новая матрица");
    for (int i = 0; i < N; i++) {
        int sumrow;
        int sumrow1;
        int sumrow2;
        int sumcol;
        int sumcol1;
        int sumcol2;
        for (int j = 0; j < N; j++) {
            sumrow += A[i][j];
            sumrow1 += A[i+1][j+1];
            sumrow2 += A[i+2][j+2];
            sumcol += A[i][j];
            sumcol1 += A[i+1][j+1];
            sumcol2 += A[i+2][j+2];
            if(sumrow != sumrow1 != sumrow2 != sumcol != sumcol1 != sumcol2 ){
            printf("%d  ",A[i][j]);
    
    }
   

            
       
    
}
}
}

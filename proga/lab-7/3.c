#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 20;
int random_range(int N) 
    {
        return rand() % N;
        
    }

int main()
{  
    srand(time(NULL));
    int i,a = -10, b = 10;
    int j = 0;
    float A[N];
    float B[N];
    for(i = 0;i < N;i++){
        A[i] =(float)rand()*(b-a)/RAND_MAX +a;
    }
    for(i = 0; i < N;i++){
        printf("%f ,",A[i]);
    }
    for(i = 0;i<N;i++){
        if(A[i] >0){
            B[j] = A[i];
            j++;
        }
    }
    if(j==0){
        printf("нету положительных");
        
    }else{
        for(i = 0; i < j; i++) {
            printf("%f\n", B[i]);
        }
        
    
    
    }
}

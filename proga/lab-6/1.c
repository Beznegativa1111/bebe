
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
    int i, A[N],a = -10, b = 10;
    for(i = 0;i < N;i++){
        A[i] = random_range(b - a + 1) + a;
    }
    for(i = 0; i < N;i++){
        printf("%d ,",A[i]);
    }
    printf("\n");
    for(i = 0; i < N; i++){
        if(A[i] < 0){
            printf("%d,", A[i]);
        }
    }
    printf("\n");
    for(i = 0;i < N;i++){
        if(A[i] > 0){
            printf("%d ,",A[i]);
        }
    }
    printf("\n");
    
}

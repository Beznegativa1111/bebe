#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int N = 15;
int random_range(int N) 
    {
        return rand() % N;
        
    }

int main()
{  
    srand(time(NULL));
    int i, A[N],a = 0, b = 10;
    int unical[11] ={0};
    for(i = 0;i < N;i++){
        A[i] = random_range(b - a + 1) + a;
    }
    for(i = 0; i < N;i++){
        printf("%d ,",A[i]);
    }
    for(int i =0;i < N; i++){
        int num = A[i];
        if(unical[num] == 0){
            unical[num] = 1;
            printf("%d", num);
        }
    }
    
    
}

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
    int i,a = 0, b = 20;
    int C[N],D[N];
    for(i = 0;i < N;i++){
        C[i] = random_range(b-a + 1) + a;
        D[i] = random_range(b-a + 1) + a;
    }
    printf("неотсортированные дальше\n");
    for(int i =0;i< N; i++){
        for(int j =0; j < N -i-1;j++){
            if(C[j] > C[j+1]){
                int temp = C[j];
                C[j] = C[j+1];
                C[j+1] = temp;
            }
            if(D[j] > D[j+1]){
                int temp = C[j];
                D[j] = D[j+1];
                D[j+1] = temp;
            }
        }
      
    }
       
    printf("\n");
    for(i = 0; i < N;i++){
        printf("%d, ",C[i]);
    
    }
    printf("\n");
    for(i = 0; i < N;i++){
        printf("%d, ",D[i]);
    
        }
    int E[40];
    int j =0;
    for(i =0;i<40;i++){
        if(C[j] < D[j]){
            E[j] = C[j];
            j++;
        }else if(C[j] == D[j]){
            E[j] = D[j];
            E[j+1] = C[j];
        }else{
            E[j] = D[j];
        }
    }
        
   
    
    printf("\n  йоу:\n");
    for(i = 0; i < 40;i++){
        printf("%d, ",E[i]);
    
    }
        
}  

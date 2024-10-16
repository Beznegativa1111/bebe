#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int n = 20;
int random_range(int n){
    return rand()%n;
    
}
int main(){
    int i, a = 0, b = 10;

    float A[n];
    srand(time(NULL));
    for(i = 0;i < n; i++){
        A[i] = (float)rand()*(b-a)/RAND_MAX + a;
    }
    for(i = 0;i < n;i++){
        printf("%6.2f",A[i]);
    }
    printf("\n");
    for(i = 1; i< n;i++){
        if(A[i] > A[i+1] && A[i] > A[i-1]){
            printf("%6.2f ,",A[i]);
        }
    }
    

}

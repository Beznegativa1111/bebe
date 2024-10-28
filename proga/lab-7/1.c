#include <stdio.h>
#include <math.h>

int main() {
    float A[58];
    float a = 2.14;
    float b = -4.21;
    float c = 3.25;
    float temp;
    float x = -4.5; 

    for (int i = 0; i < 58; i++) {
        A[i] = a * pow(x, 2) * sin(x) + b * x + c;  
        x -= 0.5;  
    }

  
    for (int i = 0; i < 58; i++) {
        for(int j = 0; j < 58 - i - 1; j++) { 
            if(A[j] < A[j + 1]) {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }    
    }

 
    for(int i=0;i<58;i++){
        printf("%f\n",A[i]);
    }
    return 0;
}


#include <stdio.h>
#include <math.h>

int main() {
    float a = -2.0; 
    float b = 5.0; 

    int n_values[] = {10, 100, 1000};
    int num_tests = sizeof(n_values) / sizeof(n_values[0]);
    for (int t = 0; t < num_tests; t++) {
        int n = n_values[t];  
        float h = (b - a) / n; 

        for (int i = 0; i <= n; i++) {
            float x = a + i * h; 
         
            if (x >= 0) {
                mass[i] = pow(x, x) / (10 + pow(x, 3));
            } else {
                mass[i] = 0; 
            }
        }

       
        float integral_trap = 0.0;
        for (int i = 1; i < n; i++) {
            integral_trap += mass[i]; 
        }
        integral_trap = h * (mass[0]/2 + integral_trap + mass[n]/2); 

      
        float integral_simpson = mass[0] + mass[n]; 
        for (int i = 1; i < n; i++) {
            if (i % 2 == 0) {
                integral_simpson += 2 * mass[i]; 
            } else {
                integral_simpson += 4 * mass[i]; 
            }
        }
        integral_simpson *= h / 3; 

       
        printf("n = %d\n", n);
        printf("Интеграл методом трапеций: %.6f\n", integral_trap);
        printf("Интеграл методом Симпсона: %.6f\n\n", integral_simpson);
    }


}

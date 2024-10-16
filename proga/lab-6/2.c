#include <stdio.h>

    int factorial(int c){
    int s = 1;
    for(int i = 1; i <= c;i++){
        s *= i;
    }
    return s;
}
int main(){
    int n;
    printf("Введите число большее нуля");
    scanf("%d",&n);
   if(n < 0){
        printf("числа можно указывать только большие нуля");
    }
    int a[n];
    int fact_n = factorial(n);
    
    for(int i = 0; i < n;i++){
      int fact_i = factorial(i);
        a[i] = fact_n / (fact_i * factorial(n - i));
    }
    for(int i = 0;i < n;i++){
        printf("%d ,",a[i]);
    }
}


#include <stdio.h>
#include <math.h>

int main()

{   //1
    int s = 0;
    for(int i = 0; i <= 117; i++){
        s += i;
    }
    printf("%d\n",s);
    
    //2
    double S = 0.0;
    for(int i = 1; i <= 25;i++){
        S += sin(i);
    }
    printf("%f\n",S);
    
    //3
    double x = 0.0;
    double d;
    scanf("%lf",&d);
    for(int i = 0; i <= d*2;i+=2){
        x += tan(i);
    }
    printf("%f",x);
    
}

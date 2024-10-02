#include <stdio.h>
#include <math.h>

int main() {
    int a=1;
    int b;
    scanf("%d",&b);
    for(int i = 1; i <=5;i++){
        a*= i;
    }
    printf("%d",a);
}

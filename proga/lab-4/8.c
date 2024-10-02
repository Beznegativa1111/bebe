#include <stdio.h>
#include <math.h>

int main() {
    int a = 1;
    for(int i = 2;i<=12;i+=2){
        a*=i;
    }
    printf("%d",a);
}

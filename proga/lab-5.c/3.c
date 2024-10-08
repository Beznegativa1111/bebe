
#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    double i =2.0;
    int k = 0;
    int sum = 0;
    scanf("введите чисдо %d",&a);
    do{

        double x = fmod(i,2);
        if((x != 0) || (i == 2)){
            k += 1;
        }else k = 0;
        sum +=k;
        i++;
        
    }while(i <= a);
    printf("%d", sum);
    

    

}


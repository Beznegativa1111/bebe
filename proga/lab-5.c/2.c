
#include <stdio.h>
#include <math.h>

int main()
{
    double a =2.14;
    double b = -4.21;
    double c = 3.25;
    double x = -4.5;
    double resultaturavnenia  = 0;
    double maxresult = 0;
    double minresult = 99999.0;
    double max_max = 0;
    double min_min = 0;
    do{
        double resultaturavnenia = (a * pow(x,2) + b * x + c) * sin(x);
        if(resultaturavnenia > maxresult){
            maxresult = resultaturavnenia;
        }if(resultaturavnenia < minresult){
            minresult = resultaturavnenia;
        }
        max_max = maxresult;
        min_min = minresult;
        x -= 0.5;
    }while(x >= -13.5);
    printf("%lf, %lf", max_max, min_min);

}
    

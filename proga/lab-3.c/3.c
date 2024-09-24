#include <stdio.h>

int main(){
    int c;
    printf("введите год:"); scanf("%d",&c);
    switch(c){
        case 2008:printf("крыса");break;
        case 2009:printf("корова");break;
        case 2010:printf("тигр");break;
        case 2011:printf("заяц");break;
        case 2012:printf("дракон");break;
        case 2013:printf("змея");break;
        case 2014:printf("лошадь");break;
        case 2015:printf("овца");break;
        case 2016:printf("обезьяна");break;
        case 2017:printf("петух");break;
        case 2018:printf("собака");break;
        case 2019:printf("свинья");break;
        default:printf("наша база данных маловата");
    }
    

}

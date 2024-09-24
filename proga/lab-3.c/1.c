#include <stdio.h>

int main(){
    int a;
    printf("введите номер месяца:"); scanf("%d", &a);
    switch(a){
        case(1):case(2):printf("первый квартал, зима");break;
        case(3):printf("первый квартал, весна");break;
        case(4):case(5):printf("2 квартал, весна");break;
        case(6):printf("2 квартал,лето");break;
        case(7):case(8):printf("3 квартал, лето");break;
        case(9):printf("3 квартал, осень");break;
        case(10):case(11):printf("4 квартал,осень");break;
        case(12):printf("4 квартал, зима");break;
        default:printf("нету такого месяца");
    }

    return 0;

}

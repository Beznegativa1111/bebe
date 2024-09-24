#include <stdio.h>
#include <stdbool.h>

int main(){
    int c;
    bool proverka = true;
    
    while(proverka){
        printf("число введите:"); scanf("%d",&c);
        switch(c){
        case(1):printf("один\n");break;
        case(2):printf("два\n");break;
        case(3):printf("три\n");break;
        case(4):printf("четыре\n");break;
        case(5):printf("пять\n");break;
        case(6):printf("шесть\n");break;
        case(7):printf("семь\n");break;
        case(8):printf("восемь\n");break;
        case(9):printf("девять\n");break;
        case(-1):printf("минус один\n");break;
        case(-2):printf("минус два\n");break;
        case(-3):printf("минус три\n");break;
        case(-4):printf("минус четыре\n");break;
        case(-5):printf("минус пять\n");break;
        case(-6):printf("минус шесть\n");break;
        case(-7):printf("минус семь\n");break;
        case(-8):printf("минус восемь\n");break;
        case(-9):printf("минус девять\n");break;
        default:printf("это фиаско\n");
    }
    }
    
    return 0;
    

}

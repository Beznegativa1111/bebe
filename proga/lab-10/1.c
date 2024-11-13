// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#define MAX_WORDS 100
#define MAX_LEN 50
int main() {
    char *string[MAX_WORDS]={
    "подоконник",
    "окно",
    "холодильник"
    "подоконник",
    "пододеяльник"
    };
    char mass[MAX_WORDS] = "";
    char nw[MAX_LEN];
    printf("введите приставку");
    scanf("%s",nw);
    for(int i=0;string[i] != NULL;i++){
        if(strncmp(string[i],nw,strlen(nw)) == 0){
            strcat(mass,string[i]);
            strcat(mass," ");
        }
    }
    if (strlen(mass) > 0) {
        printf("Слова, начинающиеся с приставки \"%s\": %s\n", nw, mass);
    

    return 0;
}

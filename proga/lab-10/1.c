

#include <stdio.h>
#include <string.h>
#define LENGTH 500
#define WORDS 500
int main()
{
    char newmas[WORDS][LENGTH];
    char string[LENGTH];
    char slovo[LENGTH];
    char pristavka[LENGTH];
    printf("введите строку:  ");
    fgets(string,sizeof(string),stdin);
    size_t len = strlen(string);
      if (len > 0 && string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }
    printf("введите приставку:  ");
    scanf("%s",pristavka);
    int i =0;
    int cnt = 0;
  
    while(string[i] != '\0'){
        int j = 0;
        while(string[i] != '\0' && string[i] != ' '){
            slovo[j] = string[i];
            i++;
            j++;
        }
        slovo[j] = '\0';
    
        if(strncmp(slovo,pristavka,strlen(pristavka)) == 0){
            if(cnt < WORDS){
                strcpy(newmas[cnt],slovo);
                cnt++;
            }else{
                printf("неа");
                break;
            }
              
        }
        while(string[i] == ' '){
            i++;
        }
        
        
    }
    if(cnt == 0){
        printf("не нашел");
    }else{
        for (int k = 0; k < cnt; k++) {
            printf("%s\n", newmas[k]);
    }
    }
    return 0;
    
}

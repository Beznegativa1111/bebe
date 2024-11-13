#include <stdio.h>
#include <string.h>

#define MAX_LEN 500
#define MAX_WORDS 100

int main() {
    char string[MAX_LEN];                   
    char wordsnw[MAX_WORDS][MAX_LEN];    
    int chet[MAX_WORDS] = {0};             
    int wordcount = 0;                        

    printf("Напиши строку: ");
    fgets(string, sizeof(string), stdin); 

    string[strcspn(string, "\n")] = 0;

    int i = 0;
    while (string[i] != '\0') {             
     
        while (string[i] == ' ') {
            i++;
        }

        
        if (string[i] == '\0') break;

        char curr_word[MAX_LEN];             
        int word_len = 0;

        // Считываем текущее слово
        while (string[i] != ' ' && string[i] != '\0') {
            curr_word[word_len++] = string[i++];
        }
        curr_word[word_len] = '\0';         

        
        int found = 0;
        for (int k = 0; k < wordcount; k++) {
            if (strcmp(wordsnw[k], curr_word) == 0) {
                chet[k]++;                    
                found = 1;                      
                break;
            }
        }

        // Если слово не найдено, добавляем его
        if (!found && wordcount < MAX_WORDS) {
            strcpy(wordsnw[wordcount], curr_word);
            chet[wordcount] = 1;                
            wordcount++;
        }
    }

    printf("Слова и обратная связь:\n");
    for (int i = 0; i < wordcount; i++) {
        printf("%s: %d раз\n", wordsnw[i], chet[i]);
    }

    return 0;
}

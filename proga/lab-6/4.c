

#include <stdio.h>
#include <stdlib.h>
 
const int n = 16;
int main()
{
    int num[n];
    int chet = 0;
    int nechet = 0;
    int sum = 0;
    printf("Введите 16 числа:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &num[i]); 
    }
    for(int i = 0; i < n; i++){
        if(i % 2 == 0){ 
            chet += num[i];
        } else { 
            int proizw = 2 * num[i];
            if (proizw > 9) {
                proizw -= 9;
            }
            nechet += proizw;
        }
    }
    sum = chet + nechet;
    if(sum % 10 == 0){
        printf("карта корректна");
    }else{
        printf("карта не корректна");
    }
}

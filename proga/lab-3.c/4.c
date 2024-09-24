#include <stdio.h>

int main() {
    int month, day, dayOfYear = 0;
    printf("Введите номер месяца (1-12): ");
    scanf("%d", &month);
    printf("Введите номер дня (1-31): ");
    scanf("%d", &day);
    if (month < 1 || month > 12 || day < 1 || day > 31) {
        printf("Неверный ввод. Пожалуйста, введите корректные значения.\n");
        return 1;
    }

  ==
    switch (month) {
        case 1: =
            dayOfYear += 0;=
            break;
        case 2: =
            dayOfYear += 31;=
            break;
        case 3: =
            dayOfYear += 31 + 28; =
            break;
        case 4:
            dayOfYear += 31 + 28 + 31; 
            break;
        case 5:
            dayOfYear += 31 + 28 + 31 + 30; 
            break;
        case 6: 
            dayOfYear += 31 + 28 + 31 + 30 + 31;
            break;
        case 7: 
            dayOfYear += 31 + 28 + 31 + 30 + 31 + 30; 
            break;
        case 8:
            dayOfYear += 31 + 28 + 31 + 30 + 31 + 30 + 31; 
            break;
        case 9: 
            dayOfYear += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31; // 
            break;
        case 10: 
            dayOfYear += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30; 
            break;
        case 11: // Ноябрь
            dayOfYear += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31; 
            break;
        case 12:
            dayOfYear += 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;  
            break;
    }

   
    dayOfYear += day;

  
    switch (month) {
        case 2:
            if (day > 28) {
                printf("Неверная дата для февраля.\n");
                return 1;
            }
            break;
        case 4: case 6: case 9: case 11:
            if (day > 30) {
                printf("Неверная дата для месяца с 30 днями.\n");
                return 1;
            }
            break;
        default:  Декабрь
            if (day > 31) {
                printf("Неверная дата для месяца с 31 днем.\n");
                return 1;
            }
            break;
    }

   
    printf("Порядковый номер дня в году: %d\n", dayOfYear);

    return 0;

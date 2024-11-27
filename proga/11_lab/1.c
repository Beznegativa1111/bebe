#include <graphics.h>
#include <math.h>
#include <stdio.h>

// Определение функций
double f1(double x) {
    return x * x; = // x^2
}

double f2(double x) {
    return cos(x); //  cos(x)
}

// Поиск точек пересечения
void find_intersection(double *x1, double *x2) {
    double prev_f1 = f1(-10);
    double prev_f2 = f2(-10);
    
    for (double x = -10; x <= 10; x += 0.01) {
        double curr_f1 = f1(x);
        double curr_f2 = f2(x);

        if ((prev_f1 < curr_f2 && curr_f1 > curr_f2) || (prev_f1 > curr_f2 && curr_f1 < curr_f2)) {
            if (*x1 == 0) {
                *x1 = x; //1 точка
            } else {
                *x2 = x; // 2 точка
                break; 
            }
        }
        prev_f1 = curr_f1; // Обновляем 
        prev_f2 = curr_f2; 
    }
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    double x1 = 0, x2 = 0;
    find_intersection(&x1, &x2);// точки пересечения

    printf("Абсциссы точек пересечения: a = %.2f, b = %.2f\n", x1, x2);

    // Рисуем оси
    line(320, 0, 320, 480); //  Y
    line(0, 240, 640, 240); //  X

    // Рисуем графики функций
    for (double x = -10; x <= 10; x += 0.01) {
        int px = (int)(x * 30) + 320; // Масштабирование по X
        int py1 = 240 - (int)(f1(x) * 10); 
        int py2 = 240 - (int)(f2(x) * 50);

        putpixel(px, py1, BLUE); 
        putpixel(px, py2, RED); 
    }

    // Закрашивание области 
    for (double x = x1; x <= x2; x += 0.01) {
        int px = (int)(x * 30) + 320; // Масштабирование по X
        int py1 = 240 - (int)(f1(x) * 10); //  f1
        int py2 = 240 - (int)(f2(x) * 50); // f2

        // верхнюю и нижнюю границы области
        int startY = (py1 < py2) ? py1 : py2;
        int endY = (py1 > py2) ? py1 : py2;

        // область между графиками
        for (int y = startY; y <= endY; y++) {
            putpixel(px, y, YELLOW); 
        }
    }

    getch(); 
    closegraph(); 
    return 0;
}

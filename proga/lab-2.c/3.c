#include <stdio.h>

int main() {
  int a,b,c,d = 0;

  printf("Please Enter the 4 Numbers\n");
    printf("Number");
    scanf("%d", &a);
    if (a < 0) {
      a = 0;
    }
    printf("Number");
    scanf("%d", &b);
        if (b < 0) {
      b = 0;
    }
    printf("Number");
    scanf("%d", &c);
        if (c < 0) {
      c = 0;
    }
    printf("Number");
    scanf("%d", &d);
        if (d < 0) {
      d = 0;
    }
    printf("\n After replace = %d", a);
    printf("\n After replace = %d", b);
    printf("\n After replace = %d", c);
    printf("\n After replace = %d", d);

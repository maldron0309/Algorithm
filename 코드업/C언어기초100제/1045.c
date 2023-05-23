#include <stdio.h>

int main(void) {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("%d\n", a + b);                // ÇÕ
  printf("%d\n", a - b);                // Â÷
  printf("%d\n", a * b);                // °ö
  printf("%d\n", a / b);                // ¸ò
  printf("%d\n", a % b);                // ³ª¸ÓÁö
  printf("%.02f", (float)a / (float)b); // ³ª´« °ª

  return 0;
}


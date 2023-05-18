#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("%d", a > b ? a : b);
  printf(0);
  return 0;
}


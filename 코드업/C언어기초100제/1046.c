#include <stdio.h>

int main(void) {
  int a, b, c, res;
  float avg;

  scanf("%d %d %d", &a, &b, &c);
  res = a + b + c;

  avg = (float)res / 3;

  printf("%d\n", res);
  printf("%.1f", avg);

  return 0;
}

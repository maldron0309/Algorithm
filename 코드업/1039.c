#include <stdio.h>

int main(void) {
  long long int a, b;
  long long res;

  scanf("%lld\n%lld", &a, &b);
  res = a + b;

  printf("%lld", res);
  return 0;
}

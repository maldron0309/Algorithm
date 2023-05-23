
int main(void) {

  int a, b;

  scanf("%d", &a);
back:

  scanf("%d", &b);
  printf("%d\n", b);

  if (a-- > 1) {
    goto back;
  }
  return 0;
}

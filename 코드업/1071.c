
int main(void) {

  int a;
back:

  scanf("%d", &a);

  if (a != 0) {
    printf("%d\n", a);
    goto back;
  }

  return 0;
}

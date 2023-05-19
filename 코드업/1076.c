int main(void) {

  char c, a = 'a';

  scanf("%c", &c);

  do {

    printf("%c ", a);
    a++;
    c--;

  } while (c >= 'a');

  return 0;
}

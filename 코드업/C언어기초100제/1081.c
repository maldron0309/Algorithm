
int main() {

  int i, j;
  int n = 3, m = 6;

  scanf("%d %d", &n, &m);

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= m; j++) {
      printf("%d %d\n", i, j);
    }
  }

  return 0;
}

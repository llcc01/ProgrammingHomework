#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char **p, char **q) {
  char *t = *p;
  *p = *q;
  *q = t;
}

int main() {
  int N;
  char buf[1003];
  scanf("%d", &N);

  char **z = (char **)calloc(N, sizeof (char *));
  assert(z);
  for (int i = 0, l; i < N; ++i) {
    scanf(" %[^\n]", buf);
    l = strlen(buf);
    z[i] = (char *)calloc(l + 1, sizeof (char));
    assert(z[i]);
    strcpy(z[i], buf);
    // strcpy 复制包含空终止符
    // 就算没包含，calloc 也零初始化了
  }

  for (int i = 0; i < N - 1; ++i)
    for (int j = 0; j < N - i - 1; ++j)
      if (strcmp(z[j], z[j + 1]) > 0)
        swap(z + j, z + j + 1);

  for (int i = 0; i < N; ++i)
    puts(z[i]), free(z[i]);
  free(z);
  return 0;
}
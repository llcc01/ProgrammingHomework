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
  char *s[100] = {}, z[100103] = {};
  int N;
  scanf("%d", &N);

  char *p = z;
  for (int i = 0; i < N; ++i) {
    s[i] = p;
    scanf(" %[^\n]", p);
    while (*p) ++p;
    ++p;
  }

  for (int i = 0; i < N - 1; ++i)
    for (int j = 0; j < N - i - 1; ++j)
      if (strcmp(s[j], s[j + 1]) > 0)
        swap(s + j, s + j + 1);

  for (int i = 0; i < N; i++)
    puts(s[i]);

  return 0;
}


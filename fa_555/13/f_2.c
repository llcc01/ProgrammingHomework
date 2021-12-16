#include <stdio.h>
#include <stdlib.h>

char **create1(int n);
void create2(char **strPtr, int n);
void fill(char **strPtr, int n);

int main() {
  int n, i, j;
  char **strPtr;

  scanf("%d", &n);
  strPtr = create1(n * 2 + 1);
  create2(strPtr, n * 2 + 1);
  fill(strPtr, n);

  for (i = 0; i < 2 * n + 1; i++) {
    printf("%s\n", strPtr[i]);
  }

  for (i = 0; i < n * 2 + 1; i++)
    free(strPtr[i]);
  free(strPtr);

  return 0;
}

/* 请在这里填写答案 */
char **create1(int n) {
  char **p = (char **)calloc(n, sizeof (char *));
  return p;
}

void create2(char **strPtr, int n) {
  for (int i = 0; i < n; ++i)
    strPtr[i] = (char *)calloc(n + 1, sizeof (char));
}

void fill(char **strPtr, int n) {
  // Line 0
  for (int j = 0; j < n; ++j)
    strPtr[0][j] = ' ';
  strPtr[0][n] = 'X';

  // Line 1 ~ n - 1
  for (int i = 1; i < n; ++i) {
    char *p = strPtr[i];
    for (int _ = n - i; _; --_)
      *p++ = ' ';
    *p++ = '/';
    for (int _ = i * 2 - 1; _; --_)
      *p++ = ' ';
    *p++ = '\\';
  }

  // Line n
  strPtr[n][0] = 'X';
  for (int j = 1; j < 2 * n; ++j)
    strPtr[n][j] = ' ';
  strPtr[n][2 * n] = 'X';

  // Line n + 1 ~ 2n - 1
  for (int i = n + 1; i < 2 * n; ++i) {
    char *p = strPtr[i];
    for (int _ = n - (2 * n - i); _; --_)
      *p++ = ' ';
    *p++ = '\\';
    for (int _ = (2 * n - i) * 2 - 1; _; --_)
      *p++ = ' ';
    *p++ = '/';
  }

  // Line 2n
  for (int j = 0; j < n; ++j)
    strPtr[2 * n][j] = ' ';
  strPtr[2 * n][n] = 'X';
}


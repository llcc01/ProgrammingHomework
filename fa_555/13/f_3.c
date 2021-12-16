#include <stdio.h>

char *locatesubstr(char *str1, char *str2);

int main() {
  char str1[505], str2[505];
  char *p;
  gets(str1);
  gets(str2);
  p = locatesubstr(str1, str2);

  if (p == NULL)
    printf("NULL!\n");
  else
    puts(p);

  return 0;
}

/* 请在这里填写答案 */
// 500 的数据范围那就直接 O(nm) 了吧
char *locatesubstr(char *str1, char *str2) {
  for (; *str1; ++str1)
    for (char *p = str1, *q = str2; ; ++p, ++q) {
      if (!*q) return str1;
      if (!*p) break;
      if (*p != *q) break;
    }
  return NULL;
}


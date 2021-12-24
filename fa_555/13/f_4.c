#include <stdio.h>

int getString(char *source, char *strPtr[]);

int main() {
  char str[100005];
  char *strPtr[1005] = {0};
  int i, num;

  gets(str);
  num = getString(str, strPtr);
  for (i = 0; i < num; i++)
    puts(strPtr[i]);

  return 0;
}

/* 请在这里填写答案 */
int getString(char *source, char *strPtr[]) {
  int s = 0, g = 0;
  
  for (char *p = source; *p; ++p)
    if (*p == ' ') *p = 0, g = 0;
    else {
      if (!g) strPtr[s++] = p;
      g = 1;
    }

  return s;
}


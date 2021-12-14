#include <stdio.h>

#define MAX 48

int getScore(char *s);

int main() {
  char input[MAX];
  int score;

  scanf("%s", input);
  score = getScore(input);
  printf("%d\n", score);

  return 0;
}

/* 请在这里填写答案 */
int getScore(char *s) {
  int ans = 0;
  for (char *p = s; *p; ++p)
    if (*p == 'W')
      ans += 3;
    else if (*p == 'D')
      ans += 1;
  return ans;
}


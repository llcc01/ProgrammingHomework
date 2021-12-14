#include <stdio.h>

int main() {
  int N;
  float s[7][7] = {}, s1[7] = {}, s2[7] = {};

  scanf("%d", &N);
  for (int i = 1, a, b; i <= N; ++i) {
    float x;
    scanf("%d%d%f", &a, &b, &x);
    s[b][a] += x;
    s1[b] += x, s2[a] += x;
    s[0][0] += x;
  }
  for (int i = 1; i <= 5; ++i) {
    for (int j = 1; j <= 4; ++j)
      printf("%.1f\t", s[i][j]);
    printf("%.1f\n", s1[i]);
  }
  for (int j = 1; j <= 4; ++j)
    printf("%.1f\t", s2[j]);
  printf("%.1f\n", s[0][0]);
  return 0;
}


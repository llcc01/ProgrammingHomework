#include <stdio.h>

int judgeTriangle(int, int, int);

int main() {
  int a, b, c;

  scanf("%d%d%d", &a, &b, &c);

  switch (judgeTriangle(a, b, c)) {
  case -1:
    printf("It is not a triangle.\n");
    break;
  case 0:
    printf("It is a scalenous triangle.\n");
    break;
  case 1:
    printf("It is a right-angled triangle.\n");
    break;
  case 2:
    printf("It is an isosceles triangle.\n");
    break;
  case 3:
    printf("It is a equilateral triangle.\n");
    break;
  }

  return 0;
}

/* 请在这里填写答案 */

// 笑死，人家不规则三角形是 scalene triangle
// 哎我实在是不想大力分类讨论，摆了
// 这要是让排个序那得写得多漂亮

int invalid(int a, int b, int c) {
  return a + b <= c || a + c <= b || b + c <= a;
}

int rect(int a, int b, int c) {
  return 1ll * a * a + 1ll * b * b == 1ll * c * c;
}

int judgeTriangle(int a, int b, int c) {
  if (invalid(a, b, c)) return -1;
  if (a == b && b == c) return 3;
  if (a == b || a == c || b == c) return 2;
  if (rect(a, b, c) || rect(a, c, b) || rect(b, c, a)) return 1;
  return 0;
}

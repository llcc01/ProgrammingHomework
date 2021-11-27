#include <stdio.h>

int getDays(int, int);

int main() {
  int year, month;

  scanf("%d%d", &year, &month);
  printf("There are %d days in month %d year %d.", getDays(year, month), month,
         year);

  return 0;
}

/* 请在这里填写答案 */

const int days[] = {-1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int isLeapYear(int y) {
  return (y % 100 && y % 4 == 0) || y % 400 == 0;
}

int getDays(int y, int m) {
  return m == 2 ? isLeapYear(y) ? 29 : 28 : days[m];
}


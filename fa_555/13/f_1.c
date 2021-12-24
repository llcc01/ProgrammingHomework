#include <stdio.h>
#include <stdlib.h>

int *create(int n);
void cal(int *array, int size);

int main() {
  int *array, n, i;

  scanf("%d", &n);

  array = create(n);
  if (array == NULL)
    return -1; //这里的return是因为没有获得内存而直接结束程序。

  cal(array, n);
  for (i = 0; i < n; i++) {
    printf("%d", *(array + i));
    if (i == n - 1)
      printf("\n");
    else
      printf(" ");
  }

  free(array);

  return 0;
}

/* 请在这里填写答案 */
int *create(int n) {
  int *p = (int *)calloc(n, sizeof (int));
  return p;
}

void cal(int *array, int size) {
  int s = 0, mx = -0x80000000, mn = 0x7f7f7f7f;
  // 我知道 0x80000000 是 int64 的字面量，但是会隐式转换不会出问题（
  for (int i = 0; i < size; ++i) {
    scanf("%d", array + i);
    s += array[i];
    if (array[i] > mx) mx = array[i];
    if (array[i] < mn) mn = array[i];
  }
  printf("%d\n%.2f\n%d\n%d\n", s, (double)s / size, mx, mn);
}


#include <stdio.h>

#define MAX 100

void findMin(int M[][MAX], int x[], int n, int m);

int main() {
  int matrix[MAX][MAX];
  int x[MAX];
  int n, m, i, j;

  scanf("%d%d", &n, &m);
  for (i = 0; i < n; i++) {
    for (j = 0; j < m; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }

  findMin(matrix, x, n, m);

  for (i = 0; i < m - 1; i++)
    printf("%d ", x[i]);
  printf("%d\n", x[i]);

  return 0;
}

/* 请在这里填写答案 */
#include <string.h>

void findMin(int M[][MAX], int x[], int n, int m) {
  memcpy(x, M[0], sizeof (int) * m);
  for (int i = 1; i < n; ++i)
    for (int j = 0; j < m; ++j)
      if (M[i][j] < x[j])
        x[j] = M[i][j];
}


#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char s[21];
  int z;
} Node;

void swap(Node *p, Node *q) {
  Node t = *p;
  *p = *q;
  *q = t;
}

int cmp(Node *lhs, Node *rhs) {
  // i.e. std::greater
  if (lhs->z != rhs->z)
    return lhs->z > rhs->z;
  return strcmp(lhs->s, rhs->s) < 0;
}

void sort(Node z[], int n) {
  for (int i = 0; i < n - 1; ++i)
    for (int j = 0; j < n - i - 1; ++j)
      if (!cmp(z + j, z + j + 1))
        swap(z + j, z + j + 1);
}

int main() {
  int N;

  scanf("%d", &N);

  Node *z = (Node *)calloc(N, sizeof (Node));
  assert(z);

  for (int i = 0; i < N; ++i)
    scanf("%s %d", z[i].s, &z[i].z);

  sort(z, N);

  for (int i = 0; i < N; ++i)
    printf("Name:%s\ntotal:%d\n\n", z[i].s, z[i].z);

  free(z);
  return 0;
}


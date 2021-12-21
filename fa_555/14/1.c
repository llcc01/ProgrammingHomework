#include <stdio.h>

typedef struct {
  char s1[21], s2[21];
  int z[5], tot;
  double avg;
} Node;

void swap(int *p, int *q) {
  int t = *p;
  *p = *q;
  *q = t;
}

void sort(int *z, int n) {
  for (int i = 0; i < n - 1; ++i)
    for (int j = 0; j < n - i - 1; ++j)
      if (z[j] < z[j + 1])
        swap(z + j, z + j + 1);
}

void stat(Node *p) {
  p->tot = 0;
  sort(p->z, 5);
  for (int i = 0; i < 5; ++i)
    p->tot += p->z[i];
  p->avg = p->tot / 5.;
}

int main() {
  Node z, *p = &z;
  scanf("%[^\n] %[^\n]", z.s1, z.s2);
  for (int i = 0; i < 5; ++i)
    scanf("%d", z.z + i);

  stat(p);

  printf("Name:%s\n", p->s1);
  printf("ID:%s\n", p->s2);
  // 这玩意越写 for 越丑
  printf("Score:%d %d %d %d %d\n", p->z[0], p->z[1], p->z[2], p->z[3], p->z[4]);
  // 然后我假定 C99 用 %lf 不会受歧视
  printf("average:%.2lf total:%d\n", p->avg, p->tot);

  return 0;
}


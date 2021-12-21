#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char s1[21], s2[21];
  int z[5], tot;
  double avg;
} Node;

void stat(Node *p) {
  p->tot = 0;
  for (int i = 0; i < 5; ++i)
    p->tot += p->z[i];
  p->avg = p->tot / 5.;
}

int main() {
  int N;

  scanf("%d", &N);
  Node *z = (Node *)calloc(N, sizeof (Node));
  assert(z);

  for (int i = 0; i < N; ++i) {
    scanf(" %[^\n] %[^\n]", z[i].s1, z[i].s2);
    for (int j = 0; j < 5; ++j)
      scanf("%d", z[i].z + j);

    stat(&z[i]);

    printf("Name:%s\n", z[i].s1);
    printf("ID:%s\n", z[i].s2);
    // 这玩意越写 for 越丑
    printf("Score:%d %d %d %d %d\n", z[i].z[0], z[i].z[1], z[i].z[2], z[i].z[3], z[i].z[4]);
    // 然后我假定 C99 用 %lf 不会受歧视
    printf("average:%.2lf total:%d\n\n", z[i].avg, z[i].tot);
  }

  free(z);
  return 0;
}


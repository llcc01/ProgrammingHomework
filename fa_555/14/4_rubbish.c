/*
 * 隔壁寝的朋友写了 splay
 * 那我写一个无旋 treap 玩一玩
 * 纯好玩的，不要当真（
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tot, rt, a, b, c, ls[133], rs[133], rnd[133], siz[133];
double s[133];
long long id[133];
char name[133][13];

typedef struct {
  char s[13];
  long long id;
  double avg;
} Node;

int newNode(Node obj) {
  s[++tot] = obj.avg;
  strcpy(name[tot], obj.s);
  id[tot] = obj.id;
  rnd[tot] = rand();
  siz[tot] = 1;
  return tot;
}

inline void pushup(int p) {
  siz[p] = siz[ls[p]] + siz[rs[p]] + 1;
}

void split(int p, long long v, int *a, int *b) {
  if (!p) { *a = *b = 0; return; }
  if (id[p] <= v) *a = p, split(rs[p], v, &rs[p], b);
  else *b = p, split(ls[p], v, a, &ls[p]);
  pushup(p);
}

int merge(int p, int q) {
  if (!p || !q) return p + q;
  if (rnd[p] > rnd[q]) {
    rs[p] = merge(rs[p], q), pushup(p);
    return p;
  } {
    ls[q] = merge(p, ls[q]), pushup(q);
    return q;
  }
}

inline void insert(Node obj) {
  split(rt, obj.id, &a, &b);
  rt = merge(merge(a, newNode(obj)), b);
}

inline void remove_(long long id) {
  split(rt, id, &a, &c), split(a, id - 1, &a, &b);
  rt = merge(merge(a, merge(ls[b], rs[b])), c);
}

inline int find(long long v) {
  split(rt, v, &a, &c), split(a, v - 1, &a, &b);
  int ans = 0;
  if (siz[b]) ans = b;
  rt = merge(merge(a, b), c);
  return ans;
}

void Insert(Node obj) {
  int p = find(obj.id);
  if (p) {
    puts("Students already exist");
    return;
  }
  insert(obj);
  puts("Add success");
}

void Delete(Node obj) {
  int p = find(obj.id);
  if (!p) {
    puts("Students do not exist");
    return;
  }
  remove_(id[p]);
  puts("Delete success");
}

void Modify(Node obj) {
  int p = find(obj.id);
  if (!p) {
    puts("Students do not exist");
    return;
  }
  s[p] = obj.avg;
  puts("Update success");
}

void Select(Node obj) {
  int p = find(obj.id);
  if (!p) {
    puts("Students do not exist");
    return;
  }
  printf("Student ID:%lld\n", id[p]);
  printf("Name:%s\n", name[p]);
  printf("Average Score:%.1lf\n", s[p]);
}

int main() {
  int N;
  scanf("%d", &N);

  for (int op, c1, c2, c3; N; --N) {
    Node obj;

    scanf("%d%lld", &op, &obj.id);
    if (op == 1) {
      scanf("%s%d%d%d", obj.s, &c1, &c2, &c3);
      obj.avg = (c1 + c2 + c3) / 3.;
      Insert(obj);
    }
    else if (op == 2)
      Delete(obj);
    else if (op == 3) {
      scanf("%d%d%d", &c1, &c2, &c3);
      obj.avg = (c1 + c2 + c3) / 3.;
      Modify(obj);
    }
    else if (op == 4)
      Select(obj);
  }

  return 0;
}


#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  char s[11], id[11];
  int c1, c2, c3, valid;
  // valid = 0/1/2 : 空/有效/删除
} Node;

Node *find(Node *z, const char *id) {
  for (; z->valid; ++z)
    if (z->valid == 1 && strcmp(z->id, id) == 0)
      break;
  return z;
}

void Insert(Node *z, Node obj) {
  Node *p = find(z, obj.id);
  if (p->valid == 1) {
    puts("Students already exist");
    return;
  }
  *p = obj;
  puts("Add success");
}

void Delete(Node *z, Node obj) {
  Node *p = find(z, obj.id);
  if (!p->valid) {
    puts("Students do not exist");
    return;
  }
  p->valid = 2;
  puts("Delete success");
}

void Modify(Node *z, Node obj) {
  Node *p = find(z, obj.id);
  if (!p->valid) {
    puts("Students do not exist");
    return;
  }
  strncpy(obj.s, p->s, 11);
  *p = obj;
  puts("Update success");
}

void Select(Node *z, Node obj) {
  Node *p = find(z, obj.id);
  if (!p->valid) {
    puts("Students do not exist");
    return;
  }
  printf("Student ID:%s\n", p->id);
  printf("Name:%s\n", p->s);
  printf("Average Score:%.1lf\n", (p->c1 + p->c2 + p->c3) / 3.);
}

int main() {
  // 算了开静态数组了，动态不好写（
  // 突然意识到前面的题全都忘了 free

  int N;
  Node z[133];
  memset(z, 0, sizeof z);
  
  scanf("%d", &N);

  for (int op; N; --N) {
    Node obj;
    obj.valid = 1;

    scanf("%d%s", &op, obj.id);
    if (op == 1) {
      scanf("%s%d%d%d", obj.s, &obj.c1, &obj.c2, &obj.c3);
      Insert(z, obj);
    }
    else if (op == 2)
      Delete(z, obj);
    else if (op == 3) {
      scanf("%d%d%d", &obj.c1, &obj.c2, &obj.c3);
      Modify(z, obj);
    }
    else if (op == 4)
      Select(z, obj);
  }

  return 0;
}


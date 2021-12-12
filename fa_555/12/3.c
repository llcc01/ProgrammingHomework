#include <ctype.h>
#include <stdio.h>

int main() {
  int cnt[257] = {};

  for (char c; scanf(" %c", &c) != EOF; )
    if (isalpha(c))
      ++cnt[(size_t)c];
  for (int i = 'A'; i <= 'z'; ++i)
    if (cnt[i])
      printf("The character %c has presented %d times.\n", i, cnt[i]);
  return 0;
}


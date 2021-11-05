#include <stdio.h>
#include <string.h>

char s[13];

int isPalin(char *begin) {
  // [begin, end]
  char *end = begin + strlen(begin) - 1;
  for (; begin < end; ++begin, --end)
    if (*begin != *end)
      return 0;

  return 1;
}

int main() {
  scanf("%s", s + 1);
  puts(isPalin(s + 1) ? "Yes" : "No");
  return 0;
}
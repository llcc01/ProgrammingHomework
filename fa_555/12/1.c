#include <stdio.h>
#include <stdlib.h>

void _exit(int x) {
  puts(x ? "parentheses match!" : "parentheses do not match!");
  exit(0);
}

int main() {
  int x = 0;
  for (char c; scanf(" %c", &c) != EOF; ) {
    if (c == '(')
      ++x;
    else if (c == ')') {
      if (--x < 0)
        _exit(0);
    }
  }
  _exit(!x);
}


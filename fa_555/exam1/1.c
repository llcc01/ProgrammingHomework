#include <stdio.h>

int main() {
  for (char c; ; ) {
    c = getchar();
    if (c == '\n')
      break;
    /*
     * 我显然可以这么写，但是既然不让就算了
     * if (islower(c))
     *   c = toupper(c);
     * else if (isupper(c))
     *   c = tolower(c);
     */
    if (c >= 'a' && c <= 'z')
      c -= 32;
    else if (c >= 'A' && c <= 'Z')
      c += 32;
    
    putchar(c);
  }
  return 0;
}
// 想先用 C++ 爽一下（

#include <algorithm>
#include <iostream>
#include <string>

int main() {
  std::string s, t;

  std::cin >> s;
  t = s;
  std::reverse(t.begin(), t.end());
  std::cout << (s == t ? "Yes" : "No") << '\n';
  return 0;
}
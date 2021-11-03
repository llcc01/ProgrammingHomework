// C++17

#include <iostream>
#include <numeric>

int main() {
  int m, n, g;

  std::cin >> m >> n;
  g = std::gcd(m, n);
  std::cout << g << ' ' << 1ll * m * n / g << '\n';
  return 0;
}
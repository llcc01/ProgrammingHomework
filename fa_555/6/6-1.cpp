// C++17

#include <iostream>
#include <numeric>

int main() {
  int m, n, g;

  std::cin >> m >> n;
  g = std::gcd(m, n);
  std::cout << g << ' ' << m / g * n << '\n';
  return 0;
}

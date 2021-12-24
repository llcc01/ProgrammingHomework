#include <iostream>
#include <numeric>

int main() {
  int N, z[23];
  std::cin >> N;
  for (int i = 1; i <= N * 2; ++i)
    std::cin >> z[i];
  std::cout << std::inner_product(z + 1, z + N + 1, z + N + 1, 0) << '\n';
  return 0;
}
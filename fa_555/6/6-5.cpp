#include <bitset>
#include <iostream>

int main() {
  std::bitset<13> z;

  std::cin >> z;
  std::cout << z.to_ulong() << '\n';
  return 0;
}


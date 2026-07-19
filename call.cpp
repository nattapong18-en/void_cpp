#include <iostream>

using namespace std;

int add(int x, int y, int z) { return x + y + z; }

int multiply(int z, int w) { return z * w; }

int main() {
  // cout << add(5, 4) << '\n';
  // cout << add(1 + 2, 3 * 4) << '\n';

  // int a{5};

  // cout << add(a, a) << '\n';
  // cout << add(1, multiply(2, 3)) << '\n';

  // cout << add(1, add(2, 3)) << '\n';
  cout << multiply(add(1, 2, 3), 4) << '\n';
}

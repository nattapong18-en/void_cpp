#include <iostream>

using namespace std;

int add(int x, int y) {
  int z{x + y};
  return z;
}

int main() {
  cout << add(5, 10) << '\n';
  return 0;
}

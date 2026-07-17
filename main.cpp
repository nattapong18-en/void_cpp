#include <iostream>

void pritHi() { std::cout << "Hi" << '\n'; }
void pritValue(int x) {
  std::cout << x << '\n';
  return;
}
int main() {
  pritHi();
  pritValue(5);

  return 0;
}

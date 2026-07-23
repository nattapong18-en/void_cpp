#include <iostream>

int multiply(int a, int b); // Line 3: Declaration 1
int multiply(int x, int y); // Line 4: Declaration 2

int main() {
  std::cout << multiply(3, 4) << '\n';
  return 0;
}

int multiply(int x, int y) // Line 12: Definition
{
  return x * y;
}

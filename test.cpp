#include <iostream>

using namespace std;

void doPrint() { cout << "In doPrint()\n"; }

void printValue(int x) { cout << x << '\n'; }

int add(int x, int y) { return x + y; }
int main() {
  doPrint();
  printValue(6);
  int a{2};
  int b{3};
  int sum = add(a, b);
  cout << sum << '\n';

  return 0;
}

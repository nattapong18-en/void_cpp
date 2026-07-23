#include <iostream>

using namespace std;

int add(int x, int y) {
  int z{x + y};
  return z;
}

int getValue() {
  int val{};
  cout << "Enter val: ";
  cin >> val;
  return val;
}

int main() {
  cout << add(5, 10) << '\n';
  int num{getValue()};
  cout << "You entered: " << num << '\n';
  return 0;
}

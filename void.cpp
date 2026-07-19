#include <iostream>

using namespace std;

int getValueFromUser() {
  cout << "Enter value: ";
  int value{};
  cin >> value;
  return value;
}

void printDouble(int value) {
  cout << value << " double is: " << value * 2 << '\n';
}

int add(int x, int y) { return x + y; }

int main() {
  // int num{getValueFromUser()};

  // printDouble(num);
  printDouble(getValueFromUser());
  cout << add(5, 6) << '\n';
  return 0;
}

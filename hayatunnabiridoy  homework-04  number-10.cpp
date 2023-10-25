#include <iostream>

using namespace std;

int main() {
  int number;
  int largestDigit = 0;

  cout << "Enter a number: ";
  cin >> number;

  while (number > 0) {
    int digit = number % 10;
    if (digit > largestDigit) {
      largestDigit = digit;
    }
    number /= 10;
  }

  cout << "The largest digit in the number is: " << largestDigit << endl;

  return 0;
}
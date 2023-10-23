#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Enter a number: ";
  cin >> n;

  int sum = 0;
  for (int i = 1; i <= n; i += 2) {
    sum += i;
  }

  cout << "The sum of all odd numbers from 1 to " << n << " is " << sum << endl;

  return 0;
}

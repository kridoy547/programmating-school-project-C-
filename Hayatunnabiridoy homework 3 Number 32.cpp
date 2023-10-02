#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a three-digit number: ";
    cin >> number;

    if (number >= 100 && number <= 999) {
        int digit1 = number / 100;
        int digit2 = (number / 10) % 10;
        int digit3 = number % 10;

        int sum = digit1 + digit2 + digit3;

        if (sum >= 10 && sum <= 99) {
            cout << "The sum of its digits is a two-digit number." << endl;
        } else {
            cout << "The sum of its digits is not a two-digit number." << endl;
        }
    } else {
        cout << "Invalid input. Please enter a three-digit number." << endl;
    }

    return 0;
}

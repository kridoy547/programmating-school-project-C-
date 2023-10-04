#include <iostream>

using namespace std;

int main() {
    int number;
    cout << "Enter a two-digit number: ";
    cin >> number;

    // Extract the tens and units digits of the number
    int tens_digit = number / 10;
    int units_digit = number % 10;

    // Calculate the sum of the digits
    int sum_of_digits = tens_digit + units_digit;

    // Check if the sum of the digits is a multiple of three
    if (sum_of_digits % 3 == 0) {
        cout << "The sum of the digits of " << number << " is a multiple of three." << endl;
    } else {
        cout << "The sum of the digits of " << number << " is not a multiple of three." << endl;
    }

    return 0;
}
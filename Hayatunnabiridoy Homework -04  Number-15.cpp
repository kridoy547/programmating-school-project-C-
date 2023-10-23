#include <iostream>

using namespace std;

const char* hexDigits = "0123456789ABCDEF";

string toHexadecimal(int number) {
    string hexadecimal;
    while (number > 0) {
        int remainder = number % 16;
        hexadecimal += hexDigits[remainder];
        number /= 16;
    }
    (hexadecimal.begin(), hexadecimal.end());
    return hexadecimal;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    string hexadecimal = toHexadecimal(number);
    cout << "The hexadecimal representation of " << number << " is " << hexadecimal << endl;

    return 0;
}
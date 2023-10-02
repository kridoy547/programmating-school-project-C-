#include <iostream>
#include <string>

using namespace std;
int main() {

    cout << "Three real numbers are given. Print first the smallest and then the largest of the two remaining numbers.\n ";

    float firstNumber(0),
            secondNumber(0), thirdNumber(0);
    cout << "Enter the first number : ";
    cin >> firstNumber;
    cout <<"Enter the second number : ";
    cin >> secondNumber;
    cout <<"Enter the third number : ";
    cin >> thirdNumber;
    if (firstNumber <= secondNumber && firstNumber <= thirdNumber) {
        cout << "Smallest number: " << firstNumber << endl;
        if (secondNumber > thirdNumber) { cout << "Highest number: " << secondNumber << endl; }
        else {
            cout << "Highest number: " << thirdNumber << endl;
        }
    }

    if (secondNumber <= firstNumber && secondNumber <= thirdNumber) {
        cout << "\"Smallest number: " << secondNumber << endl;
        if (firstNumber > thirdNumber) { cout << "\"Highest number:" << firstNumber << endl; }
        else {
            cout << "Highest number: " << thirdNumber << endl;
        }
    }
    if (thirdNumber <= secondNumber && thirdNumber <= firstNumber) {
        cout << "Smallest number: " << thirdNumber << endl;
        if (secondNumber > firstNumber) { cout << "Highest number: " << secondNumber << endl;
        }else {
            cout << "Highest number: " << firstNumber << endl;
        }
     }
}
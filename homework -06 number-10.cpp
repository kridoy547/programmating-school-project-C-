#include <iostream>
using namespace std;

void printEvenOdd(int arr[], int n) {
    // Loop to print even numbers in ascending order of their indices
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
        }
    }

    // Loop to print odd numbers in descending order of their indices
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    printEvenOdd(arr, n);
    return 0;
}


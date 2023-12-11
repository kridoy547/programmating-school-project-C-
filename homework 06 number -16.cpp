#include <iostream>
using namespace std;

void printArray(int arr[], int n) {
    // Loop to print the elements of the array in the required order
    for (int i = 0; i < n; i++) {
        cout << arr[n - i - 1] << " ";
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
    printArray(arr, n);
    return 0;
}


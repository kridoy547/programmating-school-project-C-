#include <iostream>

using namespace std;

int SumRange(int A, int B);

int main() {
    // The numbers A, B, and C.
    int A = 10;
    int B = 20;
    int C = 30;

    // Calculate the sums of numbers from A to B and from B to C.
    int sum1 = SumRange(A, B);
    int sum2 = SumRange(B, C);

    // Print the results.
    cout << "The sum of numbers from " << A << " to " << B << " is " << sum1 << "." << endl;
    cout << "The sum of numbers from " << B << " to " << C << " is " << sum2 << "." << endl;

    return 0;
}

int SumRange(int A, int B) {
    int sum = 0;
    for (int i = A; i <= B; ++i) {
        sum += i;
    }
    return sum;
}

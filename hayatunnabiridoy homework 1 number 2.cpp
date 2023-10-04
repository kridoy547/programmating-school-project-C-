#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of a triangle using Heron's formula.
double heron(double a, double b, double c) {
    double s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

// Function to calculate the altitude of a triangle from a given side.
double calculate_altitude(double a, double b, double c, double side) {
    double area = heron(a, b, c);
    return 2 * area / side;
}

int main() {
    // Input side lengths
    double a, b, c;
    cout << "Enter the lengths of the sides of the triangle (a, b, c): ";
    cin >> a >> b >> c;

    // Calculate the altitudes
    double altitude_a = calculate_altitude(b, c, a, a);
    double altitude_b = calculate_altitude(a, c, b, b);
    double altitude_c = calculate_altitude(a, b, c, c);

    // Print the altitudes
    cout << "The altitude from A to BC is: " << altitude_a << endl;
    cout << "The altitude from B to AC is: " << altitude_b << endl;
    cout << "The altitude from C to AB is: " << altitude_c << endl;

    return 0;
}
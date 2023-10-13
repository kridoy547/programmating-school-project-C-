
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double side1, side2, angle, height;

    // Input side1, side2, angle (in radians), and height from the user
    cout << "Enter the length of side1: ";
    cin >> side1;
    cout << "Enter the length of side2: ";
    cin >> side2;
    cout << "Enter the angle (in radians) between side1 and side2: ";
    cin >> angle;
    cout << "Enter the height: ";
    cin >> height;

    // Calculate the base area
    double baseArea = side1 * side2 * sin(angle);

    // Calculate the volume
    double volume = baseArea * height;

    // Output the result
    cout << "The volume of the parallelepiped is: " << volume << endl;

    return 0;
}

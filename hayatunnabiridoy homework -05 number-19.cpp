#include <iostream>
#include <cmath>

// Function to calculate the area of a ring
double RingS(double R1, double R2) {
    return 3.14 * (R1 * R1 - R2 * R2);
}

int main() {
    // Declare variables to store radii of the rings
    double R11, R12, R21, R22, R31, R32;

    // Take input for radii of the rings
    std::cout << "Enter the outer and inner radii of the first ring: ";
    std::cin >> R11 >> R12;
    std::cout << "Enter the outer and inner radii of the second ring: ";
    std::cin >> R21 >> R22;
    std::cout << "Enter the outer and inner radii of the third ring: ";
    std::cin >> R31 >> R32;

    // Calculate and print the areas of the rings
    std::cout << "The area of the first ring is: " << RingS(R11, R12) << std::endl;
    std::cout << "The area of the second ring is: " << RingS(R21, R22) << std::endl;
    std::cout << "The area of the third ring is: " << RingS(R31, R32) << std::endl;

    return 0;
}
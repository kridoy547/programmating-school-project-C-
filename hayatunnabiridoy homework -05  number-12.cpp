#include <iostream>

using namespace std;

void SortInc3(double& A, double& B, double& C);

int main() {
  double A1 = 3, B1 = 2, C1 = 1;
  double A2 = 2.5, B2 = 8, C2 = 2.5;

  SortInc3(A1, B1, C1);
  SortInc3(A2, B2, C2);

  cout << A1 << " " << B1 << " " << C1 << endl;
  cout << A2 << " " << B2 << " " << C2 << endl;

  return 0;
}

void SortInc3(double& A, double& B, double& C) {
  if (A > B) {
    std::swap(A, B);
  }
  if (B > C) {
    std::swap(B, C);
  }
  if (A > B) {
    std::swap(A, B);
  }
}


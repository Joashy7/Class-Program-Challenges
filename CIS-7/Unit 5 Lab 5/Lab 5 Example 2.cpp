#include <iostream>
#include <algorithm>
using namespace std;

int binomialCoeff(int n, int r){
  //Base Case for Recursion
  if (r == 0 || r == n)
    return 1;
  return binomialCoeff(n - 1, r - 1) + binomialCoeff(n - 1, r);
}

int main() {
  int n = 3, r = 2;
  cout << "Value of C(" << n << ", " << r << ") is " << binomialCoeff(n, r);
  return 0;
}
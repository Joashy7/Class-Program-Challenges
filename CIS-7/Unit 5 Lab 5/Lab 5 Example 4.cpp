#include <iostream>
#include <algorithm>
#include <array>
#include <cstring>
using namespace std;

int binomialCoeff(int n, int r){
  int Coef[r + 1];
  memset(Coef, 0, sizeof(Coef));
  Coef[0] = 1;

  for (int i = 1; i <= n; i++){
    for (int j = min(i, r); j > 0; j--)
      Coef[j] = Coef[j] + Coef[j - 1];
  }
  return Coef[r];
}

int main() {
  int n = 8, r = 6;
  cout << "Value of C(" << n << ", " << r << ") is " << binomialCoeff(n, r);
  return 0;
}
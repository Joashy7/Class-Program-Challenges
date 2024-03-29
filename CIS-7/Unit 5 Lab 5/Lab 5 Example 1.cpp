#include <iostream>
#include <algorithm>
using namespace std;

int fact(int);

int nCr(int n, int r){
  return fact(n) / (fact(r) * fact(n - r));
}

//Returns the factorial of n
int fact(int n){
  int res = 1;
  for (int i = 2; i <= n; i++)
    res = res * i;
  return res;
}

int main() {
  int n = 7, r = 4;
  cout << nCr(n, r);
  return 0;
}
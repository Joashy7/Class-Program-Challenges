#include <iostream>
#include <algorithm>
using namespace std;

int fib(int n){
  if (n <= 1)
    return n;
  return fib(n - 1) + fib(n - 2);
}

int main() {
  int n = 18;
  cout << fib(n);
  return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int fib(int n){
  int a = 0, b = 1, c, i;
  if(n == 1)
    return a;
  for(i = 2; i <= n; i++){
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}
int main() {
  int n = 14;
  cout << fib(n);
  return 0;
}
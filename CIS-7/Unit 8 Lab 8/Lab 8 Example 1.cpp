#include <iostream>
#include <algorithm>
using namespace std;

int Nth_of_AP(int a, int d, int N){
  // Using formula to find the Nth term t(n) = a(1) + (n-1) * d
  return (a + (N - 1) * d);
}
int main() {
  // Starting number
  int a = 1;
  // Common difference
  int d = 7;
  // Nth term to find
  int N = 15;
  // Display the output
  cout << "The " << N << "th term of the series is: " << Nth_of_AP(a, d, N);
  return 0;
}
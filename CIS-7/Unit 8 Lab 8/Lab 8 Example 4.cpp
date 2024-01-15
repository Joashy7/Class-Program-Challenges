#include <iostream>
#include <algorithm>
using namespace std;

//Function to calculate sum of a geometric sequence
float sumOfGP(float a, float r, int n){
  float sum = 0;
  for (int i = 0; i < n; i++){
    sum += a;
    a *= r;
  }
  return sum;
}

int main() {
  //Variables
  // a = first term, r = common ratio, n = number of terms
  float a = 2, r = 0.25, n = 8;
  cout << sumOfGP(a, r, n) << endl;
  return 0;
}
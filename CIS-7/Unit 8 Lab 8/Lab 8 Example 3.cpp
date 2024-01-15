#include <iostream>
#include <algorithm>
using namespace std;


int main() {
  float a, d, n, i,sum;

  cout << "Enter the starting value: ";
  cin >> a;
  cout << "Enter the difference: ";
  cin >> d;
  cout << "Enter the term: ";
  cin >> n;
  cout << endl;

  for(int i = a; i < ((n) * d + a); i += d){
    sum += i;
    cout << i << ", " << endl;
  }

  cout << sum << " is the sum";
  return 0;
}
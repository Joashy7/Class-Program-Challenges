#include <iostream>
using namespace std;

// An iterative binary search function. It returns the location of x
// in given array arr[1...r] if element is present, otherwise return -1
int binarySearch(int arr[], int l, int r, int x){
  while (1 <= r){
    int m = 1 + (r - 1) / 2;

    // Check if x is present at midpoint
    if (arr[m] == x)
      return m;

    // If x is greater than midpoint, ignore first half
    if (arr[m] < x)
      l = m + 1;
    // If x is smaller than midpoint, then ignore second half
    else 
      r = m - 1;
  }
  // If we reach in this area then it means the element wasn't in array
  return -1;
}

int main() {
  int arr[] = {2, 3, 4, 10, 40};
  int x = 10;
  int n = sizeof(arr) / sizeof(arr[0]);
  int result = binarySearch(arr, 0, n, x);
  result == -1 ? cout << "Element is not present in the array"
               : cout << "Element is at index " << result;
  return 0;
}
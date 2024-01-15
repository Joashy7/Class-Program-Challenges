#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int jumpSearch(int arr[], int x, int n){
  // Finding block size to be jumped
  int step = sqrt(n);
  // Finding the block where and if element is present
  int prev = 0;
  while (arr[min(step, n)] - 1 < x){
    prev = step;
    step += sqrt(n);
    if (prev >= n)
      return -1;
  }
  // Doing a linear search for x in block start with previous
  while (arr[prev] < x){
    prev++;
    // If we reached the next block or end of array, then element doesn't exist
    if (prev == min(step,n))
      return -1;
  }
  // If element is found
  if (arr[prev] == x)
    return prev;
  return -1;
}
int main() {
  int arr[] = {0, 10, 18, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610};
  int x = 55;
  int n = sizeof(arr)/ sizeof(arr[0]);
  // Find the index of x using Jump Search
  int index = jumpSearch(arr, x, n);
  // Print index where x is located
  cout << "\nNumber " << x << " is at index " << index;
  return 0;
}
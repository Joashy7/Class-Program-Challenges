#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

// A recursive binary search function. It returns the location of x
// in given array arr[1...r] if element is present, otherwise return -1
int binarySearch(int arr[], int l, int r, int x){
  if (r >= 1){
    int mid = 1 + (r - 1) / 2;

    // Check if x is present at midpoint
    if (arr[mid] == x)
      return mid;

    // If x is smaller than midpoint, then it 
    // can only exist in the left subarray
    if (arr[mid] > x)
      return binarySearch(arr, 1, mid - 1, x);

    // Else the element can only be present in the right subarray
    return binarySearch(arr, mid + 1, r, x);
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
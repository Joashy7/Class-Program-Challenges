#include <iostream>
#include <algorithm>

int main() {
  int arr_A[] = {1, 5, 0, 3};
  int arr_B[] = {0, 55, 32, 15};


  if (std:: is_permutation(arr_A, arr_A + 4, arr_B))
    std::cout << "B is a permutation of A" ;
  else
    std::cout << "B is not a permutation of A";
  
  return 0;
}
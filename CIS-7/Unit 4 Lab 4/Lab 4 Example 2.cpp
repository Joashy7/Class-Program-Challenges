#include <iostream>
#include <algorithm>

int main() {
  int myInts[] = {10,28,33,4};
  
  std::sort(myInts, myInts + 4);
  std::reverse(myInts, myInts + 4);

  std::cout << "The 4! possible permutations with 4 elements:\n";

  int i = 1;
  do{
    std::cout << i << ": " << myInts[0] << ' ' << myInts[1] << ' ' << myInts[2] << ' ' << myInts[3] << "\n";
    i++;

  } while(std::prev_permutation(myInts, myInts + 4));

  std::cout << "After loop: " << myInts[0] << ' ' << myInts[1] << ' ' << myInts[2] << ' ' << myInts[3] << "\n";

  return 0;
}
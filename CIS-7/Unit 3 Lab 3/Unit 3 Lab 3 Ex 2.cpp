#include <iostream>
#include <set>

int main() {
  int myInts[] = {};
  std::set<int> myset (myInts, myInts + 5);

  std::cout << "myset contains: ";
  for (std::set<int>::iterator it = myset.begin(); it != myset.end(); ++it)
    std::cout << " " << *it;

  std::cout << '\n';
  return 0;
}
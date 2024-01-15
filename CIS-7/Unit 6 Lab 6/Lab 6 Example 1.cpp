#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  //Loop 20 times
  for(int i = 1; i <= 40; i++){
    //Pick random number from 1 - 6 and output it
    cout << (1 + (rand()%8));

    //If the iterator is divisible by 5, create new line of output
    if (i % 5 == 0)
      cout << "\n";
  }
  return 0;
}
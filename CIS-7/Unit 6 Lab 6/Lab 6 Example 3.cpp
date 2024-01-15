#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
  //Randomises seed number to create different results each time
  srand(time(NULL));

  //Loop 10 times
  for(int i = 1; i <= 10; i++){
    //Pick random number from 1 - 6 and output it
    cout << (1 + (rand()%6));

    //If the iterator is divisible by 5, create new line of output
    if (i % 5 == 0)
      cout << "\n";
  }
  return 0;
}
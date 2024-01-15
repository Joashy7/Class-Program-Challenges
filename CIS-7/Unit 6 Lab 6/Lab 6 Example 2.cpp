#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
  // Variables for counters of the sides of the dice
  // Counts how many rolls were done and face keeps track of side of die
  int frequency1 = 0, frequency2 = 0, frequency3 = 0, 
  frequency4 = 0, frequency5 = 0, frequency6 = 0, roll, face;

  for(roll =1; roll <= 1000; roll++){
    //Selects a random number from 1 - 6
    face = 1 + rand() % 6;

    //Counts frequency of which face was rolles
    switch (face){
      case 1:
        ++frequency1;
        break;
      case 2:
        ++frequency2;
        break;
      case 3:
        ++frequency3;
        break;
      case 4:
        ++frequency4;
        break;
      case 5:
        ++frequency5;
        break;
      case 6:
        ++frequency6;
        break;
    }
  }

  // Prints out the results of the dice rolls
  cout << "\n" << "Face   " << "Frequency";
  cout << "\n" << "Face 1 " << (frequency1);
  cout << "\n" << "Face 2 " << (frequency2);
  cout << "\n" << "Face 3 " << (frequency3);
  cout << "\n" << "Face 4 " << (frequency4);
  cout << "\n" << "Face 5 " << (frequency5);
  cout << "\n" << "Face 6 " << (frequency6);
  return 0;
}
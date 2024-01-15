//Author: Joash Gem Marcos
#include <iostream>;
using namespace std;

/******************************************

         Function Prototypes Below

*******************************************/
//Function: Array Shifter
//Definition: A second array will be created in this function. The new array will accept all of the values
// of the old array, but will be shifted by 1 element. The first element of the new array will always be 0.
// This function uses dynamic allocation and returns the new array's values as a pointer.
double* array_shifter(double main[], int size) {
    double* shifted = nullptr;
    shifted = new double[size + 1];

    //Sets first element of new array as 0
    shifted[0] = 0;

    //For loop to assign values to the shifted array
    for (int index = 0; index < size; index++) {
        shifted[index + 1] = main[index];
    }
    return shifted;
}

//Function: Array Reverser
//Definition: A second array will be created in this function. The new array will accept all of the values
// of the old array, but will have a reverse sequence. The first element of the new array will be the last element of the old.
// This function defines a new array in the function and returns all values of that new array as pointers
double* array_reverser(double main[], int size) {
    double* reversed = nullptr;
    reversed = new double[size];

    //Counter to keep track of element number
    //When changing values of an array, the last element is the size - 1 of the array
    int counter = size - 1;

    //For loop to assign values to the reversed array, but starts at the last element first and goes down
    for (int index = 0; index < size; index++) {
        reversed[index] = main[counter];
        counter--;
    }
    return reversed;
}

/******************************************

            Main Program Below

*******************************************/
int main() {
    //Input from User
    int InputSize, index;
    double* mainArray = nullptr;
    cout << "The Size of Your Array:" << endl;
    cin >> InputSize;
    mainArray = new double[InputSize];

    //For loop to input all values in an array
    cout << "Please Input All Values Into The Main Array One By One: " << endl;
    for (index = 0; index < InputSize; index++) {
        cin >> mainArray[index];
    }

    //Function Calls
    //Dynamic Allocation needed to return a pointer from an array
    double* shiftedArray = nullptr;
    shiftedArray = array_shifter(mainArray, InputSize);

    double* reversedArray = nullptr;
    reversedArray= array_reverser(mainArray, InputSize);

    // Output For Checking
    cout << "Original Array:" << endl;
    for (index = 0; index < InputSize; index++) {
        cout << mainArray[index] << "  ";
    }
    cout << "\n" << endl;
    cout << "Shifted Array:" << endl;
    for (index = 0; index < (InputSize + 1); index++) {
        cout << shiftedArray[index] << "  ";
    }
    cout << "\n" << endl;
    cout << "Reversed Array:" << endl;
    for (index = 0; index < InputSize; index++) {
        cout << reversedArray[index] << "  ";
    }
    delete[] shiftedArray;
    delete[] reversedArray;
    delete[] mainArray;
}
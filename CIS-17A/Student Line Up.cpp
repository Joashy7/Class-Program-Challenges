//Author: Joash Gem Marcos
#include <iostream>
using namespace std;
/******************************************

		  Global Constants Below

*******************************************/
const int ARRAY_MAX = 25;
/******************************************

			Main Program Below

*******************************************/
int main() {
	//Variables
	int studentNumber, minIndex; // minIndex and minName is used in the selection sort
	string minName;
	string studentNames[ARRAY_MAX];

	//Input
	cout << "Number of Students in the Class: ";
	cin >> studentNumber; 

	// This while statement checks if any other number is inputted and will be repeated until a correct number is inputted
	while (!(studentNumber > 0 && studentNumber <= ARRAY_MAX)) {
		cout << "Invalid Value Entered, Try Again:";
		cin >> studentNumber;
	}

	// This loop is used to add names into an array list, a file can be read instead using the commented code below
	for (int x = 0; x < studentNumber; x++) {
		cout << "Enter Student Name for Number " << x + 1 << " in the List: ";
		cin >> studentNames[x];
	}
	// studentNames[x] >> File;

	// This is a selective sort of the array for student names
	for (int start = 0; start < (studentNumber - 1); start++) {
		minIndex = start;
		minName = studentNames[start];
		for (int index = start + 1; index < studentNumber; index++) {
			if (studentNames[index] < minName) {
				minName = studentNames[index];
				minIndex = index;
			}
		}
		string placeholder; // This is the process of switching between words in an array
		placeholder = studentNames[minIndex];
		studentNames[minIndex] = studentNames[start];
		studentNames[start] = placeholder;
	}

	//Output
	// 0 and -1 is used here due to how arrays organize their lists
	cout << studentNames[0] << " will be the first in line." << endl;
	cout << studentNames[studentNumber - 1] << " will be the last in line." << endl;

}
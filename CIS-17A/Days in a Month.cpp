//Author: Joash Gem Marcos
#include <iostream>
using namespace std;
/******************************************

		  Global Constants Below

*******************************************/
int const SENTINEL = 12;

//Constant String for the month names, just cause
string const MONTH_NAMES[SENTINEL] = { "January", "February", "March", "April", "May",
"June", "July", "August", "September", "October", "November", "December" };

int const MONTH_DAY_VALUES[SENTINEL] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
/******************************************

			Main Program Below

*******************************************/
int main() {
	//Variables
	int monthNumber, yearNumber;
	bool leapYear; //bool value to check if its a leap year or not (1 or 0)


	//Input
	cout << "Enter the number of the month: ";
	cin >> monthNumber;

	//While loop to validate the month number entered
	while (monthNumber < 1 || monthNumber > SENTINEL) {
		cout << "Invalid Value Entered, Try Again: ";
		cin >> monthNumber;
	}
	cout << "Enter the number of the year: ";
	cin >> yearNumber;


	//Calculations
	if (yearNumber % 100 == 0 && yearNumber % 400 == 0) //Checks if year is divisible by 100 and 400
		leapYear = true;
	else if (yearNumber % 4 == 0) //Checks if year is divisible by 4
		leapYear = true;
	else
		leapYear = false;


	//Output
	//The arrays contain -1 due to how arrays count the first value as 0, fixes user input
	if (monthNumber == 2) //This checks the month number so it would add an extra day only for the month of February
		cout << "The month of " << MONTH_NAMES[monthNumber - 1] << " has " << MONTH_DAY_VALUES[monthNumber - 1] + leapYear << " days.";
	else 
		cout << "The month of " << MONTH_NAMES[monthNumber - 1] << " has " << MONTH_DAY_VALUES[monthNumber - 1] << " days.";
}
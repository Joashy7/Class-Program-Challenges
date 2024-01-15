//Author: Joash Gem Marcos
#include <iostream>
#include <string>
using namespace std;

/******************************************

		Global Constants Below

*******************************************/
const int RAINFALL_AND_SNOWFALL_RANGE = 0;
const int MAX_TEMP = 150;
const int MIN_TEMP = -150;
const int MONTH_AMOUNT = 12;

/******************************************

		     Functions Below

*******************************************/
//Structure Yearly
//Groups the values of totalRainfall, totalSnowfall, highTemperature, lowTemperature, and averageTemperature in a structure array
struct Yearly {
	double totalRainfall;
	double totalSnowfall;
	double highTemperature;
	double lowTemperature;
	double averageTemperature;
};

//Function: sortTemp
//Definition: Sorts the all of the low temperatures and high temperatures to find only the highest and lowest values
//Also applies the changes to months to be able to represent which month had the lowest and highest temperatures
void sortTemp(double lowarray[], double higharray[], int& low, int& high, int size) {
	double valuePlaceholder;
	for (int i = 0; i < size; i++) {
		for (int j = 1; j < size - 1; j++) {
			if (higharray[i] < higharray[j]) {
				high = j;
				valuePlaceholder = higharray[i];
				higharray[i] = higharray[j];
				higharray[j] = valuePlaceholder;
			}
			if (lowarray[i] > lowarray[j]){
				low = j;
				valuePlaceholder = lowarray[i];
				lowarray[i] = lowarray[j];
				lowarray[j] = valuePlaceholder;
			}
		}
	}
}

/******************************************

			Main Program Below

*******************************************/
int main() {
	int index; //Used in for loops for calculations
	//Doubles for all the calculations as well as some initialized to 0 for calculating total using +=
	double averageRainfall, averageSnowfall, highestTemp, lowestTemp, averageTemp;
	double totalRainfall = 0, totalSnowfall = 0, totalTemp = 0;

	//Arrays to be able to process high and low temperatures of each month
	double highTempList[MONTH_AMOUNT], lowTempList[MONTH_AMOUNT];
	int lowMonth = 0, highMonth = 0;

	//String array to be able to display the month name
	string monthNames[MONTH_AMOUNT] = { "January", "February", "March", "April", "May",
	"June", "July", "August", "September", "October", "November", "December" };

	//Data Type Name
	Yearly month[MONTH_AMOUNT];

	//Input
	//For loop for all the user input
	//While loops in the loop check user input errors
	for (index = 0; index < MONTH_AMOUNT; index++) {
		//Rainfall and snowfall checks if user input a negative number
		cout << "Enter the total rainfall for the month of " << monthNames[index] << ": ";
		cin >> month[index].totalRainfall;
		while (month[index].totalRainfall < RAINFALL_AND_SNOWFALL_RANGE) {
			cout << "Invalid Value Entered, Try Again: ";
			cin >> month[index].totalRainfall;
		}
		cout << "Enter the total snowfall for the month of " << monthNames[index] << ": ";
		cin >> month[index].totalSnowfall;
		while (month[index].totalSnowfall < RAINFALL_AND_SNOWFALL_RANGE) {
			cout << "Invalid Value Entered, Try Again: ";
			cin >> month[index].totalSnowfall;
		}
		//Highest and lowest temperature check if user input a value less than -150 and more than 150
		cout << "Enter the highest temp for the month of " << monthNames[index] << ": ";
		cin >> month[index].highTemperature;
		while (month[index].highTemperature > MAX_TEMP || month[index].highTemperature < MIN_TEMP) {
			cout << "Invalid Value Entered, Try Again: ";
			cin >> month[index].highTemperature;
		}
		cout << "Enter the lowest temp for the month of " << monthNames[index] << ": ";
		cin >> month[index].lowTemperature;
		while (month[index].lowTemperature > MAX_TEMP || month[index].lowTemperature < MIN_TEMP) {
			cout << "Invalid Value Entered, Try Again: ";
			cin >> month[index].lowTemperature;
		}
		month[index].averageTemperature = (month[index].highTemperature + month[index].lowTemperature) / 2;
		cout << endl; //For input readability
	}

	//Calculations
	//For loop for calculating total rain and snow fall for the year as well as temperature
	//For loop also assigns the low and high temperatures of each month into an array
	for (index = 0; index < MONTH_AMOUNT; index++) {
		totalRainfall += month[index].totalRainfall;
		totalSnowfall += month[index].totalSnowfall;
		totalTemp += month[index].averageTemperature;
		highTempList[index] = month[index].highTemperature;
		lowTempList[index] = month[index].lowTemperature;
	}
	
	//Average to calculate rain and snow fall for the year as well as temperature
	averageRainfall = totalRainfall / MONTH_AMOUNT;
	averageSnowfall = totalSnowfall / MONTH_AMOUNT;
	averageTemp = totalTemp / MONTH_AMOUNT;

	//Function Call
	sortTemp(lowTempList, highTempList, lowMonth, highMonth, MONTH_AMOUNT);

	//Output
	cout << "Average Monthly Rainfall: " << averageRainfall << endl;
	cout << "Total Rainfall For the Year: " << totalRainfall << endl;
	cout << "Average Monthly Snowfall: " << averageSnowfall << endl;
	cout << "Total Snowfall For the Year: " << totalSnowfall << endl;
	cout << "Highest Temperature For the Year: " << highTempList[0] << " on the month of " << monthNames[highMonth] << endl;
	cout << "Lowest Temperature For the Year: " << lowTempList[0] << " on the month of " << monthNames[lowMonth] << endl;
	cout << "Average Temperature For all Average Temps of the Months :" << averageTemp;
}
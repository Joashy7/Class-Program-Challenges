//Author: Joash Gem Marcos
using namespace std;
#include "FuelGauge.h"
#include "Odometer.h"
#include <iostream>


const int MAX_FUEL_CAPACITY = 22;
const int SENTINEL = 0;
int main() {

	int gallonsOfFuel; // Varaible for the user input of gallons of fuel inserted in car
	FuelGauge carFuelGallons; // Tag for the FuelGauge class
	Odometer carMileage; // Tag for the Odometer class

	// Initializes both fuel and mileage to 0
	carFuelGallons.setFuel(0);
	carMileage.setMiles(0);

	// Asks user input for the amount of gallons to put
	cout << "Amount of gallons to input in car: ";
	cin >> gallonsOfFuel;

	// While loop to check for any user error, or to prevent going over the fuel capacity of the car
	while (gallonsOfFuel > MAX_FUEL_CAPACITY || gallonsOfFuel <= SENTINEL) {
		cout << "This amount exceeds the car's fuel carrying capacity or is invalid, re-try input: ";
		cin >> gallonsOfFuel;
	}

	// For loop to show the car being filled and the Fuel Gauge being updated
	for (int index = 0; index < gallonsOfFuel; index++) {
		carFuelGallons.incrementFuel();
		cout << "Fuel Gauge: " << carFuelGallons.getFuel() << " gal" << endl;
	}
	cout << "\n" << endl; // For spacing between both loops


	// While loops until the Fuel Gauge reaches 0. It also prints out the Fuel Gauge and Mileage every iteration
	while (carFuelGallons.getFuel()) {
		carMileage.incrementMiles_decreaseFuel(carFuelGallons);
		cout << "Fuel Gauge: " << carFuelGallons.getFuel() << " gal" << endl;
		cout << "Odometer: " << carMileage.getMiles() << " mil\n" << endl;
	}

	cout << "The car has run out of fuel." << endl;
}
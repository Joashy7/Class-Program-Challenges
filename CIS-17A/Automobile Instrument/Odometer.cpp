//Author: Joash Gem Marcos
#include "Odometer.h"
#include "FuelGauge.h"

void Odometer::setMiles(int mile) {
	mileage = mile;
}

int Odometer::getMiles() {
	return mileage;
}

// Definition: Increases the cars mileage. Every 32 miles, it will decrement the  fuel gauge by one because of 
// the car's fuel economy. Eveytime the odometer maxes out at 999,999 miles, the odometer resets itself back to 0.
void Odometer::incrementMiles_decreaseFuel(FuelGauge& fuelGauge) {
	mileage++;
	if (mileage % 32 == 0)
		fuelGauge.decrementFuel();
	if (mileage == 999999)
		mileage == 0;
}
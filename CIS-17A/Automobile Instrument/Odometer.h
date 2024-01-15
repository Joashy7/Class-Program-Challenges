//Author: Joash Gem Marcos
#ifndef ODOMETER_H
#define ODOMETER_H
#include "FuelGauge.h"

class Odometer {

	private:
		int mileage;

	public:
		void setMiles(int); //Used to initialize odometer to 0 when program starts or reaches the number limit
		int getMiles(); //Used to be able to show the current mileage of the car
		void incrementMiles_decreaseFuel(FuelGauge&); //Used to show the car travelling and using up fuel
};
#endif
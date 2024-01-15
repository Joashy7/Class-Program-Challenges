//Author: Joash Gem Marcos
#include "FuelGauge.h"

void FuelGauge::setFuel(int gal) {
	gallons = gal;
}
int FuelGauge::getFuel() {
	return gallons;
}

void FuelGauge::incrementFuel() {
	gallons++;
}

void FuelGauge::decrementFuel() {
	gallons--;
}
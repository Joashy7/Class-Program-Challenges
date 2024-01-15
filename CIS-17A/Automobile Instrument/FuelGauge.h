//Author: Joash Gem Marcos
#ifndef FUELGAUGE_H
#define FUELGAUGE_H

class FuelGauge {

	private:
		int gallons;

	public:
		void setFuel(int); //Used to initialize fuel at the start of the code
		int getFuel(); // Used to be able to show the fuel of the car
		void incrementFuel(); // Used to increase the gallons of fuel in the car by one
		void decrementFuel(); // Used to decrease the gallons of fuel i nthe car by one
};
#endif

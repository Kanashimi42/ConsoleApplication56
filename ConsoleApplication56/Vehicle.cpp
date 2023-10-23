#include "Vehicle.h"

Vehicle::Vehicle(double t, double p) {
	maxTankVolume = t;
	petrolAmount = p;
}

double Vehicle::getTankVolume() { return maxTankVolume; }
double Vehicle::getPetrolAmount() { return petrolAmount; }
#pragma once
#include "Vehicle.h"
class Truck : public Vehicle {
public:
	Truck(double vehicleT, double vehicleP, double l, double ml);

	double GetCurrentLoad() const; 
	double GetMaxLoad() const;

	void arrive();
	bool leave();
};

#pragma once
#include "Vehicle.h"

class Bus : public Vehicle {
public:
	Bus(double vehicleT, double vehicleP, int p, int mpl);

	int GetPeopleCount();
	int GetMaxPeople();

	void arrive();
	bool leave();
};

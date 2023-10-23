#include "Truck.h"
#include "Base.h"

Truck::Truck(double vehicleT, double vehicleP, double l, double ml) :Vehicle(vehicleT, vehicleP) {
	load = l;
	maxLoad = l;
}

double Truck::GetCurrentLoad() const { return load; }
double Truck::GetMaxLoad() const { return maxLoad; }

void Truck::arrive() {
	if (load <= maxLoad) {
		Base::vehiclesOnBase++;
		Base::peopleOnBase++;
		Base::goodsOnBase += load;
	}
}

bool Truck::leave() {
	if (Base::petrolOnBase != 0 && (Base::petrolOnBase - (maxTankVolume - petrolAmount) > 0) && Base::vehiclesOnBase != 0
		&& Base::peopleOnBase != 0 && petrolAmount <= maxTankVolume) {

		if (load > maxLoad)
			return false;

		Base::peopleOnBase--;
		Base::vehiclesOnBase--;
		Base::goodsOnBase -= load;

		if (Base::goodsOnBase < load) {
			Base::goodsOnBase = 0;
		}

		if (maxTankVolume > petrolAmount) {
			Base::petrolOnBase -= (maxTankVolume - petrolAmount);
			petrolAmount = (maxTankVolume - petrolAmount);
		}

		return true;
	}

	return false;
}
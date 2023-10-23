#include "Bus.h"
#include "Base.h"

Bus::Bus(double vehicleT, double vehicleP, int p, int mpl) :Vehicle(vehicleT, vehicleP) {
    people = p;
    maxPeople = mpl;
}

int Bus::GetPeopleCount() { return people; }
int Bus::GetMaxPeople() { return maxPeople; }

void Bus::arrive() {
    if (people <= maxPeople) {
        Base::peopleOnBase += people;
        Base::vehiclesOnBase++;
    }
}

bool Bus::leave() {
    if (Base::petrolOnBase != 0 && (Base::petrolOnBase - (maxTankVolume - petrolAmount) > 0) && Base::vehiclesOnBase != 0
        && people <= maxPeople && petrolAmount <= maxTankVolume && Base::peopleOnBase != 0) {

        if (Base::peopleOnBase <= people)
            Base::peopleOnBase = 0;
        else {
            Base::peopleOnBase -= people;
            Base::vehiclesOnBase--;
        }
        if (maxTankVolume > petrolAmount) {
            Base::petrolOnBase -= (maxTankVolume - petrolAmount);
            petrolAmount = (maxTankVolume - petrolAmount);
        }
        return true;
    }
    return false;
}

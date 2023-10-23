#pragma once
class Vehicle {
protected:
	double maxTankVolume;
	double petrolAmount; 
	int people; 
	int maxPeople; 
	double load; 
	double maxLoad; 
public:
	Vehicle(double t, double p);
	double getTankVolume(); 
	double getPetrolAmount();
	virtual void arrive() = 0;
	virtual bool leave() = 0;
};

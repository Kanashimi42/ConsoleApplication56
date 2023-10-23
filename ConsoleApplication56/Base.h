#pragma once
#include "Vehicle.h"

class Base {
    Vehicle* vehicle;
public:
    static int peopleOnBase; 
    static int vehiclesOnBase; 
    static double petrolOnBase;
    static double goodsOnBase; 

    Base();
    Base(int peopleOnBase, int vehiclesOnBase, double petrolOnBase, double goodsOnBase);

    void Print() const;
    void AddVehicle(Vehicle*);

    int GetPeopleOnBase() const;
    int GetVehiclesOnBase() const;
    double GetPetrolOnBase() const;
    double GetGoodsOnBase() const;

    void SetPeopleOnBase(int);
    void SetVehiclesOnBase(int);
    void SetPetrolOnBase(double);
    void SetGoodsOnBase(double);
};

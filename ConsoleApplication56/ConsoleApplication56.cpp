#include <iostream>
#include "Base.h"
#include "Vehicle.h"
#include "Bus.h"
#include "Truck.h"

using namespace std;

int main() {
    Base* base = new Base(2000, 200, 5000, 20000);

    Vehicle* bus = new Bus(150, 100, 5, 15);
    Vehicle* truck = new Truck(250, 190, 500, 1000);

    for (int i = 0; i < 15; i++) {
        if (bus->leave())
            cout << "Transport left" << endl;
        else
            cout << "Transport cannot leave" << endl;
    }

    for (int i = 0; i < 2; i++) {
        bus->arrive();
    }

    base->Print();
    cout << endl << endl;

    for (int i = 0; i < 4; i++) {
        if (truck->leave())
            cout << "Truck left" << endl;
        else
            cout << "Truck cannot leave" << endl;
    }

    truck->arrive();

    base->Print();
    cout << endl << endl;

    return 0;
}

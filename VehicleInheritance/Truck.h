#pragma once
#include "Vehicle.h"
class Truck :
    public Vehicle
{
    private:
        int towingCapacity;
    public:
        Truck(int,int,std::string);
        int getTowingCapacity() const;
        void setTowingCapacity(int);
        void displayInfo();
};


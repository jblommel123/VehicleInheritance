#include "Truck.h"


Truck::Truck(int TowingCapacity, int year, std::string manufacturer)
{
	towingCapacity = TowingCapacity;
	setYear(year);
	setManufacturer(manufacturer);
}

int Truck::getTowingCapacity() const
{
	return towingCapacity;
}

void Truck::setTowingCapacity(int TowingCapacity)
{
	towingCapacity = TowingCapacity;
}

void Truck::displayInfo()
{
	std::cout << "Displaying Truck Class Info." << std::endl;
	std::cout << "Towing Capacity: " << Truck::towingCapacity << std::endl;
	Vehicle::displayInfo();
}

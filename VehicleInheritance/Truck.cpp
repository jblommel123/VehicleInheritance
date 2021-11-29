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
	std::cout << "Truck." << std::endl;
	std::cout << "Manufacturer: " << getManufacturer() << std::endl;
	std::cout << "Year: " << getYear() << std::endl;
	std::cout << "Towing Capacity: " << towingCapacity << std::endl;
}

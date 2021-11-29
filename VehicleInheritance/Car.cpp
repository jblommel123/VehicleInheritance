#include "Car.h"

Car::Car()
{
	numberOfDoors = 4;
	setManufacturer("Default");
	setYear(1900);
}

Car::Car(int NumberOfDoors, int Year, std::string Manufacturer)
{
	numberOfDoors = NumberOfDoors;
	setManufacturer(Manufacturer);
	setYear(Year);
}

void Car::displayInfo()
{
	std::cout << "Displaying Car Class Info" << std::endl;
	std::cout << "Number of Doors: " << numberOfDoors << std::endl;
	Vehicle::displayInfo();

}

void Car::setNumberOfDoors(int NumberOfDoors)
{
	numberOfDoors = NumberOfDoors;
}

void Car::setNumberOfDoors()
{
	numberOfDoors = 4;
}

int Car::getNumberOfDoors() const
{
	return numberOfDoors;
}

std::string Car::getManufacturer() const {
	return Vehicle::getManufacturer();
}


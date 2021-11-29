#include "Car.h"

Car::Car()
{
	numberOfDoors = 4;
	setManufacturer("");
	setYear(1900);
}

Car::Car(int, int, std::string)
{
	numberOfDoors = 4;
	setManufacturer("");
	setYear(1900);
}

void Car::displayInfo()
{
	std::cout << "Year: " << getYear() << std::endl;
	std::cout << "Manufacturer: " << getManufacturer() << std::endl;
	std::cout << "Number of Doors: " << numberOfDoors << std::endl;

}

void Car::setNumberOfDoors(int NumberOfDoors)
{
	numberOfDoors = NumberOfDoors;
}

void Car::setNumberOfDoors()
{
	numberOfDoors = 4;
}



int Car::getNumberOfDoors()
{
	return 0;
}

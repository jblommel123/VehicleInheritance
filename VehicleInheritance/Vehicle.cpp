#include "Vehicle.h"

Vehicle::Vehicle()
{
    Year = 1;
    manufacturer = "";
}

Vehicle::Vehicle(std::string Manufacturer, int year) {
    Year = year;
    manufacturer = Manufacturer;
}

std::string Vehicle::getManufacturer() const
{
    return std::string();
}

int Vehicle::getYear() const
{
    return Year;
}



void Vehicle::setManufacturer(std::string Manufacturer)
{
    manufacturer = Manufacturer;
}

void Vehicle::setYear(int year)
{
    Year = year;
}

void Vehicle::displayInfo()
{
    std::cout << "Year: " << Year << std::endl;
    std::cout << "Manufacturer: " << manufacturer << std::endl;
}

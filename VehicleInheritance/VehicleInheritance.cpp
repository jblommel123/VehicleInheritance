#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"

#include <iostream>

int main()
{

    //Create Vehicle and Display info
    std::cout << "Vehicle Inheritance" << std::endl;
    std::cout << "Create Vehicle" << std::endl;
    std::cout << "Enter Manufacturer: " << std::endl;
    std::string inputManufacturer;
    std::getline(std::cin,inputManufacturer);
    int year;
    std::string inputYear;
    std::cout << "Enter Year: " << std::endl;
    std::getline(std::cin, inputYear);
    year = stoi(inputYear);
    Vehicle newVehicle(inputManufacturer,year);
    newVehicle.displayInfo();

    //Create Car and Display Info
    int numberOfDoors;
    std::cout << "Car: " << std::endl;
    std::cout << "Create Car:" << std::endl;
    std::cout << "Number of Doors: " << std::endl;
    std::string numOfDoors;
    std::getline(std::cin,numOfDoors);
    numberOfDoors = stoi(numOfDoors);
    std::cout << "Manufacturer: " << std::endl;
    std::getline(std::cin, inputManufacturer);
    std::cout << "Year: " << std::endl;
    std::getline(std::cin, inputYear);
    year = stoi(inputYear);

    Car newCar(numberOfDoors, year, inputManufacturer);
    newCar.displayInfo();

    //Create Car and Display Info
    int towingCapacity;
    std::cout << "Truck: " << std::endl;
    std::cout << "Enter Manufacturer: " << std::endl;
    std::getline(std::cin, inputManufacturer);
    std::cout << "Enter Year: " << std::endl;
    std::getline(std::cin, inputYear);
    year = stoi(inputYear);
    std::cout << "Enter towing capacity: " << std::endl;
    std::string inputTowingCapacity;
    std::getline(std::cin, inputTowingCapacity);
    towingCapacity = stoi(inputTowingCapacity);

    Truck newTruck(towingCapacity, year, inputManufacturer);
    newTruck.displayInfo();


    
    

}



#pragma once
#ifndef VEHICLE_H

#define VEHICLE_H
#include <iostream>
#include <string>
class Vehicle
{
	private:
		std::string manufacturer;
		int Year;
	public:
		Vehicle();
		Vehicle(std::string,int);
		std::string getManufacturer() const;
		int getYear() const;
		void setManufacturer(std::string Manufacturer);
		void setYear(int year);
		void displayInfo();

};

#endif // !VEHICLE_H
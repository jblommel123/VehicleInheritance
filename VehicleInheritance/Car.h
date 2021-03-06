#pragma once
#ifndef Car_H
#include "Vehicle.h"


class Car : public Vehicle
{
	private:
		int numberOfDoors;
	public:
		Car();
		Car(int,int,std::string);
		void displayInfo();
		void setNumberOfDoors(int NumberOfDoors);
		void setNumberOfDoors();
		int getNumberOfDoors() const;
		std::string getManufacturer() const;

};


#endif // !Car_H

#include <iostream>

#include "parkinglot.h"
#include "vehicle.h"

ParkingLot::ParkingLot(){
	count = 0;
}

void ParkingLot::addVehicle(Vehicle *v){
	vehicles.push_back(v);
	std::cout << "Added to vector" << std::endl;
	count++;
}

int ParkingLot::getVehicleCount() const{
	return vehicles.size();
}

void ParkingLot::printVehicles() const{
	for(int i = 0; i < getVehicleCount(); i++){
		vehicles[i]->print();
	}
}



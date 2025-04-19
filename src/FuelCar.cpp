#include "../inc/Car.h"
#include "../inc/FuelCar.h"
#include <iostream>
#include <string>

using namespace std;

void FuelCar::setEngineCapacity(double engineCapacity){
    this->engineCapacity = new double(engineCapacity);
}

void FuelCar::setFuelLevel(double fuelLevel){
    this->fuelLevel = new double(fuelLevel);
}

void FuelCar::setAverageFuelConsumption(double averageFuelConsumption){
    this->averageFuelConsumption = new double(averageFuelConsumption);
}

void FuelCar::fillUpTheCar(double fuelLevel){
    double newFuelLevel;

    newFuelLevel = getFuelLevel() + fuelLevel;

    if(newFuelLevel < *engineCapacity){
        setFuelLevel(newFuelLevel);
        cout << "Car filled up! New fuel level: " << getFuelLevel() << endl;
    }
    else{
        cout << "Engine capacity exceeded! Try again. \n";
    }
}

double FuelCar::getEngineCapacity() const{
    return *engineCapacity;
}

double FuelCar::getFuelLevel() const{
    return *fuelLevel;
}

double FuelCar::getAverageFuelConsumption() const{
    return *averageFuelConsumption;
}

FuelCar::FuelCar(string brand, string colour, string fuelType, string registration, double weight, 
        int productionYear, int mileage, double engineCapacity, double fuelLevel, double averageFuelConsumption) :
        Car(brand, colour, fuelType, registration, weight, productionYear, mileage), 
        engineCapacity(new double(engineCapacity)), fuelLevel(new double(fuelLevel)), 
        averageFuelConsumption(new double(averageFuelConsumption)){}

FuelCar::~FuelCar(){
    delete engineCapacity;
    delete fuelLevel;
    delete averageFuelConsumption;
}

void FuelCar::showParameters() const{
    Car::showParameters();
    cout << "Engine capacity: " << getEngineCapacity() << " [L]" << endl;
    cout << "Fuel level: " << getFuelLevel() << " [%]" << endl;
    cout << "Average fuel consumption: " << getAverageFuelConsumption() << " [l/100km]" << endl;
};
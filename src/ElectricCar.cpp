#include "../inc/Car.h"
#include "../inc/ElectricCar.h"
#include <iostream>
#include <string>

using namespace std;

void ElectricCar::setBatteryLevel(int batteryLevel){
    this->batteryLevel = new int(batteryLevel);
}

void ElectricCar::setDrivingMode(bool drivingMode){
    //0 - Eco, 1 - Sport
    this->drivingMode = new bool(drivingMode);
}

void ElectricCar::rechargeBattery(int batteryLevel){
    double newBatteryLevel;

    newBatteryLevel = getBatteryLevel() + batteryLevel;

    if(newBatteryLevel < 100){
        setBatteryLevel(newBatteryLevel);
        cout << "Battery recharged! New battery level: " << getBatteryLevel() << endl;
    }
    else{
        setBatteryLevel(100);
        cout << "Battery recharged! New battery level: " << getBatteryLevel() << endl;
    }
}

int ElectricCar::getBatteryLevel() const{
    return *batteryLevel;
}

bool ElectricCar::getDrivingMode() const{
    return *drivingMode;
}

ElectricCar::ElectricCar(string brand, string colour, string fuelType, 
    string registration, double weight, int productionYear, int mileage,
    int batteryLevel, bool drivingMode) : 
    Car(brand, colour, fuelType, registration, weight, productionYear, mileage), 
    batteryLevel(new int(batteryLevel)), drivingMode(new bool(drivingMode)){}

ElectricCar::~ElectricCar(){
    delete batteryLevel;
    delete drivingMode;
}    

void ElectricCar::showParameters() const{
    Car::showParameters();
    cout << "Battery level: " << getBatteryLevel() << " [%]"<< endl;
    cout << "Driving mode: " << (getDrivingMode() ? "Sport" : "Eco") << endl;
}
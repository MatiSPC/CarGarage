#pragma once
#include "../inc/Car.h"
#include <iostream>
#include <string>

class ElectricCar : public Car{
    private:
    int* batteryLevel;
    bool* drivingMode;
    public:
    void setBatteryLevel(int batteryLevel);

    void setDrivingMode(bool drivingMode);

    void rechargeBattery(int batteryLevel);

    int getBatteryLevel() const;

    bool getDrivingMode() const;

    ElectricCar(std::string brand, std::string colour, std::string fuelType, 
        std::string registration, double weight, int productionYear, int mileage,
        int batteryLevel, bool drivingMode);

    ~ElectricCar();

    void showParameters() const override;
};
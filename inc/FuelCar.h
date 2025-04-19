#pragma once
#include "../inc/Car.h"
#include <iostream>
#include <string>

class FuelCar : public Car{
    private:
    double* engineCapacity;
    double* fuelLevel;
    double* averageFuelConsumption;
    public:
    void setEngineCapacity(double engineCapacity);

    void setFuelLevel(double fuelLevel);

    void setAverageFuelConsumption(double averageFuelConsumption);

    void fillUpTheCar(double fuelLevel);

    double getEngineCapacity() const;

    double getFuelLevel() const;

    double getAverageFuelConsumption() const;

    FuelCar(std::string brand, std::string colour, std::string fuelType, 
        std::string registration, double weight, int productionYear, int mileage,
        double engineCapacity, double fuelLevel, double averageFuelConsumption);

    ~FuelCar();

    void showParameters() const override;
};
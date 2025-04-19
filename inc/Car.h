#pragma once
#include <iostream>
#include <string>

class Car{
    private:
    std::string* brand;
    std::string* colour;
    std::string* fuelType;
    std::string* registration;
    double* weight;
    int* productionYear;
    int* mileage;

    public:
    void setBrand(std::string brand);

    void setColour(std::string colour);

    void setFuelType(std::string fuelType);

    void setRegistration(std::string registration);

    void setWeight(double weight);

    void setProductionYear(int productionYear);

    void setMileage(int mileage);

    std::string getBrand() const;

    std::string getColour() const;

    std::string getFuelType() const;

    std::string getRegistration() const;

    double getWeight() const;

    int getProductionYear() const;

    int getMileage() const;

    Car();

    Car(std::string brand, std::string colour, std::string fuelType, std::string registration, 
        double weight, int productionYear, int mileage);

    Car(const Car& copy);

    virtual ~Car();

    virtual void showParameters() const;
};
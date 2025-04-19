#include "../inc/Car.h"
#include <string>
#include <iostream>

void Car::setBrand(std::string brand){
    this->brand = new std::string(brand);
}

void Car::setColour(std::string colour){
    this->colour = new std::string(colour);
}

void Car::setFuelType(std::string fuelType){
    this->fuelType = new std::string(fuelType);
}

void Car::setRegistration(std::string registration){
    this->registration = new std::string(registration);
}

void Car::setWeight(double weight){
    this->weight = new double(weight);
}

void Car::setProductionYear(int productionYear){
    this->productionYear = new int(productionYear);
}

void Car::setMileage(int mileage){
    this->mileage = new int(mileage);
}

std::string Car::getBrand() const{
    return *brand;
}

std::string Car::getColour() const{
    return *colour;
}

std::string Car::getFuelType() const{
    return *fuelType;
}

std::string Car::getRegistration() const{
    return *registration;
}

double Car::getWeight() const{
    return *weight;
}

int Car::getProductionYear() const{
    return *productionYear;
}

int Car::getMileage() const{
    return *mileage;
}

Car::Car(){
    brand = new std::string("None");
    colour = new std::string("None");
    fuelType = new std::string("None");
    registration = new std::string("None");
    weight = new double(0.0);
    productionYear = new int(0);
    mileage = new int(0);

}

Car::Car(std::string brand, std::string colour, std::string fuelType, std::string registration, 
    double weight, int productionYear, int mileage){
    setBrand(brand);
    setColour(colour);
    setFuelType(fuelType);
    setRegistration(registration);
    setWeight(weight);
    setProductionYear(productionYear);
    setMileage(mileage);
}

Car::Car(const Car& copy) {
    brand = new std::string(*copy.brand);
    colour = new std::string(*copy.colour);
    fuelType = new std::string(*fuelType);
    registration = new std::string(*registration);
    weight = new double(*copy.weight);
    productionYear = new int(*copy.productionYear);
    mileage = new int(*mileage);

}

Car::~Car(){
    delete brand;
    delete colour;
    delete fuelType;
    delete registration;
    delete weight;
    delete productionYear;
    delete mileage;
}

void Car::showParameters() const{
    std::cout << "Brand: " << Car::getBrand() << std::endl;
    std::cout << "Year of production: " << Car::getProductionYear() << std::endl;
    std::cout << "Registration: " << Car::getRegistration() << std::endl;
    std::cout << "Colour: " << Car::getColour() << std::endl;
    std::cout << "Weight: " << Car::getWeight() << " [kg]"<< std::endl;
    std::cout << "Fuel type: " << Car::getFuelType() << std::endl;
    std::cout << "Mileage: " << Car::getMileage() << " [km]" << std::endl;
}
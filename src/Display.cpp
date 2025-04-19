#include "../inc/Display.h"
#include "../inc/Car.h"
#include <iostream>

void Display::showParameters(const Car& c) const{
    std::cout << "===VEHICLE CONDIDITON===" << std::endl;
    c.showParameters();
    std::cout << "========================" << std::endl;
}
#include <iostream>
#include <string>
#include "../inc/Car.h"
#include "../inc/ElectricCar.h"
#include "../inc/FuelCar.h"
#include "../inc/Display.h"

using namespace std;

void showMenu(){
    cout << "======= GARAGE =======\n";
    cout << "1. Show car's parameters by registration\n";
    cout << "2. Fill up the car\n";
    cout << "3. Recharge car's battery\n";
    cout << "4. Add new car to the garage\n";
    cout << "5. Exit\n";
    cout << "======================\n";
}

int choiceMenu(int &choice){
    cout << "What is your choice: \n";
    cin >> choice;
    return choice;
}

int main(){
    int choice = 0;
    Car* car1 = new FuelCar("BMW", "Black", "Petrol", "KR00223", 1000.5, 2022, 30000, 50, 40, 10.5);
    Display display;
    display.showParameters(*car1);

    Car* car2 = new ElectricCar("Tesla", "White", "Electric", "KK3SR45", 75., 2024, 2000, 100, 1);
    display.showParameters(*car2);

    do{
        showMenu();
        choiceMenu(choice);

        switch (choice){
            case 1: {
                display.showParameters(*car2);
                break;
            }
            case 2: {
                double refuel;
                FuelCar* fuelCar = dynamic_cast<FuelCar*>(car1);

                cout << "How many liters do you want to refuel? \n";

                cin >> refuel;

                if (fuelCar != nullptr){
                    fuelCar->fillUpTheCar(refuel);
                } 
                else{
                    cout << "This car is not a fuel car!\n";
                }

                break;
            }
            case 3: {
                double recharge;
                ElectricCar* electricCar = dynamic_cast<ElectricCar*>(car2);

                cout << "How many [%] do you want to recharge? \n";

                cin >> recharge;

                if (electricCar != nullptr){
                    electricCar->rechargeBattery(recharge);
                } 
                else{
                    cout << "This car is not an electric car!\n";
                }
                break;
            }
            case 4: {
                cout << "Adding new car! \n";
                break;
            }
            case 5: {
                cout << "Closing the garage... \n";
                break;
            }
            default: {
                cout << "Incorrect choice. Please try again! \n";
                break;
            }
        }
    } while(choice != 5);

    delete car1;
    delete car2;
    return 0;
}
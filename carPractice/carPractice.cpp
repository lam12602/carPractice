// carPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Car.h"

void CarValues(Car stats)
{
    std::cout << "the car make is " << stats.make << " the model is " << stats.model << "\n There are " << stats.doors << " doors the mileage is " << stats.mileage << " with a MPG of " << stats.MPG << " and currently has a petrol of " << stats.petrol << ".\n";
}

int main()
{
    std::cout << "Hello World!\n";

    Car car1;

    car1.make = "big";
    car1.model = "one";
    car1.doors = 2;
    car1.mileage = 60.0f;
    car1.MPG = 20.0f;
    car1.petrol = 10.0f;

    Car car2;

    car2.make = "small";
    car2.model = "two";
    car2.doors = 4;
    car2.mileage = 80.0f;
    car2.MPG = 15.0f;
    car2.petrol = 4.0f;

    CarValues(car1);
    CarValues(car2);
}



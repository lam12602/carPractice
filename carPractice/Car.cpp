#include "Car.h"
#include <iostream>

void Car::carStats()
{
	std::cout << "the car make is " << make << " the model is " << model << "\n There are " << doors << " doors the mileage is " << mileage << " with a MPG of " << MPG << " and currently has a petrol of " << petrol << ".\n";
}

void Car::drive()
{
	std::cout << "Enter how many miles to drive \n ";
	std::cin >> milesDriven;
	mileage = mileage + milesDriven;
	fuleUsed = milesDriven / MPG;
	petrol = petrol - fuleUsed;
	std::cout << "The mileage is now " << mileage << " and the fule is now at" << petrol << "\n";
}

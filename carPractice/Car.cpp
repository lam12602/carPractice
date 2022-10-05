#include "Car.h"
#include <iostream>

Car::Car()
	:make("")
	, model("")
	, doors(0)
	, mileage(0)
	, MPG(0)
	,petrol(0)
	,milesDriven(0)
	,fuleUsed(0)
	,parked(false)
	,carMap()
{
	std::cout << "Car made\n";
}

Car::Car(std::string newmake, std::string newModel, int newDoors, float newMileage, float newMPG, float newPetrol)
	:make(newmake)
	, model(newModel)
	, doors(newDoors)
	, mileage(newMileage)
	, MPG(newMPG)
	, petrol(newPetrol)
{
	std::cout << "car with parameters\n";
}

Car::~Car()
{
	std::cout << "Car " << model << " was destoryed\n";
}

/*int Car::serialGet(int getS)
{
	return carMap[getS] ;
}
*/
 

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

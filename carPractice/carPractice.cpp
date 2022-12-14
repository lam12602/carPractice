// carPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Car.h"
#include <vector>
#include<map>

void CarValues(Car stats)
{
    std::cout << "the car make is " << stats.make << " the model is " << stats.model << "\n There are " << stats.doors << " doors the mileage is " << stats.mileage << " with a MPG of " << stats.MPG << " and currently has a petrol of " << stats.petrol << ".\n";
}

void work(int& x)
{
    x++;
}
void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 5;
    int& b = a;
    int c = 10;
    std::cout << "a = " << a << " and b = " << b << " and c is " << c << "\n";
    work(a);
    std::cout << "a is now " << a << "\n";
    swap(a, c);
    std::cout << "a is now " << a <<  " and c is now " << c << "\n";

    Car car1;

    car1.make = "big";
    car1.model = "one";
    car1.doors = 2;
    car1.mileage = 600000.0f;
    car1.MPG = 20.0f;
    car1.petrol = 100.0f;
    car1.serialNumber = 32;
    car1.parked = false;


    Car car2;

    car2.make = "small";
    car2.model = "two";
    car2.doors = 4;
    car2.mileage = 800000.0f;
    car2.MPG = 15.0f;
    car2.petrol = 400.0f;
    car2.serialNumber = 56;
    car2.parked = true;

    Car car3;

    Car car4("some", "thing", 3, 700000, 20, 450);

    std::map<int, Car> CarMap;

    CarMap[32] = car1;
    CarMap[56] = car2;
    
    /*std::cout << "What serial number" << std::endl;

    int getS;
    std::cin >> getS;

    std::cout << std::endl;
    std::cout << Car.serialGet(getS) << std::endl;
    */
    std::vector<Car> carVector;
    carVector.push_back(car1);
    carVector.push_back(car2);
    carVector.push_back(car3);
    carVector.push_back(car4);

    for (int i = 0; i < carVector.size(); ++i)
    {
        carVector[i].carStats();
    }

    

    //CarValues(car1);
    //CarValues(car2);
    //car1.carStats();
    //car2.carStats();
    //car4.carStats();
    //car1.drive();
    //car2.drive();
    //car1.drive();
    //car3.carStats();
    //car3.drive();

}



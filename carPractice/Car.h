#pragma once
#include <string>
class Car
{
public:

		Car();
		Car(std::string newmake,std::string newModel, int newDoors, float newMileage, float newMPG, float newPetrol  );
		
		~Car();

		void carStats();
		void drive();

		std::string make;
		std::string model;
		int doors;
		float mileage;
		float MPG;
		float petrol;
		float milesDriven;
		float fuleUsed;

	

	

};


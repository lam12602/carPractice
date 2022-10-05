#pragma once
#include "Car.h"
class parkingSpace
{ public:
	

	parkingSpace();

	void park(Car parked);
	void exit(Car leave);
	
	Car carNo;
	bool ocupied;
};


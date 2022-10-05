#include "parkingSpace.h"

parkingSpace::parkingSpace()
	:ocupied (false)
	,carNo()

{
}

void parkingSpace::park(Car parked)
{
	carNo = parked;
	ocupied = true;
	
	
}

void parkingSpace::exit(Car leave)
{
	ocupied = false;


}

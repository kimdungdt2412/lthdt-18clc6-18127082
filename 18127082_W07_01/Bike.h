#ifndef _BIKE_H_
#define _BIKE_H_

#include "Vehicle.h"

class Bike :public Vehicle
{
public:
	 void add_a_weight();
	 void remove_a_weight();
	 void add_fuel();
	 void length();
	 void fuel_left();
	 float litter_km();
	 float getMore();
};

#endif // !_BIKE_H_

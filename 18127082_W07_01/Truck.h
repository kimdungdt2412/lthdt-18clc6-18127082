#include "Vehicle.h"

class Truck :public Vehicle
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
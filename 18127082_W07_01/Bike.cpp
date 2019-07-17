#include "Bike.h"

void Bike::add_a_weight()
{
	Vehicle::add_a_weight();
}
void Bike::remove_a_weight()
{
	Vehicle::remove_a_weight();
}
void Bike::add_fuel()
{
	Vehicle::add_fuel();
}

float Bike::litter_km()
{
	return average = 0.02;
}
float Bike::getMore()
{
	return consumes_more = 0.1;
}
void Bike::length()
{
	Vehicle::length();
}
void Bike::fuel_left()
{
	Vehicle::fuel_left();
	
}
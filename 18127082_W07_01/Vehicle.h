#ifndef _VEHICLE_
#define _VEHICLE_

#include <iostream>
using namespace std;

class Vehicle
{
protected:
	float m_fuel;
	float m_weight;
	float m_length;
	float average;
	float consumes_more;
	
public:
	 void add_a_weight();
	 void remove_a_weight();
	virtual void add_fuel();
	virtual void length();
	virtual void fuel_left();
	virtual float litter_km();
	virtual float getMore();



};
#endif // !_VEHICLE_

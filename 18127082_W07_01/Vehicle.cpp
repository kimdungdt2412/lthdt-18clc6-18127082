#include "Vehicle.h"

void Vehicle::add_a_weight()
{
	float kg;
	do
	{
		cout << "How many kilogram you want to add a weight of goods to the vehicle: ";
		cin >> kg;
	} while (kg < 0);
	m_weight = kg;

}
void Vehicle::remove_a_weight()
{
	float kg;
	do{
		cout << "How many kilogram you want to remove a weight of goods to the vehicle: ";
		cin >> kg;
	} while (kg>m_weight);
	m_weight = m_weight - kg;

}
void Vehicle::add_fuel()
{
	float litters;
	do {
		cout << "How many litters you want to add an amount of fuel to the vehicle: ";
		cin >> litters;
	} while (litters < 0);
	m_fuel = litters;

}
float Vehicle::litter_km()
{
	
	return average=0;
}
float Vehicle::getMore()
{
	return consumes_more=0;
}
void Vehicle::length()
{

	do {
		cout << "How many kilometters you want the vehicle running: ";
		cin >> m_length;
	} while (m_length <0 );
}
void Vehicle::fuel_left()
{
	float fuel1;
	fuel1 = (average + 0.1 * (m_weight / 10)) * m_length;
	m_fuel = m_fuel - fuel1;
	cout << "The current fuel left in the vehicle: " << m_fuel << endl;
}

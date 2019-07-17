#include "Bike.h"
#include "Truck.h"

int main()
{
	Bike b;
	Truck t;
	cout << "Motorbike" << endl;
	b.add_a_weight();
	b.remove_a_weight();
	b.add_fuel();
	b.length();
	b.fuel_left();
	cout << "Truck" << endl;
	t.add_a_weight();
	t.remove_a_weight();
	t.add_fuel();
	t.length();
	t.fuel_left();
	system("pause");
	return 0;
}
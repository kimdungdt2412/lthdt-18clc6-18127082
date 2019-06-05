#ifndef _FRACTION_H_
#define _FRACTION_H_

#include <iostream>;
#include <string>;
#include <assert.h>
using namespace std;

class Fraction
{
private:
	int nu, de;
public:
	Fraction();
	int gcd(int n, int d);
	void reduce();
	Fraction(int numerator, int denominator);
	Fraction& operator+(Fraction& fr);
	Fraction& operator-(Fraction& fr);
	Fraction& operator/(Fraction& fr);
	Fraction& operator*(Fraction& fr);
	Fraction& operator=(Fraction& fr);
	bool operator==(Fraction& fr);
	bool operator!=(Fraction& fr);
	bool operator>(Fraction& fr);
	bool operator>=(Fraction& fr);
	bool operator<(Fraction& fr);
	bool operator<=(Fraction& fr);
	Fraction& operator++();
	Fraction& operator--();
	Fraction& operator+=(Fraction& fr);
	Fraction& operator-=(Fraction& fr);
	Fraction& operator*=(Fraction& fr);
	Fraction& operator/=(Fraction& fr);
	friend ostream& operator <<  (ostream& out, Fraction& fr);
	Fraction& operator-(const int x);
	Fraction& operator+(const int x);
	Fraction& operator*(const int x);
	Fraction& operator+(const int y);






};
#endif // !_FRACTION_H_

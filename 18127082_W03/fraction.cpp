#include "fraction.h"


Fraction::Fraction()
{

		nu = 0;
		de = 0;
	
}
int Fraction::gcd(int n, int d)
{
	if (n < 0)
		n = -n;
	if (d < 0)
		d = -d;
	if (n< d)
		return gcd(d, n);
	if (d == 0)
		return n;
	return gcd(d, n % d);
}
Fraction::Fraction(int numerator, int denominator)
{
	nu = numerator;
	de = denominator;
}
void Fraction::reduce()
{
	int sign = 1;
	if (nu < 0)
	{
		sign = -1;
		nu = -nu;
	}
	if (nu < 0)
	{
		sign = -1;
		de = -de;
	}
	assert(de != 0);
	int d = 1;
	if (nu > 0)
	{
		d = gcd(nu, de);
		nu = sign * (nu/ d);
		de = de / d;
	}
}
Fraction& Fraction::operator+(Fraction &fr)
{
	Fraction r;
	r.nu = (nu * fr.de) + (de* fr.nu);
	r.de = de * fr.de;
	return r;
}
Fraction& Fraction::operator-(Fraction& fr)
{
	Fraction r;
	r.nu = (nu * fr.de) - (de * fr.nu);
	r.de = de * fr.de;
	return(r);
}
Fraction& Fraction::operator*(Fraction& fr)
{
	Fraction r;
	r.nu = (nu * fr.nu);
	r.de = de * fr.de;
	return (r);

}
Fraction& Fraction::operator/(Fraction& fr) 
{
	Fraction r;
	r.nu = nu * fr.de;
	r.de = de * fr.nu;
}
Fraction& Fraction::operator=(Fraction& fr)
{
	if (this != &fr)
	{                         
		nu = fr.nu;
		de = fr.de;
	}
	else
		return *this;
}
bool Fraction::operator > (Fraction& fr)
{
	if (((int)nu/ de) > ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
bool Fraction::operator==(Fraction& fr)
{
	if (((int)nu / de) == ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
bool Fraction::operator>=(Fraction& fr)
{
	if (((int)nu /de) >= ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
bool Fraction::operator<(Fraction& fr)
{
	if (((int)nu / de) < ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
bool Fraction::operator<=(Fraction& fr)
{
	if (((int)nu / de) <= ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
bool Fraction::operator!=(Fraction& fr)
{
	if (((int)nu / de) != ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
Fraction& Fraction::operator++()
{
	nu += de;
	reduce();
	return *this;
}
Fraction& Fraction::operator--()
{
	nu -= de;
	reduce();
	return *this;
}
Fraction& Fraction::operator+=(Fraction &fr)
{
	nu = nu * fr.de + de * fr.nu;
	de = de * fr.de;
	reduce();
	return *this;
}
Fraction& Fraction::operator-=(Fraction& fr)
{
	nu = nu * fr.de - de * fr.nu;
	de = de * fr.de;
	reduce();
	return *this;
}
Fraction& Fraction::operator*=(Fraction& fr)
{

	nu = nu * fr.nu;
	de = de * fr.de;
	reduce();
	return *this;
}
Fraction& Fraction::operator/=(Fraction& fr)
{
	nu = nu * fr.de;
	de = de * fr.nu;
	reduce();
	return *this;
}
ostream& operator <<  (ostream& out, Fraction& fr)
{
	if (fr.de != 1)
	{
		out << fr.nu << "/" << fr.de;
	}
	else
		cout << fr.nu;
	return out;
}
Fraction& Fraction::operator-(const int x)
{
	Fraction r;
	r.nu = nu - de * x;
	r.de = de;
	return r;
}
Fraction& Fraction::operator+(const int x)
{
	Fraction r;
	r.nu = nu + de * x;
	r.de = de;
	return r;
}
Fraction& Fraction::operator*(const int x)
{
	Fraction r;
	r.nu = x*nu;
	r.de = de;
	return r;

}
Fraction& Fraction::operator+(const int y)
{
	Fraction r;
	r.nu = de * y + nu;
	r.de = de;
	return r;


}




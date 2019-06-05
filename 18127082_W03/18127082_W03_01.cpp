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
template <class T>
class stack
{
private:
	T* elements;
	int count;
	int m_size;
public:
	
	stack();
	void push(T data);
	void pop();
	T getTop();
	bool isEmpty();
	bool isFull();
	void empty();
	int m_count();


};

template<class T>
stack<T>::stack()
{
	elements = new T[m_size];
	m_size = 100;
	count = 0;


}
template <class T>
bool stack<T>::isFull()
{
	if (count==m_size)
	{
		return true;
	}
	else
		return false;
}
template<class T>
bool stack<T>::isEmpty()
{
	return count == 0;
}

template<class T>
void stack<T>::push(T data)
{
	if (count==m_size)
	{
		cout << "overflow" << endl;
		exit(EXIT_FAILURE);
	}

	elements[count++] = data;


}
template<class T>
void stack<T>::pop()
{
	if (count == 0)
	{
		cout << "Failed" << endl;
		exit(EXIT_FAILURE);
	}
	count--;
}
template<class T>
void stack<T>::empty()
{
	delete[] elements;
	stack();
}
template <class T>
T stack<T>::getTop()
{
	T x = elements[m_size - (m_size - 1)];
	return x;

}
template<class T>
int stack<T>::m_count()
{
	return count;
}
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
	if (n < d)
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
		nu = sign * (nu / d);
		de = de / d;
	}
}
Fraction& Fraction::operator+(Fraction & fr)
{
	Fraction r;
	r.nu = (nu * fr.de) + (de * fr.nu);
	r.de = de * fr.de;
	return r;
}
Fraction& Fraction::operator-(Fraction & fr)
{
	Fraction r;
	r.nu = (nu * fr.de) - (de * fr.nu);
	r.de = de * fr.de;
	return(r);
}
Fraction& Fraction::operator*(Fraction & fr)
{
	Fraction r;
	r.nu = (nu * fr.nu);
	r.de = de * fr.de;
	return (r);

}
Fraction& Fraction::operator/(Fraction & fr)
{
	Fraction r;
	r.nu = nu * fr.de;
	r.de = de * fr.nu;
}
Fraction& Fraction::operator=(Fraction & fr)
{
	if (this != &fr)
	{
		nu = fr.nu;
		de = fr.de;
	}
	else
		return *this;
}
bool Fraction::operator > (Fraction & fr)
{
	if (((int)nu / de) > ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
bool Fraction::operator==(Fraction & fr)
{
	if (((int)nu / de) == ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
bool Fraction::operator>=(Fraction & fr)
{
	if (((int)nu / de) >= ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
bool Fraction::operator<(Fraction & fr)
{
	if (((int)nu / de) < ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
bool Fraction::operator<=(Fraction & fr)
{
	if (((int)nu / de) <= ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
bool Fraction::operator!=(Fraction & fr)
{
	if (((int)nu / de) != ((int)fr.nu / fr.de))
		return true;
	else
		return false;
}
Fraction & Fraction::operator++()
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
Fraction& Fraction::operator+=(Fraction & fr)
{
	nu = nu * fr.de + de * fr.nu;
	de = de * fr.de;
	reduce();
	return *this;
}
Fraction& Fraction::operator-=(Fraction & fr)
{
	nu = nu * fr.de - de * fr.nu;
	de = de * fr.de;
	reduce();
	return *this;
}
Fraction& Fraction::operator*=(Fraction & fr)
{

	nu = nu * fr.nu;
	de = de * fr.de;
	reduce();
	return *this;
}
Fraction& Fraction::operator/=(Fraction & fr)
{
	nu = nu * fr.de;
	de = de * fr.nu;
	reduce();
	return *this;
}
ostream& operator <<  (ostream & out, Fraction & fr)
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
	r.nu = x * nu;
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

int main()
{
	
	stack<int> m_stack;
	int sum = 0;
	cout << "Size: " << m_stack.m_count()<< endl;
	cout << "the Top element" << m_stack.getTop() << endl;
	for (int i = 0; i < 5; i++)
	{
		m_stack.push(i);
	}
	while (m_stack.isEmpty())
    {
	sum += m_stack.getTop();
	m_stack.pop();
	}
	stack<string> hihi;
	hihi.push("Aaaa");
	hihi.push("Bbbb");


	return 0;

}
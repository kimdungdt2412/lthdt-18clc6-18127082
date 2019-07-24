#include<iostream>
#include<exception>
#include<string>

using namespace std;

class DividedByZeroException : public exception
{
public:
	const char* what() const throw()
	{
		return "Message: Divided by zero exception";
	}

};
int main()
{
	int x = 20;
	int y = 0;
	int z;
	try {
		if (y == 0)
			throw DividedByZeroException();
		z = x / y;
		cout << z << endl;
	}
	catch (DividedByZeroException & ex) {
		cout << ex.what() << endl;
	}
	cout << "End of program" << endl;
	return 0;
}

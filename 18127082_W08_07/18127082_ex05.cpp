#include<iostream>
#include<exception>
#include<string>
#include <sstream>

using namespace std;

class IntegerFormatException : public exception
{
private:
	int i;
public:
	IntegerFormatException(int i) {
		this->i = i;
	}
	const char* what() const throw()
	{
		return "Message: Integer Format Exception";
	}

};
int main()
{
	string a = "123";
	string b = "one-two-three";
	int number;
	istringstream iss(a);
	int number2;
	istringstream iss2(b);
	iss2 >> number2;
	iss >> number;
	try {
		if(!iss==123)
		{ 
			throw IntegerFormatException(number);
			cout << "String: " << a << endl;
			cout<<"Number :" << number << endl;
		}
		if (!iss2 == 123)
		{
			throw IntegerFormatException(number2);
			cout << "String: " << b << endl;
			cout << "Number :" << number2 << endl;

		}

	}
	catch (IntegerFormatException & ex) {
		cout << ex.what() << endl;
	}
	cout << "End of program" << endl;
	system("pause");
	return 0;
}
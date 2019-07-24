#include<iostream>
#include<exception>
#include<string>

using namespace std;

class FloatingPointNumberFormatException : public exception
{
private:
	float a;

public:
	FloatingPointNumberFormatException(int a) {
		this->a = a;
	}
	const char* what() const throw()
	{
		return "Message: Floating Point Number Format Exception";
	}

};
int main()
{
	float a = 3;
	try
	{
		if (fmod(a, 1) == 0)
		{
			throw FloatingPointNumberFormatException(a);
			cout << a << endl;
		}
		
	}
	catch (FloatingPointNumberFormatException & ex) {
		cout << ex.what() << endl;
	}
	cout << "End of program" << endl;
	system("pause");
	return 0;

}
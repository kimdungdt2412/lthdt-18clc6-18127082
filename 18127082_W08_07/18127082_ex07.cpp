#include<iostream>
#include<exception>
#include<string>

using namespace std;

class DateFormatException : public exception
{
private:
	int day, month, year;

public:
	DateFormatException(int day, int month, int year) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	const char* what() const throw()
	{
		return "Message: Date Format Exception";
	}

};
int main()
{
	int day = 31;
	int month = 13;
	int year = -12;
	try
	{
		if (day > 31 || day < 1 || month < 1 || month>12 || year < 0)
		{
			throw DateFormatException(day, month, year);
			cout << "Not a date: " << day << "/" << month << "/" << year << endl;
		}
	}
	catch (DateFormatException & ex)
	{
		cout << ex.what() << endl;

	}
	cout << "End";
	system("pause");
	return 0;
}
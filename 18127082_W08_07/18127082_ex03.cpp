#include<iostream>
#include<exception>
#include<string>
#include<fstream>

using namespace std;

class FileNotFoundException : public exception
{
public:
	const char* what() const throw()
	{
		return "Message: File Not Found Exception";
	}

};
int main()
{
	ifstream fin;
	fin.open("D:/input.txt");
	try {
		if (!fin.is_open())
		{
			throw FileNotFoundException();
		}
	}
	catch (FileNotFoundException & ex) {
		cout << ex.what() << endl;
	}
	fin.close();
	cout << "Bye bye";
	system("pause");
	return 0;
}
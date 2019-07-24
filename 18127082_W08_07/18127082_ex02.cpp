#include<iostream>
#include<exception>
#include<string>

using namespace std;

class IndexOutOfRangeException : public exception
{
private:
	int index, size;
public:
	IndexOutOfRangeException(int index, int size) {
		this->index = index;
		this->size = size;
	}
	const char* what() const throw()
	{
		return "Message: Index out of range exception";
	}

};
int main() {
	int arr[] = { 10, 20, 30, 40, 50 };
	int size = 5;
	int index = -2;
	try {
		if (index < 0 || index >= size)
			throw IndexOutOfRangeException(index, size);
		cout << arr[index] << endl;
	}
	catch (IndexOutOfRangeException & ex) {
		cout << ex.what() << endl;
	}
	cout << "End of program" << endl;
	return 0;
}
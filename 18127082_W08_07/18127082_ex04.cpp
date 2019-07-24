#include<iostream>
#include<exception>
#include<string>

using namespace std;

class IndexOutOf2DRangeException : public exception
{
private:
	int iRow, iCol, Col, Row;
public:
	IndexOutOf2DRangeException(int iCol, int iRow, int Col, int Row) {
		this->iCol = iCol;
		this->iRow = iRow;
		this->Col = Col;
		this->Row = Row;
	}
	const char* what() const throw()
	{
		return "Message: Index out of 2d range exception";
	}

};
int main()
{
	int array2D[3][5] =
	{
		{ 1,  2,  3,  4,  5 },  
		{ 6,  7,  8,  9,  10 }, 
		{ 11, 12, 13, 14, 15 }  
	};
	int iRow = 4;
	int Row = 3;
	int iCol = 4;
	int Col = 5;
	try
	{
		if (iCol < 0 || iCol >= Col || iRow < 0 || iRow >= Col)
		{
			throw IndexOutOf2DRangeException(iCol,iRow,Col, Row);
			cout << array2D[iRow][iCol] << endl;
		}

	}
	catch (IndexOutOf2DRangeException & ex) {
		cout << ex.what() << endl;
	}
	cout << "End of program" << endl;
	system("pause");
	return 0;
}
#include "Account.h"

Account::Account()
{
	m_id = 100000;
	m_money = 0;
}
void Account::create_Acc()
{
	do {
		cout << "Your money: ";
		cin >> m_money;
		if (m_money < 50000)
		{
			cout << "Failed" << endl;
		}
	} while (m_money < 50000);
	cout << "\nEnter The account No. :";
	cin >> m_id;
	cout << "\n\n\nAccount Created..";
	
}
void Account::show()
{
	cout << "Your ID: " << m_id << endl;
	cout << "Your money: " << m_money << endl;
}
void Account::addMoney()
{
	double x;
	cout << "Please enter how much money you want to add:";
	cin >> x;
	m_money = m_money + x;

}
void Account::withDraw()
{
	double x;
	double x1 = m_money - 50000;
	do
	{
		cout << "Please enter how much money you want to withdraw: ";
		cin >> x;
		if (x > x1)
		{
			cout << "Failed" << endl;
		}
		
	} while (x > x1);
	m_money = m_money - x;

}

double Account::money()
{
	cout << "Your balance: " << m_money << endl;
	return m_money;

}


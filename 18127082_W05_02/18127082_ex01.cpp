#include "Bank.h"

bank b("BIDV","1 Nguyen Van Cu");
User u;
Account a;
int main()
{
	int choice;
	bool active = true;
	cout << "BANK SYSTEM" << endl;
	cout << "-----------------------" << endl;
	while (active)
	{
		cout << "\nMain Menu" << endl;
		cout << "---------------" << endl;
		cout << "\t\n" << "1. Customers";
		cout << "\t\n" << "0. Exit";
		cout << "\n\n\t" << "> ";
		cin >> choice;
		switch (choice)
		{
		case 1:
		{
			u.menu();
			break;
		}
		case 0:
			active = !active;
			break;
		default:
			cout << "\nInvalid selection\n\n";
			break;
		}
	}
	return 0;
}

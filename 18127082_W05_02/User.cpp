#include "User.h"

User::User()
{
	m_name = "";
	mobile = 0;
	age = 18;
	no_Accounts = 0;
}
Account User::getAccount()
{
	return *acc;
}
void User::create()
{
	cout << "Enter your name: ";
	cin >> m_name;
	cout << "Enter your telephone number: ";
	cin >> mobile;
	cout << "Enter your Age: ";
	cin >> age;
}
void User::setAccount(Account* acc)
{
	this->acc = acc;
}
void User::addNewAccount()
{
	acc_list[no_Accounts].create_Acc();
	no_Accounts++;
}
void User::info()
{
	cout << "Your name: " << m_name << endl;
	cout << "Your age: " << age << endl;
	cout << "Number phone: " << mobile << endl;
	cout << "Accounts<" << no_Accounts << ">:" << endl;
	if (no_Accounts == 0)
	{
		cout << "<None>" << endl;
	}
	else
	{
		for (int i = 0; i < no_Accounts; i++)
		{
			acc_list[i].show();
		}
	}
	cout << endl;
}
int User::getID()
{
	return ID;
}
void User::setID(int ID)
{
	this->ID = ID;
}
void User::choosing_Account()
{
	int id_Acc;
	cout << "Input no Account: ";
	cin >> id_Acc;
	int choice;
	do {
		cout << "Main menu of Account: " << endl;
		cout << "1. Recharge " << endl;
		cout << "2. Withdrawal " << endl;
		cout << "3. Check balance " << endl;
		cout << "4. View information of account " << endl;
		cout << "5. Exit" << endl;
		cout << "Please input the function you want: ";
		cin >> choice;
		switch (choice)
		{
		case 1: acc_list[id_Acc].addMoney(); break;
		case 2: acc_list[id_Acc].withDraw(); break;
		case 3: acc_list[id_Acc].money(); break;
		case 4: acc_list[id_Acc].show(); break;
		case 5: break;
		}
	} while (choice != 5);
}
void User::menu()
{
		system("cls");
		int choice;
		do
		{
			cout << "Main menu: User " << endl;	
			cout << "1. Input your information" << endl;
			cout << "2. Create new account " << endl;
			cout << "3. Information of user " << endl;
			cout << "4. Manage your Account " << endl;
			cout << "5. Exit " << endl;
			cout << "Please input the function you want: ";
			cin >> choice;
			switch (choice)
			{
			case 1: this->create(); break;
			case 2: this->addNewAccount(); break;
			case 3: this->info();  break;
			case 4: this->choosing_Account(); break;
			case 5: break;
			}
		} while (choice!=5);

	
}
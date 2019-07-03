#ifndef _USER_
#define _USER_
#include "Account.h"
class User :public Account
{
private:
	string m_name;
	int mobile;
	int age;
	int no_Accounts;
	int ID;
	Account* acc;
	Account acc_list[10];
public:
	User();
	void create();
	void info();
	int getID();
	void setID(int ID);
	void addNewAccount();
	Account getAccount();
	void choosing_Account();
	void setAccount(Account* acc);
	void menu();

};
#endif // !_ACCOUNT_02_

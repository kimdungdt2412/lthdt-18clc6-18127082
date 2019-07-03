#ifndef _BANK_
#define _BANK_

#include <iostream>
#include <vector>
#include "User.h"
using namespace std;

class bank
{
private:
	string name;
	string address;
	User* user;
	User user_list[1000];
public:
	int no_user = 0;
	bank(string name, string add);
	bank(const bank& b);
	void info_cust(int id);
	void management();
	void main_menu();

};
#endif
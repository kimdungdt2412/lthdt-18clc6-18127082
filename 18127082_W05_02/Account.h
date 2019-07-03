#ifndef _ACCOUNT_
#define _ACCOUNT_
#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <cstdlib>
#include <ctime>
using namespace std;

class Account
{
private:
	int m_id;
	double m_money;
public:
	Account();
	void create_Acc();
	void addMoney();
	void withDraw();
	void show();
	double money();


};
#endif


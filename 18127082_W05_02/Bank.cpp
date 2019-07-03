#include "Bank.h"

bank::bank(string m_name, string add)
{
	name = m_name;
	address = add;

}
bank::bank(const bank& b)
{
	this->name = b.name;
	this->address = b.address;
	this->user = b.user;
}



#include "18127082.h"

void Castle::input()
{
	int n;
	int type;
	Gate* g=NULL;
	cout << "Nhap so cong: ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Nhap thong tin cong thu " << i << endl;
		cout << "1. Business Gate    2.Academic Gate      3.Power Gate" << endl;
		cin >> type;


		if (type == 1)
		{
			g = new BusinessGate;
		}
		else if (type == 2)
		{
			g = new AcademicGate;

		}
		else if (type == 3)
		{
			g = new PowerGate;
		}
		g->inputGate();
		a.push_back(g);
		
	}
}
bool Castle::savePrincess(Prince& p)
{
	for (int i = 0; i < a.size(); i++)
	{
		bool ans = a[i]->quaCong(p);
		if (ans == false)
		{
			return false;
		}
		return true;
	}
}
void Gate::inputGate()
{
	cout << "Nhap cong" << endl;
}
bool Gate::quaCong(Prince&p)
{
	return true;
}
void BusinessGate::inputGate()
{
	cout << "Nhap don gia: ";
	cin >> price;
	cout << "Nhap so luong: ";
	cin >> count;
}
bool BusinessGate::quaCong(Prince& p)
{
	int total;
	total = price * count;
	if (total > p.getMoney())
	{
		return false;
	}
	else

	{
		p.setMoney(p.getMoney() - total);
		return true;
	}
}
void AcademicGate::inputGate()
{
	cout << "Tri tue cau hoi: ";
	cin >> wisdomQuestion;

}
bool AcademicGate::quaCong(Prince& p)
{
	if (wisdomQuestion < p.getWisdom())
	{
		return true;
	}
	else
		return false;
}
void PowerGate::inputGate()
{
	cout << "Nhap suc manh dung si";
	cin >> m_power;
}
bool PowerGate::quaCong(Prince& p)
{
	if (p.getPower() > m_power)
	{
		p.setPower(p.getPower() - m_power);
		return true;
	}
	else
		return false;
}

void Prince::inputPrince()
{
	cout << " Nhap suc manh:";
	cin >> power;
	cout << "Nhap tri tue: ";
	cin >> wisdom;
	cout << "Nhap tien: ";
	cin >> money;
}
void Prince::outputPrince()
{
	cout << "Hoang tu" << endl;
	cout << "Suc manh:" << getPower() << endl;
	cout << "Tri tue: " << wisdom << endl;
	cout << "Tien: " << getMoney() << endl;
}
int Prince::getMoney()
{
	return money;
}
int Prince::getPower()
{
	return power;
}
int Prince::getWisdom()
{
	return wisdom;
}
void Prince::setMoney(int Money)
{
	this->money = Money;
}
void Prince::setPower(int Power)
{
	this->power = Power;
}

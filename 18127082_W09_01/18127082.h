#ifndef _CASTLE_H_
#define _CASTLE_H_

#include <iostream>
#include <vector>

using namespace std;

class Gate;
class Prince;


class Castle
{
private:
	vector<Gate*> a;
public:
	void input();
	bool savePrincess(Prince &p);
};


class Gate
{
public:
	virtual void inputGate();
	virtual bool quaCong(Prince &p);
};


class Prince
{
private:
	int money, wisdom, power;
public:
	void inputPrince();
	void outputPrince();
	int getMoney();
	int getWisdom();
	int getPower();
	void setMoney(int Money);
	void setPower(int Power);

};

class BusinessGate : public Gate
{
private:
	int price, count;
public:
	void inputGate();
	bool quaCong(Prince& p);

};

class AcademicGate : public Gate
{
private:
	int wisdomQuestion;
public:
	void inputGate();
	bool quaCong(Prince& p);
};

class PowerGate :public Gate
{
private:
	int m_power;
public:
	void inputGate();
	bool quaCong(Prince& p);
};
#endif // !_CASTLE_H_

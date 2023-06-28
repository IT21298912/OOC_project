#pragma once

#include<string>
using namespace std;
#include "Game.h"
#define SIZE 2
class Game;
class Payment
{

private:
	int Paymentid;
	string PaymentType;
	double Amount;
	string Date;
	Game*g1[SIZE];



public:
	Payment();
	Payment(int Pid,string Ptype,double Amount,string pDate);
	void Addgames(Game*pg1);
	void Caldiscount();
	void DisplayPdetail();
	~Payment();
};


#include "stdafx.h"
#include "Payment.h"
#include "Game.h"
#include<iostream>
#include<string>
using namespace std;


Payment::Payment()
{
	cout << "Default constructor of Payment called" << endl;
}

Payment::Payment(int Pid, string Ptype, double pAmount, string pDate)
{
	Paymentid = Pid;
	PaymentType = Ptype;
	Amount = pAmount;
	Date = pDate;
	
	

}

void Payment::Addgames(Game * pg1)
{
}




void Payment::Caldiscount()
{
}

void Payment::DisplayPdetail()
{
}


Payment::~Payment()
{
	cout << "Destructed" << endl;
}

#include "stdafx.h"
#include "Admin.h"
#include<iostream>
using namespace std;

Admin::Admin()
{
	cout << "Default constructor of Admin called" << endl;
}

Admin::Admin(string Aname, int Aid, string Apassword)
{
	AdminName = Aname;
	Adminid = Aid;
	AdminPassword = Apassword;
}

void Admin::Alogin()
{
}

void Admin::UpdateSite()
{
}

void Admin::ChechPayment()
{
}


Admin::~Admin()
{
	cout << "Destructed" << endl;
}

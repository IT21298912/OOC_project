#include "stdafx.h"
#include "UnregisteredUser.h"
#include<string>
#include<iostream>
using namespace std;



UnregisteredUser::UnregisteredUser()
{
	cout << "Default counstructor of the UnregisteredUser called" << endl;
}

UnregisteredUser::UnregisteredUser(string pEmail, int Pnumber)
{
	Email = pEmail;
	PhoneNumber = Pnumber;
}

void UnregisteredUser::RegistertoSystem()
{
}


UnregisteredUser::~UnregisteredUser()
{
	cout << "Destructed" << endl;
}

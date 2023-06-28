#pragma once
#include<string>
using namespace std;
#include"User.h"

class UnregisteredUser:public User
{

protected:
	string Email;
	int PhoneNumber;
public:
	UnregisteredUser();
	UnregisteredUser(string pEmail,int Pnumber);
	void RegistertoSystem();
	~UnregisteredUser();
};


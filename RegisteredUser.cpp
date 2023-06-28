#include "stdafx.h"
#include "RegisteredUser.h"
#include<iostream>
using namespace std;


RegisteredUser::RegisteredUser()
{
	cout << "Default constructor of RegisteredUser called" << endl;
}



RegisteredUser::RegisteredUser(string Uname, string pwd, int Uid, int Fid1, string Fdesc1, int Fid2, string Fdesc2, Payment*pp1)
{
	Username = Uname;
	Password = pwd;
	Userid = Uid;
	f1[0] = new Feedback(Fid1,Fdesc1);
	f1[1] = new Feedback(Fid2,Fdesc2);
	p1 = pp1;

}

void RegisteredUser::Login()
{
}

void RegisteredUser::MakePayment()
{
}

void RegisteredUser::SendFeedback()
{
}

void RegisteredUser::EditProfile()
{
}

void RegisteredUser::DownloadGames()
{
}


RegisteredUser::~RegisteredUser()
{
	cout << "Destructed" << endl;
}



#pragma once
#include<string>
using namespace std;
#include "UnregisteredUser.h"
#include "Feedback.h"
#include"Payment.h"
#define SIZE 2


class RegisteredUser:public UnregisteredUser
{
private:
	string Username;
	string Password;
	int Userid;
	Feedback*f1[SIZE];
	Payment*p1;

public:
	RegisteredUser();
	RegisteredUser(string Uname,string pwd,int Uid, int Fid1, string Fdesc1, int Fid2, string Fdesc2,Payment*pp1); 


	void Login();
	void MakePayment();
	void SendFeedback();
	void EditProfile();
	void DownloadGames();
	~RegisteredUser();
};


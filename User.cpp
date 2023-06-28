#include "stdafx.h"
#include "User.h"
#include<string>
#include<iostream>
using namespace std;

User::User()
{
	cout << "Default constructor of the user called" << endl;
}

User::User(string pname, string paddress)
{
	name = paddress;
	address = paddress;

}


User::~User()
{
	cout << "Destructed" << endl;
}

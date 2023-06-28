#pragma once

#include<string>
using namespace std;
class User
{

protected:
	string name;
	string address;

public:
	User();
	User(string pname,string paddress);
	~User();
};


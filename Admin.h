
#include<string>
using namespace std;
#include "User.h"

class Admin:public User
{
private:
	string AdminName;
	int Adminid;
	string AdminPassword;

public:
	Admin();
	Admin(string Aname,int Aid,string Apassword);
	void Alogin();
	void UpdateSite();
	void ChechPayment();
	~Admin();
};


#pragma once
#include<string>
using namespace std;

class Feedback
{
private:
	int Feedbackid;
	string Fdescription;

public:
	Feedback();
	Feedback(int Fid,string Fdesc);
	void displayFdetails();

	~Feedback();
};


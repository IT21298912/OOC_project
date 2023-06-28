#include "stdafx.h"
#include "Feedback.h"
#include<iostream>
#include<string>
using namespace std;

Feedback::Feedback()
{
	cout << "Default constructor of Feedback called" << endl;
}

Feedback::Feedback(int Fid, string Fdesc)
{
	Feedbackid = Fid;
	Fdescription = Fdesc;
}

void Feedback::displayFdetails()
{
	cout << "Feedback ID :" << Feedbackid << endl;
	cout << "Feedback description is:" << Fdescription << endl;
}


Feedback::~Feedback()
{
	cout << "Destructed" << endl;

}

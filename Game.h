#pragma once
#include "Payment.h"
#include "Feedback.h"
#include<string>
using namespace std;
#define SIZE 2
class Payment;
class Feedback;
class Game
{

private:
	int GameID;
	string GameName;
	string GameSize;
	Payment*pp1;
	Feedback*Ff1[SIZE];
	

public:
	Game();
	Game(int Gid,string Gname,string Gsize, Payment*pP1,Feedback*ff1, Feedback*ff2);
	void Displaygdetails();
	~Game();
};


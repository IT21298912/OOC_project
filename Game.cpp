#include "stdafx.h"
#include "Game.h"
#include "Payment.h"
#include "Feedback.h"
#include<string>
#include<iostream>

using namespace std;

Game::Game()
{
	cout << "Default constructor of Game called" << endl;
}

Game::Game(int Gid, string Gname, string Gsize, Payment*pP1, Feedback*ff1, Feedback*ff2)
{
	GameID = Gid;
	GameName = Gname;
	GameSize = Gsize;
	pp1 = pP1;
	pp1->Addgames(this);
	Ff1[0] = ff1;
	Ff1[1] = ff2;

	
}

void Game::Displaygdetails()
{
}


Game::~Game()
{
	cout << "Destructed" << endl;
}

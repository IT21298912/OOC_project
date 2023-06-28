#include "stdafx.h"
#include "Category.h"
#include "Game.h"
#include<string>
#include<iostream>
using namespace std;

Category::Category()
{
	cout << "Default constructor of Category called" << endl;
}

Category::Category(int CID, string Ctype, Game * gg1, Game*gg2)
{ 
	CategoryID = CID;
	CategoryType = Ctype;
	Gg1[0] = gg1;
	Gg1[1] = gg2;


}

void Category::Displaycategory()
{
}


Category::~Category()
{
	cout << "Destructed" << endl;
}

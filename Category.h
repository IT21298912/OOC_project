#pragma once
#include "Game.h"
#include<string>
using namespace std;
#define SIZE 2

class Category
{
private:
	int CategoryID;
	string CategoryType;
	Game*Gg1[SIZE];

public:
	Category();
	Category(int CID,string Ctype, Game*gg1, Game*gg2);
	void Displaycategory();
	~Category();
};


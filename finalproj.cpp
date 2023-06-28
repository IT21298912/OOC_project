

#include "stdafx.h"
#include "stdafx.h"
#include "User.h"
#include "UnregisteredUser.h"
#include "RegisteredUser.h"
#include "Admin.h"
#include "Payment.h"
#include "Game.h"
#include "Feedback.h"
#include "Category.h"
#include<string>
#include<iostream>
using namespace std;

int main()
{
	//----------Object creation-------------// 




	User*u1 = new User("Nisal", "Kurunegala");	 //Overloaded constructor
	//User*u1 = new User();						//Default constructor


 

	UnregisteredUser*ur1 = new UnregisteredUser("Nisal3@gmail.com", 0774524123);	//Overloaded constructor
	//UnregisteredUser*ur1 = new UnregisteredUser();								//Default constructor


	
	Payment*p1 = new Payment(3001, "PayPal", 1000.00, "2022-11-19");
	//Payment*p1 = new Payment();

	RegisteredUser*r1 = new RegisteredUser("tharidu@1", "12#iytPP", 0001, 2001
	, "very nice", 2002, "superb site",p1);	// ("Pass Feedback details & the Payment object") //Overloaded constructor
																														
	//RegisteredUser*r1 = new RegisteredUser();			//Default constructor



					

	Admin*a1=new Admin("Kamal", 1001, "adka32#K");	//Overloaded constructor
	//Admin*a1 = new Admin();						//Default constructor


	Feedback*f1 = new Feedback(2002,"super");		//Overloaded constructor
	Feedback*f2 = new Feedback(2003, "I like it");
	//Feedback*f1 = new Feedback();					//Default constructor

	
	Game*g1 = new Game(301, "Mario", "2GB", p1,f1,f2);	//Overloaded constructor
	
	//Game*g1 = new Game();								//Default constructor

	
	Category*c1 = new Category();	//Default constructor





	//-----------Method Call------------//
	ur1->RegistertoSystem();


	p1->Caldiscount();
	p1->DisplayPdetail();
	             


	r1->DownloadGames();
	r1->EditProfile();
	r1->Login();
	r1->MakePayment();
	r1->RegistertoSystem();         //inheritance relationship
	r1->SendFeedback();


	a1->Alogin();
	a1->ChechPayment();
	a1->UpdateSite();

	f1->displayFdetails();
	f2->displayFdetails();

	g1->Displaygdetails();


	c1->Displaycategory();



	delete u1;
	delete ur1;
	delete p1;
	delete r1;
	delete a1;
	delete f1;
	delete f2;
	delete c1;
	delete g1;

    return 0;
}


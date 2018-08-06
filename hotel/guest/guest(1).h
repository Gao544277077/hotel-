// Header-->function declarations
#include<iostream>
#include<string>
using namespace std;
#ifndef guest_H
#define guest_H

class guest{
	public:
		//Default constructor
		guest();
		
		//overload Constructor
		guest(string,int,int);
		//Destructor
		~guest(); 
		//accessor functions
		 string getName() const;
		 // retrun name of guest;
		 int getPhone() const;
		 //return phone number of guest
		 int getRoom() const;
		 //return room number of guest
		 //mutator functions
		 void setName(string) ;
		   // set name of guest
		   
		   
		   void setPhone(int);
		   //set phone number of guest
		   void setRoom(int);
		  //set romm of guest
		  
		
	private:
		//member function
		string newName;
	int newPhone;
	double newRoom;	
};


#endif 

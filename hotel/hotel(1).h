// Header-->function declarations
#include<iostream>
#include<string>
using namespace std;
#ifndef hotel_H
#define hotel_H

class hotel{
	public:
		//Default constructor
		hotel();
		
		//overload Constructor
		hotel(string,int,string);
		//Destructor
		~hotel(); 
		//accessor functions
		 string gethotelName() const;
		 // retrun name of hotel;
		 int gethotelPhone() const;
		 //return phone number of hotel
		 string getAddress() const;
		 //return hotel address.
		 //mutator functions
		 void sethotelName(string) ;
		   // set name of patient
		   
		   
		   void sethotelPhone(int);
		   //set height of patient
		   void setAddress(string);
		  //set weight of patient
	private:
		string newhotelName;
	int newhotelPhone;
	string newAddress;	
};


#endif 

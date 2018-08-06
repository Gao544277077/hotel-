// Header-->function declaration
#include<iostream>
#include<string>
using namespace std;
#ifndef hll_H
#define hll_H

class hll{
	public:
		hll();
		
		
		hll(string,int,int);
		//Destructor
		~hll(); 
		//accessor functions
		 string getName() const;
		 // retrun name of patient;
		 int getPhone() const;
		 int getRoom() const;
		 //mutator functions
		 void setName(string) ;
		   // set name of patient
		   
		   
		   void setPhone(int);
		   //set height of patient
		   void setRoom(int);
		  //set weight of patient
		  
		double calculatehll();
		
	private:
		string newName;
	int newPhone;
	double newRoom;	
};


#endif 

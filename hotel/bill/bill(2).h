// Header-->function declarations
#include<iostream>
#include<string>
using namespace std;
#ifndef bill_H
#define bill_H

class bill{
	public:
		//Default constructor
		bill();
		
		//overload Constructor
		bill(double,double,double,int,double);
		//Destructor
		~bill(); 
		//accessor functions
		 double getRate() const;
		 // retrun room rate of patient;
		 double getExpenses() const;
		 //return expenses;
		 double getDeposit() const;
		 //return deposit;
		 //mutator functions
		 int getDay() const;
		 //return day of stay;
		 double getTax() const;
		 //return tax;
		 void setRate(double) ;
		   // set room rate;
		   
		   
		   void setExpenses(double);
		   //set Extra Expenses
		  
		  void setDeposit(double);
		  //set deposit;
		  void setDay(int);
		  //set day;
		  void setTax(double);
		  //set tax
		double Total();
		//return total amount;
		double Balance();
		//return balance due
	private:
		//member function
		double newRate;
	double newExpenses;
	double newDeposit;	
	int newDay;
	double newTax;
};


#endif 

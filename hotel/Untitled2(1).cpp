//Function Definitions
#include"bill.h"
using namespace std;
  //creat the new variable and the initial value is 0.
  bill::bill(){
  	newRate=0.0;
  	newExpenses=0.0;
  	newDeposit=0.0;
  	newDay=0;
  	newTax=0.0;
  }
  
  bill::bill(double rate, double expenses,double deposit,int day,double tax){
  }
  bill::~bill(){
  	
  	
  }

  double bill::getRate() const{ 
  return newRate;
}
    double bill::getExpenses() const{ 
  return newExpenses;
}
   double bill::getDeposit() const{ 
  return newDeposit;
}
   int bill::getDay() const{ 
  return newDay;
}
   double bill::getTax() const{ 
  return newTax;
}


void bill::setRate(double rate){
	newRate=rate;
}
void bill::setExpenses(double expenses){
	newExpenses=expenses;
}
void bill::setDeposit(double deposit){
	newDeposit=deposit;
}
void bill::setDay(int day){
	newDay=day;
}
void bill::setTax(double tax){
	newTax=tax;
}



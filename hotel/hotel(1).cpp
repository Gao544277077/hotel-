//Function Definitions
#include"hotel.h"
using namespace std;
  //creat the new variable and the initial value is 0.
  hotel::hotel(){
  	newhotelPhone=0;
  }
  
  hotel::hotel(string hotelname,int hotelphone,string address){
  	 newhotelName=hotelname;
  	 newhotelPhone=hotelphone;
     newAddress=address;
}
  hotel::~hotel(){
  	
  	
  }

  string hotel::gethotelName() const{ 
  return newhotelName;
}
    int hotel::gethotelPhone() const{ 
  return newhotelPhone;
}
    string hotel::getAddress() const{ 
  return newAddress;
}

void hotel::sethotelName(string hotelname){
	newhotelName=hotelname;
}
void hotel::sethotelPhone(int hotelphone){
	newhotelPhone=hotelphone;
}
void hotel::setAddress(string address){
	newAddress=address;
}


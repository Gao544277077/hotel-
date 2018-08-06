//Function Definitions
#include"guest.h"
using namespace std;
  //creat the new variable and the initial value is 0.
  guest::guest(){
  	newPhone=0;
  	newRoom=0.0;
  }
  
  guest::guest(string name,int phone,int room){
  	 newName=name;
  	 newPhone=phone;
  	 newRoom=room;

  }
  guest::~guest(){
  	
  	
  }

  string guest::getName() const{ 
  return newName;
}
    int guest::getPhone() const{ 
  return newPhone;
}
    int guest::getRoom() const{ 
  return newRoom;
}

void guest::setName(string name){
	newName=name;
}
void guest::setPhone(int phone){
	newPhone=phone;
}
void guest::setRoom(int room){
	newRoom=room;
}



#include"hll.h"
using namespace std;
  
  hll::hll(){
  	newPhone=0;
  	newRoom=0.0;
  }
  
  hll::hll(string name,int phone,int room){
  	 newName=name;
  	 newPhone=phone;
  	 newRoom=room;

  };
  hll::~hll(){
  	
  	
  }

  string hll::getName() const{ 
  return newName;
}
    int hll::getPhone() const{ 
  return newPhone;
}
    int hll::getRoom() const{ 
  return newRoom;
}

void hll::setName(string name){
	newName=name;
}
void hll::setPhone(int phone){
	newPhone=phone;
}
void hll::setRoom(int room){
	newRoom=room;
}


double hll::calculatehll(){
	return ((newRoom*703)/(newPhone*newPhone));
}

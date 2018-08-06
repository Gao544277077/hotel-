#include<iostream>
#include<string>
#include"hotel.h"
#include"guest.h"
#include"bill.h"
using namespace std;

int main(){
	string name;
	int phone;
	int room;
	double rate;
	double deposit;
	double tax;
	double expenses;
	int day;
	string hotelname;
	int hotelphone;
	string address;
	//hotel information
	cout<<"Enter hotel's name:"<<endl;
	cin>>hotelname;
	cout<<"Enter hotel's contact information(phone number):"<<endl;
	cin>>hotelphone;
	cout<<"Enter hotel's address:"<<endl;
	cin>>address;

	cout<<"Enter guest's name:"<<endl;
	cin>>name;
	cout<<"Enter guest's contact information(phone number):"<<endl;
	cin>>phone;
	cout<<"Enter guest's room number:"<<endl;
	cin>>room;
	

	//bill data.
	cout<<"enter the room rate:"<<endl;
	cin>>rate;
	cout<<"enter the day of guest stay:"<<endl;
	cin>>day;
	cout<<"enter the deposit:"<<endl;
	cin>>deposit;
	cout<<"enter the tax rate(perentage):"<<endl;
	cin>>tax;
	cout<<"enter extra expenses:"<<endl;
	cin>>expenses;
		//output of hotel_1
	hotel hotel_1(hotelname,hotelphone,address);
	cout<<endl<<"hotel's name:"<<hotel_1.gethotelName()<<endl<<"hotel'phone number:"<<hotel_1.gethotelPhone()
	<<endl<<"hotel address:"<<hotel_1.getAddress() <<endl;
		//output of guest_1;
	guest guest_1(name,phone,room);
	cout<<endl<<"guest's name:"<<guest_1.getName()<<endl<<"guest'phone number:"<<guest_1.getPhone()
	<<endl<<"guest's room number:"<<guest_1.getRoom()<<endl;
//output of bill
	bill bill_1(rate,expenses,deposit,day,tax);
	cout<<endl<<"room rate:"<<bill_1.getRate()<<endl<<"extra Expenses:"<<bill_1.getExpenses()<<"Deposit:"<<bill_1.getDeposit()<<"Tax"<<bill_1.getTax()<<"Day of stay:"<<bill_1.getDay()<<endl;
	cout<<"balance due:"<<bill_1.Balance()<<endl;
	cout<<"Total:"<<bill_1.Total()<<endl;
	return 0;
}

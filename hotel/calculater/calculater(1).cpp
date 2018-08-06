#include<iostream>
#include<stack>
#include<string.h>
#include<string>
#include<sstream>
#include<iomanip>
using namespace std;
//check the type for operator
bool isOperator(const string& input);
void performOp(const string& input, stack<double>& cStack);
int main(){

    stack<double> cStack;
    string input;

	while(true)
	{
	
	
	cout<<"enter the Postfix";
		//enter the input
	cin>>input;

	
	//check numeric value
	double num;
	if(istringstream(input)>>num)
	{
		cStack.push(num);
	}
	//operator
	else if (isOperator(input))
	{
		performOp(input,cStack);
	}
	//stop the runing
	else if(input=="p")
	{
		return 0;
	}
else {
           cout<<"error"<<endl;
	}
}
}
//Creater operator
bool isOperator(const string& input)
{
		string ops[] ={"+","-","*","/"};	
	for(int i=0;i<4;i++)
{   
if (input == ops[i]){

return true;
}
}
return false;
}

//performing the program.
void performOp(const string& input, stack<double>& cStack)
{//left vale,right value and result;
	double lval,rval,result;
	
	rval=cStack.top();
	cStack.pop();
	
	lval=cStack.top();
	cStack.pop();
	//if the operation="-",left-right;
	if(input =="-")
	{
		result=lval-rval;
	}
	else if(input=="+")
	{
		result=lval+rval;
	}
	else if (input =="*")
	{result =lval*rval;
	}
	else{
		result=lval/rval;
	}
	cout<<result<<endl;
}



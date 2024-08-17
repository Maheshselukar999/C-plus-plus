#include<iostream>
using namespace std;
class Swap //swap class definition
{
	int a,b; // private data member
	public:
	set() // set member function definition
	{
		cout<<"Enter the value of A:";
		cin>>a;	
		cout<<"Enter the value of B:";
		cin>>b;
	}
	friend swap_value(Swap &);	 //firend function declaration
};
swap_value(Swap &obj) //friend function definition
{
	cout<<"Before swaping Value..."<<endl;
	cout<<"A:"<<obj.a<<endl;
	cout<<"B:"<<obj.b<<endl;
	obj.a=obj.a+obj.b;
	obj.b=obj.a-obj.b;
	obj.a=obj.a-obj.b;
	cout<<"After swaping values..."<<endl;
	cout<<"A:"<<obj.a<<endl;
	cout<<"B:"<<obj.b<<endl;
}
main()
{
	Swap obj; //object created 
	obj.set(); // set member function called
	swap_value(obj); //swap_value firend function called and passed object of swap class
}


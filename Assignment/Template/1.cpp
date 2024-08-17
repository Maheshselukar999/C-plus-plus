#include<iostream>
using namespace std;
template<class T> // template is a keyword class T is template type parameter enclosed within a painr og angle brackets, also called generic datatype
swap_value(T a,T b) //function for swaping values..
{
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"After swaping values..."<<endl;
	cout<<"A:"<<a<<endl;
	cout<<"B:"<<b<<endl;
}
main()
{
	int a=5,b=10;
	cout<<"Before swaping value...."<<endl;
	cout<<"A="<<a<<endl;
	cout<<"B="<<b<<endl;
	swap_value(a,b); //function calling
}


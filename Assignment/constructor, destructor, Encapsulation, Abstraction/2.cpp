#include<iostream>
using namespace std;
class Addition // adition class definition
{
	public:
		float a,b; //data member
		Addition() //default constructor
		{
			cout<<"For Addition"<<endl;
			cout<<"Enter the No1=";
			cin>>a;
			cout<<"Enter the No2=";
			cin>>b;	
			cout<<"Addition of "<<a<<" and "<<b<<" is "<<a+b<<endl;
	}
};
class Subtraction // subtraction class definition
{
	public:
		float a,b; //data member
		Subtraction() // default constructor
		{			
			cout<<"For Subtraction"<<endl;
			cout<<"Enter the No1=";
			cin>>a;
			cout<<"Enter the No2=";
			cin>>b;	
			cout<<"Subtraction of "<<a<<" and "<<b<<" is "<<a-b<<endl;
		}
};
class Multiplication // multiplication class
{
	public:
		float a,b; //data member
		Multiplication() // default constructor
		{
			cout<<"For Multiplication"<<endl;
			cout<<"Enter the No1=";
			cin>>a;
			cout<<"Enter the No2=";
			cin>>b;	
			cout<<"Multiplication of "<<a<<" and "<<b<<" is "<<a*b<<endl;
	}
};

class Division // division class
{
	public:
		float a,b;//data member
		Division() //default constructor
		{
			cout<<"For Division"<<endl;
			cout<<"Enter the No1=";
			cin>>a;
			cout<<"Enter the No2=";
			cin>>b;	
			if(b==0)
			{
				cout<<"Cant divided by zero";
			}
			else
			{
				cout<<"Division of "<<a<<" and "<<b<<" is "<<a/b<<endl;
			}
	}
};
main()
{
	Addition add; //add object of  Addition class
	Subtraction sub;//sub object of  Subtraction class
	Multiplication mul;//mul object of Multiplication class
	Division div;//div object of  Division class
}

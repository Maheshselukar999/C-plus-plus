#include<iostream>
using namespace std;
class Employee // Employee class 
{
		// private data member
		int id;
		float rate;
		double salary;
		string name;
	public:
		Employee() //default constructor
		{
			cout<<"Enter the Employee id";
			cin>>id;
			cout<<"Enter the Employee Name";
			cin>>name;
			cout<<"Enter the Performance Rate[0-5]";
			cin>>rate;
		}
		setsalary(double empsalary) //setsalary member function for set salary
		{
			salary=empsalary;
		}
		calculatesalary()//member function for calculate salary 
		{
			if(rate>=0.0 && rate<=5.0)
			{
				salary+=salary*rate/100;
			}
			else
			{
				cout<<"Invalid Rating..";
			}
		}
		show()//display updated salary
		{
			cout<<"Updated Salary="<<salary;
		}
};
main()
{
		Employee e;
		double empsalary;
		cout<<"Enter the Employee salary";
		cin>>empsalary;
		e.setsalary(empsalary);
		e.calculatesalary();
		e.show();
}


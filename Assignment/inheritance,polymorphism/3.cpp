#include<iostream>
using namespace std;
class Person
{
	string name;
	int age;
	public:
		set_person() // store the information 
		{
			cout<<"Enter the name:";
			cin>>name;
			cout<<"Enter the age:";
			cin>>age;
		}
		get_person() //diplay the information
		{
			cout<<"Name"<<name<<endl;
			cout<<"Age:"<<age<<endl;
		}
};
class Student:public Person //student class derived by person classs
{
	int percentage;
	public:
		set_student()
		{
			set_person();
			cout<<"Enter the percentage:";
			cin>>percentage;
		}
		get_student()
		{
			get_person();
			cout<<"Percentage:"<<percentage<<endl;
		}
};
class Teacher:public Person //teacher class derived by person class
{
	int salary;
	public:
		set_teacher()
		{
			set_person();
			cout<<"Enter Salary:";
			cin>>salary;
		}
		get_teacher()
		{
			get_person();
			cout<<"Salary:"<<salary<<endl;
		}
};
main()
{
	Student obj1;//student class object
	Teacher obj2;//teacher class object
	obj1.set_student();
	obj1.get_student();
	obj2.set_teacher();
	obj2.get_teacher();
}



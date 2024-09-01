#include<iostream>
using namespace std;
class Student
{
	string name,div;
	int roll,clas;
	public:
		set_student()
		{
			cout<<"Enter the Student Name:";
			cin>>name;
			cout<<"Enter the roll number";
			cin>>roll;
			cout<<"Enter the class";
			cin>>clas;
			cout<<"Enter the Division";
			cin>>div;
		}
		get_student()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Roll number:"<<roll<<endl;
			cout<<"Class:"<<clas<<endl;
			cout<<"Division:"<<div<<endl;
		}
};
class Marks
{
	int marks[3],total;
	float percentage;
	public:
		set_marks()
		{
			cout<<"Enter the Marks of HTML:";
			cin>>marks[1];
			cout<<"Enter the Marks of CSS:";
			cin>>marks[2];
			cout<<"Enter the Marks of Javascript:";
			cin>>marks[3];
		}
		get_result()
		{
			total=marks[1]+marks[2]+marks[3];
			percentage=(float)total/3;
			cout<<"Total Marks:"<<total<<endl;
			cout<<"Percentage:"<<percentage<<endl;	
		}	
};
class Marksheet:public Student,public Marks
{
	public:
		display_marksheet()
		{
			set_student();
			set_marks();
			get_student();
			get_result();
		}
		
};
main()
{
	Marksheet obj1;
	obj1.display_marksheet();
}

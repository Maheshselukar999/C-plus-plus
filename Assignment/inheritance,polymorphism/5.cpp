#include<iostream>
using namespace std;
class Student
{
	int roll_no;
	public:
		set_roll_no()
		{
			cout<<"Enter the Roll No:";
			cin>>roll_no;
		}
		get_roll_no()
		{
			cout<<"Roll No:"<<roll_no<<endl;
		}
};
class Test:public Student
{
	protected:
	int mark1,mark2;	
	public:
		set_mark()
		{
			cout<<"Enter the First Subject Marks";
			cin>>mark1;
			cout<<"Enter the Second Subject Marks";
			cin>>mark2;
		}
		get_mark()
		{
			cout<<"First Subject Mark"<<mark1<<endl;
			cout<<"Second Subject Mark"<<mark2<<endl;
		}		
};
class Result:public Test
{
	int total_mark;
	public:
		set_total()
		{
			total_mark=mark1+mark2;
		}
		get_total()
		{
			cout<<"Total Mark:"<<total_mark<<endl;
		}
};
main()
{
	Test obj1;
	Result obj2;
	obj1.set_roll_no();
	obj2.set_mark();
	obj2.set_total();
	obj1.get_roll_no();
	obj2.get_mark();
	obj2.get_total();
}

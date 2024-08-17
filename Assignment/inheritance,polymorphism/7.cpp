#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Base 1 class constructor called"<<endl;
		}
};
class B
{
	public:
		B()
		{
			cout<<"Base 2 class Constructor called"<<endl;
		}
};
class C:public A,public B
{
	public:
		C()
		{
			cout<<"Derived class constructor called"<<endl;
		}
};
main()
{
	C obj;
}


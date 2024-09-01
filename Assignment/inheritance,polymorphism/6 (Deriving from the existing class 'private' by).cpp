/* 			Base class          Derived class
		    private will be -> not inherited
		    public will be-> private
		    protected will be -> private   */
#include<iostream>
using namespace std;
class A // Base class
{
	private:
		int x;
	public:
		int y;
	protected:
		int z;
};
class B:private A // derived class
{
	public:
		func1()
		{
			x=1; //error 
			y=2; // correct
			z=3; // correct
		}
};
class C:public B // subsequently derived class
{
	public:
		func2()
		{
			x=1; //error 
			y=2; // error
			z=3; // error
		}
};
nonfunc(B &obj2) // non-member function
{
	obj2.x=1; // error 
	obj2.y=2; // error
	obj2.z=3; // error
};
main() // non-member function
{
	A obj1;
	B obj2;
	C obj3;
	obj1.func1();
	obj2.func2();
	nonfunc(obj2);
}


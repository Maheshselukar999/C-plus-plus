#include<iostream>
using namespace std;
class Rectangle // rectangle class
{
	protected: 
	int length,width; // protected data member for accessing Area class member function
	public:
		set() // set member function for set length and width
		{
			cout<<"Enter the length of Rectangle:";
			cin>>length;	
			cout<<"Enter the width of Rectangle:";
			cin>>width;
		}	
};
class Area:public Rectangle // area class derived by rectangle class
{
	public:
		get() // for display Area of rectangle
		{
			cout<<"Area of Rectangle="<<length*width;
		}
};
main()
{
	Area obj; // Area class object created
	obj.set(); // set member function calling using object
	obj.get();// get member function calling using object
}

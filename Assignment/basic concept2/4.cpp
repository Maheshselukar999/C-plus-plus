#include<iostream>
using namespace std;
class Circle  // circle class
{
	float r; // private data member for store radius
	public:
		calc() // calc() member funtion for get radius of circle
		{
			cout<<"Enter the radius of circle=";
			cin>>r;
		}
		show()//Show member memeber function for display 
		{
			cout<<"Area of circle="<<r*r*3.14<<endl;
			cout<<"Circumference of Circle="<<2*3.14*r;
		}
};
main()
{
	Circle obj;// object of Circle class
	obj.calc();//calling calc() funtion using object
	obj.show();//calling show() function using object
}

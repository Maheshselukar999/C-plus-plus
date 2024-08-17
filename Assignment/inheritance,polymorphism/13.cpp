#include<iostream>
using namespace std;
class Find_area{
	public:
		area(double radius) //member function for find area of circle
		{
			cout<<"Area of circle:"<<3.14*radius*radius<<endl; // 3.14 is pi value
		}
		area(int length,int breadth) //member function for find area of rectangle
		{
			cout<<"Area of Rectangle:"<<length*breadth<<endl;
		}
		area(double length,double breadth) //member function for find area of triangle
		{
			cout<<"Area of Triangle:"<<(length*breadth)/2;
		}
};
main()
{
	Find_area obj;
	obj.area(5.13);
	obj.area(5,10);
	obj.area(5.5,10.5);
}

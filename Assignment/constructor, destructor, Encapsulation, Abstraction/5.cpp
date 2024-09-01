#include<iostream>
using namespace std;
class Triangle // Triangle class
{
	public:
		Triangle(int l1,int l2,int l3) // parameterized constructor
		{
			if(l1==l2 && l1==l3 && l2==l3)
			{
				cout<<"This is equilateral Triangle...";
			}
			else if(l1!=l2 && l1!=l3 && l2!=l3)
			{
				cout<<"This is scalene Triangle...";
			}
			else
			{
				cout<<"This is isosceles Triangle...";
			}
		}
};
main()
{
	int len1,len2,len3;
	cout<<"Enter the length of side1:";
	cin>>len1;
	cout<<"Enter the length of side2:";
	cin>>len2;
	cout<<"Enter the length of side3:";
	cin>>len3;
	Triangle t(len1,len2,len3); // parameterized constructor called
}



#include<iostream>
using namespace std;
class Rectangle // Rectangle class
{
	int length,width; // private data member
	public:
		set() // set member function for set length and width
		{
			cout<<"Enter the length of Rectangle=";
			cin>>length;
			cout<<"Enter the width of Rectangle=";
			cin>>width;
		}
		show() // show member function for display Area,perimeter of rectangle
		{
			cout<<"Area of Rectangle="<<length*width<<endl;
			cout<<"Perimeter of Rectangle="<<(length+width)*2;
		}
};
main()
{
 	Rectangle ob; // object created using rectangle class
	ob.set(); // set method calling
	ob.show();// show method calling
}
